canvasWebpackJsonp([118],{"1Y62h3eT2s":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=Object.freeze({inputHeightSmall:"1.75rem",inputHeightMedium:"2.375rem",inputHeightLarge:"3rem"})},"4Bs+VgWWjP":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n="function"==typeof Symbol&&"symbol"==typeof Symbol.iterator?function(e){return typeof e}:function(e){return e&&"function"==typeof Symbol&&e.constructor===Symbol&&e!==Symbol.prototype?"symbol":typeof e}
t.default=function(){var e={};[].concat(Array.prototype.slice.call(arguments)).forEach(function(t){e=function e(t,r){if(o(r)){var n=[].concat(a(Object.keys(r)),a(Object.getOwnPropertySymbols(r))),u=Object.assign({},t)
n.forEach(function(n){o(t[n])&&o(r[n])?u[n]=e(t[n],r[n]):i(r[n])&&i(t[n])?u[n]=[].concat(a(new Set([].concat(a(t[n]),a(r[n]))))):i(t[n])?u[n]=[].concat(a(new Set([].concat(a(t[n]),[r[n]])))):u[n]=r[n]})
return u}return Object.assign({},t)}(e,t)})
return e}
function a(e){if(Array.isArray(e)){for(var t=0,r=Array(e.length);t<e.length;t++)r[t]=e[t]
return r}return Array.from(e)}function o(e){return e&&("object"===(void 0===e?"undefined":n(e))||"function"==typeof e)&&!Array.isArray(e)}function i(e){return e&&Array.isArray(e)}},"9HcErlrWg/":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.setDefaultTheme=void 0
t.getRegistry=f
t.setRegistry=m
t.clearRegistry=function(){m(c())}
t.getDefaultThemeKey=b
t.registerTheme=function(e){var t=f(),r=e.key||(0,i.default)()
t.themes[r]=e
t.registered.push(r)}
t.makeTheme=function(e){var t=e.theme,r=e.a11y
return Object.assign({},t,{use:function(){var e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:{},n=e.accessible,o=e.overrides
if(n){(0,a.default)(r,"[themeable] No accessible theme provided for "+t.key+".")
g(r.key,null,!0)}else{(0,a.default)(t,"Invalid theme.")
g(t.key,o,!1)}}})}
t.registerComponentTheme=function(e,t){var r=f()
if("function"!=typeof t)return
r.components[l][e]=t
Object.keys(t).forEach(function(n){r.components.hasOwnProperty(n)||(r.components[n]={})
r.components[n][e]=p(t,n)})}
t.generateTheme=function(e,t){var r=f();(0,a.default)(r.registered.length>0,"[themeable] No themes have been registered. Import a theme from @instructure/ui-themes or register a custom theme with registerTheme (see @instructure/ui-themeable/lib/registry.js).")
var n=_(e),o={},i=y(e,t)
Object.getOwnPropertySymbols(n).forEach(function(e){o[e]=n[e](i)})
return o}
t.getTheme=function(e){return h(e,{}).variables||{}}
t.generateComponentTheme=function(e,t,r){var n=y(t),o=t||b(),i=_(o)[e],u={}
if("function"==typeof i)try{u=i(n)}catch(e){0}var l=h(o,{})
if(r&&Object.keys(r).length>0&&l.immutable){(0,a.default)(!1,"[themeable] Theme '%s' is immutable. Cannot apply overrides for '%s': %o",o,e.toString(),r)
return u}return Object.assign({},u,r||{})}
t.getRegisteredThemes=function(){return f().themes}
var n=u(r("Pygke12TKE")),a=u(r("nz+zoxswY4")),o=u(r("4Bs+VgWWjP")),i=u(r("QAxNMv7vw0"))
function u(e){return e&&e.__esModule?e:{default:e}}var l="@@themeableDefaultTheme",c=function(){return{defaultThemeKey:null,components:function(e,t,r){t in e?Object.defineProperty(e,t,{value:r,enumerable:!0,configurable:!0,writable:!0}):e[t]=r
return e}({},l,{}),themes:{},registered:[]}},s=c(),d=function(e){var t=!0,r=c()
Object.keys(r).forEach(function(r){e&&void 0!==e[r]||(t=!1)});(0,a.default)(t,"[themeable] Inavlid theme registry.")
return e}
function f(){if(!n.default)return s
window.GLOBAL_THEME_REGISTRY||(window.GLOBAL_THEME_REGISTRY=s)
return d(window.GLOBAL_THEME_REGISTRY)}function m(e){s=e
n.default&&(window.GLOBAL_THEME_REGISTRY=s)}function b(){var e=f(),t=e.defaultThemeKey,r=e.registered
return t||r[0]||l}var g=t.setDefaultTheme=function(e,t,r){var n=f(),o=n.themes[e];(0,a.default)(o,"[themeable] Could not find theme: '"+e+"' in the registry.")
o=Object.assign({},o,{immutable:r})
n.themes[e]=o
n.defaultThemeKey=e
n.overrides=t
return o}
var h=function(e,t){var r=f().themes[e]
t||(0,a.default)(r,"[themeable] Could not find theme: '"+e+"' in the registry.")
return r||t},v=function(e,t){var r=h(e,{}),n={}
if(t&&Object.keys(t).length>0&&r.immutable){(0,a.default)(!1,"[themeable] Theme, '%s', is immutable. Cannot apply overrides: %o",e,t)
n=r.variables}else n=(0,o.default)(r.variables,t)
return n},y=function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:{},r=f().overrides||{},n=b()
return v(n,e?v(e,t):(0,o.default)(r,t))},p=function(e,t){return function(r){var n={}
"function"==typeof e&&(n=e(r))
"function"==typeof e[t]&&(n=Object.assign({},n,e[t](r)))
return n}}
var _=function(e){var t=f(),r=e||b()
return Object.assign({},t.components[l],t.components[r])}},A051HVpetd:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=r("9HcErlrWg/"),a=i(r("VfnPWtOxDI")),o=i(r("Qwg4WMdjCp"))
function i(e){return e&&e.__esModule?e:{default:e}}t.default=(0,n.makeTheme)({theme:a.default,a11y:o.default})},AueD11u85v:function(e,t,r){"use strict"
var n,a=r("Gu7Tm2+Aas"),o=(n=a)&&n.__esModule?n:{default:n}
if(!("require"in window)){var i=r("mOY9BNujNR"),u={jquery:function(){return i},i18nObj:function(){return new Promise(function(e){e()}).then(r.bind(null,"36QOWIB4+W"))},underscore:function(){return new Promise(function(e){e()}).then(r.bind(null,"iBw8ZGM6v8"))},"jsx/course_wizard/ListItems":function(){return new Promise(function(e){r.e(21).then(function(t){e(r("bzx8AghjTc"))}.bind(null,r)).catch(r.oe)})}},l=function(e){if(e in u)return u[e]()
if(/^(https?:)?\/\//.test(e))return i.getScript(e)
throw new Error("Cannot load "+e+", use your own RequireJS or something else to load this script")}
window.require=function(e,t){console.warn("`require`-ing internal Canvas modules comes with no warranty, things can change in any release and you are responsible for making sure your custom JavaScript that uses it continues to work.")
e.includes("jquery")&&console.error("You don't need to `require(['jquery...`, just use the global `$` variable directly.")
Promise.all(e.map(l)).then(function(e){t&&t.apply(void 0,(0,o.default)(e))})}}},GfsekNpohF:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=r("T7MAAnqGwx")
t.default=Object.freeze((0,n.makeFunctionalColors)({brand:"#0770A3",electric:"#0770A3",shamrock:"#127A1B",barney:"#B8309E",crimson:"#D01A19",fire:"#C23C0D",licorice:"#2D3B45",oxford:"#394B58",ash:"#556572",slate:"#556572",tiara:"#556572",porcelain:"#FFFFFF",white:"#FFFFFF"}))},"I/UqtyMvZw":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=["0 0.0625rem 0.125rem rgba(0, 0, 0, 0.2), 0 0.0625rem 0.1875rem rgba(0, 0, 0, 0.1)","0 0.1875rem 0.375rem rgba(0, 0, 0, 0.1), 0 0.1875rem 0.375rem rgba(0, 0, 0, 0.16)","0 0.375rem 0.4375rem rgba(0, 0, 0, 0.1), 0 0.625rem 1.75rem rgba(0, 0, 0, 0.25)"]
t.default=Object.freeze({depth1:n[0],depth2:n[1],depth3:n[2],resting:n[0],above:n[1],topmost:n[2]})},"L/Ji3F6A4a":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=Object.freeze({topmost:9999,above:1,below:-1,deepest:-9999})},LNmG0vr5r2:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=Object.freeze({duration:"300ms"})},Pygke12TKE:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=!("undefined"==typeof window||!window.document||!window.document.createElement)},QAxNMv7vw0:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=function(){arguments.length>0&&void 0!==arguments[0]&&arguments[0]
var e=arguments.length>1&&void 0!==arguments[1]?arguments[1]:12
return Array.from(Array(Math.ceil(e/4))).map(n).join("").substr(0,e)}
function n(){return Math.floor(65536*(1+Math.random())).toString(16).substring(1)}},Qwg4WMdjCp:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=r("9HcErlrWg/"),a=u(r("o5O6uYWuQQ")),o=u(r("GfsekNpohF")),i=u(r("VfnPWtOxDI"))
function u(e){return e&&e.__esModule?e:{default:e}}var l={key:a.default.CANVAS_HIGH_CONTRAST,immutable:!0,description:"This theme meets WCAG 2.0 AA rules for color contrast.",variables:Object.assign({},i.default.variables,{colors:o.default})};(0,n.registerTheme)(l)
t.default=(0,n.makeTheme)({theme:l})},T7MAAnqGwx:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.makeFunctionalColors=n
function n(e){return Object.assign({},e,{textDarkest:e.licorice,textDark:e.ash,textLight:e.porcelain,textLightest:e.white,textBrand:e.brand,textAlert:e.barney,textInfo:e.brand,textSuccess:e.shamrock,textDanger:e.crimson,textWarning:e.fire,backgroundDarkest:e.licorice,backgroundDark:e.ash,backgroundMedium:e.tiara,backgroundLight:e.porcelain,backgroundLightest:e.white,backgroundBrand:e.brand,backgroundBrandSecondary:e.oxford,backgroundAlert:e.barney,backgroundInfo:e.brand,backgroundSuccess:e.shamrock,backgroundDanger:e.crimson,backgroundWarning:e.fire,borderLightest:e.white,borderLight:e.porcelain,borderMedium:e.tiara,borderDark:e.ash,borderDarkest:e.licorice,borderBrand:e.brand,borderAlert:e.barney,borderInfo:e.brand,borderSuccess:e.shamrock,borderDanger:e.crimson,borderWarning:e.fire,borderDebug:e.crimson})}t.default=Object.freeze(n({brand:"#008EE2",electric:"#008EE2",shamrock:"#00AC18",barney:"#BF32A4",crimson:"#EE0612",fire:"#FC5E13",licorice:"#2D3B45",oxford:"#394B58",ash:"#8B969E",slate:"#8B969E",tiara:"#C7CDD1",porcelain:"#F5F5F5",white:"#FFFFFF"}))},VfnPWtOxDI:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.brandVariables=void 0
var n=r("9HcErlrWg/"),a=g(r("o5O6uYWuQQ")),o=g(r("aqnp7+ruGG")),i=g(r("T7MAAnqGwx")),u=g(r("LNmG0vr5r2")),l=g(r("omxlES1/1+")),c=g(r("iYPl8rblUq")),s=g(r("1Y62h3eT2s")),d=g(r("eoBv0CU+Ie")),f=g(r("hog7jFXZ8p")),m=g(r("I/UqtyMvZw")),b=g(r("L/Ji3F6A4a"))
function g(e){return e&&e.__esModule?e:{default:e}}var h=a.default.CANVAS,v={borders:o.default,colors:i.default,transitions:u.default,typography:l.default,spacing:c.default,forms:s.default,media:d.default,breakpoints:f.default,shadows:m.default,stacking:b.default},y=t.brandVariables={"ic-brand-primary":i.default.textBrand,"ic-brand-font-color-dark":i.default.textDarkest,"ic-link-color":i.default.textBrand,"ic-brand-button--primary-bgd":i.default.backgroundBrand,"ic-brand-button--primary-text":i.default.textLightest,"ic-brand-button--secondary-bgd":i.default.backgroundDarkest,"ic-brand-button--secondary-text":i.default.textLightest,"ic-brand-global-nav-bgd":i.default.backgroundBrandSecondary,"ic-global-nav-link-hover":i.default.backgroundDarkest,"ic-brand-global-nav-ic-icon-svg-fill":i.default.textLightest,"ic-brand-global-nav-ic-icon-svg-fill--active":i.default.textBrand,"ic-brand-global-nav-menu-item__text-color":i.default.textLightest,"ic-brand-global-nav-menu-item__text-color--active":i.default.textBrand},p={key:h,variables:v};(0,n.registerTheme)({key:h,variables:Object.assign({},v,y)})
t.default=(0,n.makeTheme)({theme:p})},"aqnp7+ruGG":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=Object.freeze({radiusSmall:"0.125rem",radiusMedium:"0.25rem",radiusLarge:"0.5rem",widthSmall:"0.0625rem",widthMedium:"0.125rem",widthLarge:"0.25rem",style:"solid"})},elVCKX8GNs:function(e,t,r){"use strict"
var n=i(r("A051HVpetd")),a=i(r("PJh52PO9+b")),o=i(r("1IKDY5pCFs"))
r("AueD11u85v")
function i(e){return e&&e.__esModule?e:{default:e}}(0,a.default)().locale(ENV.MOMENT_LOCALE)
if("undefined"!=typeof ENV){ENV.TIMEZONE&&o.default.changeZone(ENV.TIMEZONE)
ENV.CONTEXT_TIMEZONE&&o.default.preload(ENV.CONTEXT_TIMEZONE)
ENV.BIGEASY_LOCALE&&o.default.changeLocale(ENV.BIGEASY_LOCALE,ENV.MOMENT_LOCALE)}if(ENV.use_high_contrast)n.default.use({accessible:!0})
else{var u=window.CANVAS_ACTIVE_BRAND_VARIABLES||{}
n.default.use({overrides:u})}},"eoBv0CU+Ie":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n,a=r("hog7jFXZ8p"),o=(n=a)&&n.__esModule?n:{default:n}
t.default=Object.freeze({mediumMin:"min-width: "+o.default.medium,largeMin:"min-width: "+o.default.large,xLargeMin:"min-width: "+o.default.xLarge})},hog7jFXZ8p:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=8,a=16,o=30,i=48,u=62,l=75
t.default=Object.freeze({xxSmall:n+"em",xSmall:a+"em",small:o+"em",medium:i+"em",large:u+"em",xLarge:l+"em",maxWidth:u-.0625+"em"})},iYPl8rblUq:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=Object.freeze({xxxSmall:"0.125rem",xxSmall:"0.375rem",xSmall:"0.5rem",small:"0.75rem",medium:"1.5rem",large:"2.25rem",xLarge:"3rem",xxLarge:"3.75rem"})},"nz+zoxswY4":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=function(e,t){}},o5O6uYWuQQ:function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default={CANVAS:"canvas",CANVAS_A11Y:"canvas-a11y",CANVAS_HIGH_CONTRAST:"canvas-high-contrast"}},"omxlES1/1+":function(e,t,r){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.default=Object.freeze({fontFamily:'LatoWeb, Lato, "Helvetica Neue", Helvetica, Arial, sans-serif',fontFamilyMonospace:'Menlo, Consolas, Monaco, "Andale Mono", monospace',fontSizeXSmall:"0.75rem",fontSizeSmall:"0.875rem",fontSizeMedium:"1rem",fontSizeLarge:"1.375rem",fontSizeXLarge:"1.75rem",fontSizeXXLarge:"2.25rem",fontWeightLight:300,fontWeightNormal:400,fontWeightBold:700,lineHeight:1.4,lineHeightFit:1.125,lineHeightCondensed:1.25,lineHeightDouble:2,letterSpacingNormal:0,letterSpacingCondensed:"-0.0625rem",letterSpacingExpanded:"0.0625rem"})}},["elVCKX8GNs"])

//# sourceMappingURL=appBootstrap.bundle-d28bad749f.js.118-d28bad749f.sourcemap