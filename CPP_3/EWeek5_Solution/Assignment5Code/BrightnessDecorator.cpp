#include "BrightnessDecorator.h"
#include "Color.h"
#include "ranged_number.h"

namespace BitmapGraphics
{
    BrightnessDecorator::BrightnessDecorator(
        HBitmapIterator originalIterator,
        const int& brightnessAdjustment) :
        BitmapIteratorDecorator{ std::move(originalIterator) },
        myBrightnessAdjustment{ brightnessAdjustment }
    {
    }

    void BrightnessDecorator::setBrightnessAdjustment(int brightnessAdjustment)
    {
        myBrightnessAdjustment = brightnessAdjustment;
    }

    int BrightnessDecorator::getBrightnessAdjustment() const
    {
        return myBrightnessAdjustment;
    }

    // Arithmetic with unsigned values can have wrap-around
    // consequences, so we want to use int here.
    using ColorComponent = ranged_number<int, 0, 255>;

    Color BrightnessDecorator::getColor() const
    {
        const auto oldColor{ myOriginalIterator->getColor() };

        const ColorComponent red(oldColor.getRed() + myBrightnessAdjustment);
        const ColorComponent green(oldColor.getGreen() + myBrightnessAdjustment);
        const ColorComponent blue(oldColor.getBlue() + myBrightnessAdjustment);

        return Color{ Binary::Byte(red), Binary::Byte(green), Binary::Byte(blue) };
    }
}
