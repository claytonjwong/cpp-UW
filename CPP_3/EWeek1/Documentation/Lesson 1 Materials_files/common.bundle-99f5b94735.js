canvasWebpackJsonp([100],{"+JpRIS14Qm":function(e,t,n){var i,r
i=[n("36QOWIB4+W"),n("BkaAgcBhey"),n("PyJFCi/UoU"),n("XDPawBHrta")],void 0!==(r=function(e){return e.scoped("subnav_menu_toggle")}.apply(t,i))&&(e.exports=r)},"+fL4qvKaPd":function(e,t,n){var i,r
i=[n("36QOWIB4+W"),n("PO6ncFtsF/"),n("PyJFCi/UoU"),n("XDPawBHrta")],void 0!==(r=function(e){return e.scoped("ajax_errors")}.apply(t,i))&&(e.exports=r)},"/rriEg1pXh":function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.loadMathJax=function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:null
if(!u()&&s()){window.MathJax=o
a.default.getScript("//cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.1/MathJax.js?config="+e,t)}}
t.isMathMLOnPage=function(){return(0,a.default)("math").length>0}
t.isMathJaxLoaded=u
t.shouldLoadMathJax=s
t.reloadElement=function(e){MathJax&&MathJax.Hub.Queue(["Typeset",MathJax.Hub,e])}
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
var o={TeX:{extensions:["color.js"]}}
function u(){return!("undefined"==typeof MathJax)}function s(){return(0,a.default)(document.documentElement).find("img.equation_image").length<=0}},"2JPOf+YwLj":function(e,t,n){var i,r
i=[n("alZG/YCWY6"),n("uceVF1dIMW"),n("kY/Uc71Va8")],void 0!==(r=function(e){var t=(e=e.default).template,n=e.templates=e.templates||{},i="MediaComments"
n[i]=t(function(e,t,n,i,r){this.compilerInfo=[4,">= 1.0.0"]
n=this.merge(n,e.helpers)
r=r||{}
var a,o,u="",s=n.helperMissing,l=this.escapeExpression
return u+='<div id="media_record_tabs">\n  <ul>\n    <li><a href="#record_media_tab">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"record_media_6637ff19","Record Media",o):s.call(t,"t","record_media_6637ff19","Record Media",o)))+'</a></li>\n    <li><a href="#upload_media_tab">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"upload_media_ce31135a","Upload Media",o):s.call(t,"t","upload_media_ce31135a","Upload Media",o)))+'</a></li>\n  </ul>\n  <div id="record_media_tab" class="clearfix media_tab">\n    <span class="screenreader-only">\n      '+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"this_recorder_uses_flash_as_a_result_you_may_find__427d2ddb","This recorder uses Flash. As a result, you may find it easier to make a recording on your local machine, and then use the media uploader tab to upload it.",o):s.call(t,"t","this_recorder_uses_flash_as_a_result_you_may_find__427d2ddb","This recorder uses Flash. As a result, you may find it easier to make a recording on your local machine, and then use the media uploader tab to upload it.",o)))+'\n    </span>\n    <div id="media_record_option_holder">\n      <a id="video_record_option"\n         class="record_option tooltip"\n         href="#"\n         title="'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"record_with_webcam_af21e07c","Record with Webcam",o):s.call(t,"t","record_with_webcam_af21e07c","Record with Webcam",o)))+'">\n        <img src="/images/webcam.png" alt="'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"record_with_webcam_af21e07c","Record with Webcam",o):s.call(t,"t","record_with_webcam_af21e07c","Record with Webcam",o)))+'" />\n      </a>\n      <a id="audio_record_option"\n         class="record_option tooltip"\n         href="#"\n         title="'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"record_with_microphone_only_e4ee07aa","Record with Microphone Only",o):s.call(t,"t","record_with_microphone_only_e4ee07aa","Record with Microphone Only",o)))+'">\n        <img src="/images/microphone.png" alt="'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"record_with_microphone_only_e4ee07aa","Record with Microphone Only",o):s.call(t,"t","record_with_microphone_only_e4ee07aa","Record with Microphone Only",o)))+'" />\n      </a>\n    </div>\n    <div id="video_record_holder_holder">\n      <div id="video_record_holder_message">\n        <div class="recorder_message">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"saving_recording_e111cb05","Saving Recording...",o):s.call(t,"t","saving_recording_e111cb05","Saving Recording...",o)))+'</div>\n      </div>\n      <div style="margin-bottom: 1px; margin-left: 10px;">\n        <label for="video_record_title">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"title_52b8638d","Title:",o):s.call(t,"t","title_52b8638d","Title:",o)))+'</label>\n        <input id="video_record_title"\n               type="text"\n               style="width: 250px;"\n               maxlength="255" />\n      </div>\n      <div id="video_record_holder">\n        <div id="video_record_meter" class="volume_meter">\n          <img src="/images/blank.png" class="audio_level level_9" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_8" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_7" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_6" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_5" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_4" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_3" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_2" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_1" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_0" alt=""/>\n        </div>\n        <div id="video_record">\n        </div>\n      </div>\n    </div>\n    <div id="audio_record_holder_holder">\n      <div id="audio_record_holder_message">\n        <div class="recorder_message">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"saving_recording_e111cb05","Saving Recording...",o):s.call(t,"t","saving_recording_e111cb05","Saving Recording...",o)))+'</div>\n      </div>\n      <div style="margin-bottom: 1px; margin-left: 10px;">\n        <label for="audio_record_title">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"title_52b8638d","Title:",o):s.call(t,"t","title_52b8638d","Title:",o)))+'</label>\n        <input id="audio_record_title"\n               type="text"\n               style="width: 250px;"\n               maxlength="255" />\n      </div>\n      <div id="audio_record_holder">\n        <div id="audio_record_meter" class="volume_meter">\n          <img src="/images/blank.png" class="audio_level level_9" alt="9"/>\n          <img src="/images/blank.png" class="audio_level level_8" alt="8"/>\n          <img src="/images/blank.png" class="audio_level level_7" alt="7"/>\n          <img src="/images/blank.png" class="audio_level level_6" alt="6"/>\n          <img src="/images/blank.png" class="audio_level level_5" alt="5"/>\n          <img src="/images/blank.png" class="audio_level level_4" alt="4"/>\n          <img src="/images/blank.png" class="audio_level level_3" alt="3"/>\n          <img src="/images/blank.png" class="audio_level level_2" alt="2"/>\n          <img src="/images/blank.png" class="audio_level level_1" alt="1"/>\n          <img src="/images/blank.png" class="audio_level level_0" alt="0"/>\n        </div>\n        <div id="audio_record">\n        </div>\n      </div>\n    </div>\n    <div class="clear"></div>\n  </div>\n  <div id="upload_media_tab" class="clearfix media_tab">\n    <div id="media_upload_holder">\n      <div id="audio_upload_holder" class="pull-left">\n        <div id="audio_upload">\n        </div>\n        <div id="audio_upload_under" style="margin-bottom: 20px;">\n          <button class="btn" type="button">\n            <img src="/images/audio.png" alt=""/>\n            '+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"select_audio_file_7d905cce","Select Audio File",o):s.call(t,"t","select_audio_file_7d905cce","Select Audio File",o)))+'\n          </button>\n        </div>\n      </div>\n      <div id="video_upload_holder" class="pull-left">\n        <div id="video_upload">\n        </div>\n        <div id="video_upload_under" style="margin-bottom: 20px;">\n          <button class="btn" type="button">\n            <img src="/images/video.png" alt=""/>\n            '+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"select_video_file_35b61d4e","Select Video File",o):s.call(t,"t","select_video_file_35b61d4e","Select Video File",o)))+'\n          </button>\n        </div>\n      </div>\n      <div class="clear"></div>\n      <div id="media_upload_settings" style="visibility: hidden;">\n        <label for="media_upload_title">'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"title_52b8638d","Title:",o):s.call(t,"t","title_52b8638d","Title:",o)))+'</label>\n        <input id="media_upload_title" type="text" />\n        <div class="content">\n          <img src="/images/file.png" alt="" class="icon"/>\n          <span id="media_upload_display_title">&nbsp;</span>\n          <span id="media_upload_file_size">&nbsp;</span>\n          <br />\n          <div id="media_upload_feedback" style="visibility: hidden; margin-top: 5px;">\n            <img src="/images/warning.png" alt="" />\n            <span id="media_upload_feedback_text"></span>\n          </div>\n        </div>\n        <div class="content" id="media_upload_progress" style="visibility: hidden; margin-top: 20px;"></div>\n        <div class="content" id="media_upload_errors" style="visibility: hidden; margin-top: 20px;"></div>\n        <div class="content">\n          <button class="btn disabled"\n                  disabled="true"\n                  type="button"\n                  id="media_upload_submit"\n          >'+l((o={hash:{i18n_inferred_key:!0},data:r},(a=n.t||t&&t.t)?a.call(t,"submit_media_file_f334c1ba","Submit Media File",o):s.call(t,"t","submit_media_file_f334c1ba","Submit Media File",o)))+"</button>\n        </div>\n      </div>\n    </div>\n  </div>\n</div>\n"})
return n[i]}.apply(t,i))&&(e.exports=r)},"2aUY+gHXYk":function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i};(0,a.default)(document).on("keydown",".ic-Super-toggle__input",function(e){13===e.which&&(0,a.default)(e.target).click()})},"3tzgL+C4wS":function(e,t,n){var i,r,a=function(e,t){return function(){return e.apply(t,arguments)}}
i=[n("mOY9BNujNR"),n("iBw8ZGM6v8"),n("YUas7KQMx2")],void 0!==(r=function(e,t){var n
n=function(){function n(e,t,n){this.mediaId=e
this.mediaElement=t
this.pluginSettings=n
this.addListeners=a(this.addListeners,this)
this.queueApiCall=a(this.queueApiCall,this)
this.setupApiIframes=a(this.setupApiIframes,this)
this.generateApiUrl=a(this.generateApiUrl,this)
this.ensureAnalyticSession=a(this.ensureAnalyticSession,this)
this.queueAnalyticEvent=a(this.queueAnalyticEvent,this)
this.ensureAnalyticSession()
this.generateApiUrl()
this.defaultData={service:"stats",action:"collect","event:entryId":this.mediaId,"event:sessionId":this.kaSession,"event:isFirstInSession":"false","event:objectType":"KalturaStatsEvent","event:partnerId":this.pluginSettings.partner_id,"event:uiconfId":this.pluginSettings.kcw_ui_conf,"event:queryStringReferrer":window.location.href}}n.prototype.queueAnalyticEvent=function(n){var i;(i=t.clone(this.defaultData))["event:eventType"]=n
i["event:duration"]=this.mediaElement.duration
i["event:currentPoint"]=parseInt(1e3*this.mediaElement.currentTime)
i["event:eventTimestamp"]=(new Date).getTime()
return this.queueApiCall(this.apiUrl+e.param(i))}
n.prototype.ensureAnalyticSession=function(){this.kaSession=e.cookie("kaltura_analytic_tracker",void 0,{path:"/"})
if(!this.kaSession){this.kaSession=(Math.random().toString(16)+Math.random().toString(16)+Math.random().toString(16)).replace(/\./g,"")
return e.cookie("kaltura_analytic_tracker",this.kaSession,{path:"/"})}}
n.prototype.generateApiUrl=function(){var e
e="http:"===window.location.protocol?"http://"+this.pluginSettings.domain:"https://"+this.pluginSettings.domain
return this.apiUrl=e+"/api_v3/index.php?"}
n.prototype.setupApiIframes=function(n){var i,r,a,o,u,s
this.qIndex=0
this.iframes=[]
for(r=o=0,s=n-1;0<=s?o<=s:o>=s;r=0<=s?++o:--o){a=document.createElement("iframe")
e(a).addClass("hidden kaltura-analytics")
e(document.body).append(e(a))
i=function(e,t){return function(){var n
if(n=t.shift())return e.src=n}}(a,u=[])
this.iframes[r]={iframe:a,queue:u,pinger:t.throttle(i,4e3)}}return this.iframes}
n.prototype.queueApiCall=function(e){this.iframes||this.setupApiIframes(this.pluginSettings.parallel_api_calls||3)
this.iframes[this.qIndex].queue.push(e)
this.iframes[this.qIndex].pinger()
this.qIndex=(this.qIndex+1)%this.iframes.length
return this.qIndex}
n.prototype.addListeners=function(){var e,t,n
this.queueAnalyticEvent(1)
this.mediaElement.addEventListener("play",(n=this,function(){n.mediaElement.pauseObserved=!1
n.mediaElement.endedObserved=!1
if(n.mediaElement.endedOnce){n.queueAnalyticEvent(mediaId,16)
n.mediaElement.endedOnce=!1}return n.queueAnalyticEvent(3)}))
this.mediaElement.addEventListener("canplay",function(e){return function(){return e.queueAnalyticEvent(2)}}(this))
this.mediaElement.addEventListener("seeked",function(e){return function(){if(!e.mediaElement.endedObserved)return e.queueAnalyticEvent(17)}}(this))
this.mediaElement.addEventListener("pause",function(e){return function(){if(!e.mediaElement.pauseObserved)return e.mediaElement.pauseObserved=!0}}(this))
this.mediaElement.addEventListener("progress",function(e){return function(){if(!e.mediaElement.endedOnce)return e.queueAnalyticEvent(12)}}(this))
t=0
e=!1
return this.mediaElement.addEventListener("playing",function(n){return function(i){if(!n.mediaElement.listeningToPlaying){setInterval(function(){var i,r,a,o
if(!n.mediaElement.paused&&!isNaN(n.mediaElement.duration)&&n.mediaElement.duration){if(n.mediaElement.isFullScreen!==e){e?n.queueAnalyticEvent(15):n.queueAnalyticEvent(14)
e=n.mediaElement.isFullScreen}o=[.25*n.mediaElement.duration,.5*n.mediaElement.duration,.75*n.mediaElement.duration,.98*n.mediaElement.duration]
r=n.mediaElement.currentTime
if(!isNaN(r)&&r>0){a=o.length-1
for(;a>=0;){(i=o[a])>t&&i<=r&&(0===a?n.queueAnalyticEvent(4):1===a?n.queueAnalyticEvent(5):2===a?n.queueAnalyticEvent(6):3===a&&n.queueAnalyticEvent(7));--a}return t=r}}},50)
return n.mediaElement.listeningToPlaying=!0}}}(this),!1)}
return n}()
return function(e,t,i){var r
if(i&&i.do_analytics){(r=new n(e,t,i)).addListeners()
return r}}}.apply(t,i))&&(e.exports=r)},"5iYkB5tAnT":function(e,t,n){var i,r
i=[n("SAJYeZn/X9")],void 0!==(r=function(e){function t(){this.ks=""
this.subp_id=""
this.partner_id=""
this.uid=""
this.serverTime=0}t.prototype.setSession=function(t){if(t){e("ks",this,t)
e("subp_id",this,t)
e("partner_id",this,t)
e("uid",this,t)
e("serverTime",this,t)
e("ui_conf_id",this,t)}}
t.prototype.getSession=function(){return{ks:this.ks,subp_id:this.subp_id,partner_id:this.partner_id,uid:this.uid,serverTime:this.serverTime,ui_conf_id:this.ui_conf_id}}
t.prototype.asEntryParams=function(){return this.getSession()}
return t}.apply(t,i))&&(e.exports=r)},"6XcNbehSs1":function(e,t,n){var i,r
i=[n("6sqZ3sUkYG"),n("GTvFG2kez5")],void 0!==(r=function(e,t){return function(n){for(var i=n.find("limits"),r=new e({maxUploads:i.attr("maxUploads"),maxFileSize:i.attr("maxFileSize"),maxTotalSize:i.attr("maxTotalSize")}),a=n.find("fileFilters").children(),o=0,u=a.length;o<u;o++){var s=t(a[o])
r.addFileFilter(s)}return r}}.apply(t,i))&&(e.exports=r)},"6sqZ3sUkYG":function(e,t,n){var i
void 0!==(i=function(){function e(e){this.fileFilters=[]
this.maxUploads=e.maxUploads
this.maxFileSize=e.maxFileSize
this.maxTotalSize=e.maxTotalSize}e.prototype.addFileFilter=function(e){this.fileFilters.push(e)}
e.prototype.filterFor=function(e){for(var t,n,i=e.split(".").pop(),r=0,a=this.fileFilters.length;r<a;r++)if((n=this.fileFilters[r]).includesExtension(i)){t=n
break}return t}
e.prototype.asEntryParams=function(e){return this.filterFor(e).toParams()}
e.prototype.acceptableFileSize=function(e){return 1024*this.maxFileSize*1024>e}
e.prototype.acceptableFileType=function(e,t){var n=this.filterFor(e)
return!!n&&-1!==t.indexOf(n.id)}
e.prototype.acceptableFile=function(e,t){var n=this.acceptableFileType(e.name,t),i=this.acceptableFileSize(e.size)
return n&&i}
return e}.apply(t,[]))&&(e.exports=i)},"9vdLYFzxED":function(e,t,n){var i,r
i=[n("36QOWIB4+W"),n("f+YlSntt6E"),n("PyJFCi/UoU"),n("XDPawBHrta")],void 0!==(r=function(e){return e.scoped("broken_images")}.apply(t,i))&&(e.exports=r)},"BGpftgD7c/":function(e,t,n){var i,r,a=function(e,t){return function(){return e.apply(t,arguments)}}
i=[n("mOY9BNujNR")],void 0!==(r=function(e){return function(){function t(){this.resetFileInput=a(this.resetFileInput,this)}t.prototype.constructur=function(){return this.allowedMedia=["audio","video"]}
t.prototype.resetFileInput=function(t,n,i){var r
n||(n="file_upload")
i||(i="#media_upload_settings")
if(this.$fileInput){this.$fileInput.off("change",t)
this.$fileInput.remove()}r="<input id='"+n+"' type='file' style='display: none;'>"
e(i).append(r)
this.$fileInput=e("#"+n)
return this.$fileInput.on("change",t)}
t.prototype.setUpInputTrigger=function(t,n){return e(t).on("click",(i=this,function(e){i.allowedMedia=n
return i.$fileInput.click()}))
var i}
t.prototype.getSelectedFile=function(){return this.$fileInput.get()[0].files[0]}
return t}()}.apply(t,i))&&(e.exports=r)},BkaAgcBhey:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=n("36QOWIB4+W"),r=n.n(i),a=n("mOY9BNujNR")
n.n(a).a.extend(!0,r.a,{translations:{ar:{hide_account_navigation_menu_ccdf9480:"إخفاء قائمة التنقل بين الحسابات",hide_admin_navigation_menu_5cab9c9e:"إخفاء قائمة التنقل بين المسؤولين",hide_courses_navigation_menu_6f7c4cfd:"إخفاء قائمة التنقل بين المساقات",hide_groups_navigation_menu_62e8b3d0:"إخفاء قائمة التنقل بين المجموعات",hide_navigation_menu_f0b3e90:"إخفاء قائمة التنقل",show_account_navigation_menu_d97270a9:"إظهار قائمة التنقل بين الحسابات",show_admin_navigation_menu_92fb579f:"إظهار قائمة التنقل بين المسؤولين",show_courses_navigation_menu_7ad1a8d4:"إظهار قائمة التنقل بين المساقات",show_groups_navigation_menu_1521d38d:"إظهار قائمة التنقل بين المجموعات",show_navigation_menu_34e7f441:"إظهار قائمة التنقل"},da:{hide_account_navigation_menu_ccdf9480:"Skjul kontonavigationsmenu",hide_admin_navigation_menu_5cab9c9e:"Skjul admin-navigationsmenu",hide_courses_navigation_menu_6f7c4cfd:"Skjul fag-navigationsmenu",hide_groups_navigation_menu_62e8b3d0:"Skjul gruppe-navigationsmenu",hide_navigation_menu_f0b3e90:"Skjul navigationsmenu",show_account_navigation_menu_d97270a9:"Vis kontonavigationsmenu",show_admin_navigation_menu_92fb579f:"Vis admin-navigationsmenu",show_courses_navigation_menu_7ad1a8d4:"Vis fag-navigationsmenu",show_groups_navigation_menu_1521d38d:"Vis gruppe-navigationsmenu",show_navigation_menu_34e7f441:"Vis navigationsmenu"},de:{hide_account_navigation_menu_ccdf9480:"Konto-Navigationsmenü ausblenden",hide_admin_navigation_menu_5cab9c9e:"Admin-Navigationsmenü ausblenden",hide_courses_navigation_menu_6f7c4cfd:"Kurs-Navigationsmenü ausblenden",hide_groups_navigation_menu_62e8b3d0:"Gruppen-Navigationsmenü ausblenden",hide_navigation_menu_f0b3e90:"Navigationsmenü ausblenden",show_account_navigation_menu_d97270a9:"Konto-Navigationsmenü einblenden",show_admin_navigation_menu_92fb579f:"Admin-Navigationsmenü einblenden",show_courses_navigation_menu_7ad1a8d4:"Kursnavigationsmenü einblenden",show_groups_navigation_menu_1521d38d:"Gruppen-Navigationsmenü einblenden",show_navigation_menu_34e7f441:"Navigationsmenü einblenden"},"en-AU":{hide_account_navigation_menu_ccdf9480:"Hide Account Navigation Menu",hide_admin_navigation_menu_5cab9c9e:"Hide Admin Navigation Menu",hide_courses_navigation_menu_6f7c4cfd:"Hide Courses Navigation Menu",hide_groups_navigation_menu_62e8b3d0:"Hide Groups Navigation Menu",hide_navigation_menu_f0b3e90:"Hide Navigation Menu",show_account_navigation_menu_d97270a9:"Show Account Navigation Menu",show_admin_navigation_menu_92fb579f:"Show Admin Navigation Menu",show_courses_navigation_menu_7ad1a8d4:"Show Courses Navigation Menu",show_groups_navigation_menu_1521d38d:"Show Groups Navigation Menu",show_navigation_menu_34e7f441:"Show Navigation Menu"},"en-CA":{hide_account_navigation_menu_ccdf9480:"Hide Account Navigation Menu",hide_admin_navigation_menu_5cab9c9e:"Hide Admin Navigation Menu",hide_courses_navigation_menu_6f7c4cfd:"Hide Courses Navigation Menu",hide_groups_navigation_menu_62e8b3d0:"Hide Groups Navigation Menu",hide_navigation_menu_f0b3e90:"Hide Navigation Menu",show_account_navigation_menu_d97270a9:"Show Account Navigation Menu",show_admin_navigation_menu_92fb579f:"Show Admin Navigation Menu",show_courses_navigation_menu_7ad1a8d4:"Show Courses Navigation Menu",show_groups_navigation_menu_1521d38d:"Show Groups Navigation Menu",show_navigation_menu_34e7f441:"Show Navigation Menu"},"en-GB":{hide_account_navigation_menu_ccdf9480:"Hide account navigation menu",hide_admin_navigation_menu_5cab9c9e:"Hide admin navigation menu",hide_courses_navigation_menu_6f7c4cfd:"Hide courses navigation menu",hide_groups_navigation_menu_62e8b3d0:"Hide groups navigation menu",hide_navigation_menu_f0b3e90:"Hide navigation menu",show_account_navigation_menu_d97270a9:"Show account navigation menu",show_admin_navigation_menu_92fb579f:"Show admin navigation menu",show_courses_navigation_menu_7ad1a8d4:"Show courses navigation menu",show_groups_navigation_menu_1521d38d:"Show groups navigation menu",show_navigation_menu_34e7f441:"Show navigation menu"},"en-GB-x-lbs":{hide_account_navigation_menu_ccdf9480:"Hide account navigation menu",hide_admin_navigation_menu_5cab9c9e:"Hide admin navigation menu",hide_courses_navigation_menu_6f7c4cfd:"Hide programmes navigation menu",hide_groups_navigation_menu_62e8b3d0:"Hide groups navigation menu",hide_navigation_menu_f0b3e90:"Hide navigation menu",show_account_navigation_menu_d97270a9:"Show account navigation menu",show_admin_navigation_menu_92fb579f:"Show admin navigation menu",show_courses_navigation_menu_7ad1a8d4:"Show programmes navigation menu",show_groups_navigation_menu_1521d38d:"Show groups navigation menu",show_navigation_menu_34e7f441:"Show navigation menu"},"en-GB-x-ukhe":{hide_account_navigation_menu_ccdf9480:"Hide account navigation menu",hide_admin_navigation_menu_5cab9c9e:"Hide admin navigation menu",hide_courses_navigation_menu_6f7c4cfd:"Hide modules navigation menu",hide_groups_navigation_menu_62e8b3d0:"Hide groups navigation menu",hide_navigation_menu_f0b3e90:"Hide navigation menu",show_account_navigation_menu_d97270a9:"Show account navigation menu",show_admin_navigation_menu_92fb579f:"Show admin navigation menu",show_courses_navigation_menu_7ad1a8d4:"Show modules navigation menu",show_groups_navigation_menu_1521d38d:"Show groups navigation menu",show_navigation_menu_34e7f441:"Show navigation menu"},es:{hide_account_navigation_menu_ccdf9480:"Ocultar menú de navegación de cuenta",hide_admin_navigation_menu_5cab9c9e:"Ocultar menú de navegación de administrador",hide_courses_navigation_menu_6f7c4cfd:"Ocultar menú de navegación de cursos",hide_groups_navigation_menu_62e8b3d0:"Ocultar menú de navegación de grupos",hide_navigation_menu_f0b3e90:"Ocultar menú de navegación",show_account_navigation_menu_d97270a9:"Mostrar menú de navegación de cuenta",show_admin_navigation_menu_92fb579f:"Mostrar menú de navegación de administrador",show_courses_navigation_menu_7ad1a8d4:"Mostrar menú de navegación de cursos",show_groups_navigation_menu_1521d38d:"Mostrar menú de navegación de grupos",show_navigation_menu_34e7f441:"Mostrar menú de navegación"},fa:{hide_account_navigation_menu_ccdf9480:"مخفی کردن منوی پیمایش کاربر",hide_admin_navigation_menu_5cab9c9e:"مخفی کردن منوی پیمایش مدیر",hide_courses_navigation_menu_6f7c4cfd:"مخفی کردن منوی پیمایش درس‌ها",hide_groups_navigation_menu_62e8b3d0:"مخفی کردن منوی پیمایش گروه‌ها",hide_navigation_menu_f0b3e90:"مخفی کردن منوی پیمایش ",show_account_navigation_menu_d97270a9:"نمایش منوی پیمایش حساب",show_admin_navigation_menu_92fb579f:"نمایش منوی پیمایش مدیر",show_courses_navigation_menu_7ad1a8d4:"نمایش منوی پیمایش درس ها",show_groups_navigation_menu_1521d38d:"نمایش منوی پیمایش گروه ها",show_navigation_menu_34e7f441:"نمایش منوی پیمایش"},fr:{hide_account_navigation_menu_ccdf9480:"Masquer le menu de navigation de comptes",hide_admin_navigation_menu_5cab9c9e:"Masquer le menu de navigation de l’administrateur",hide_courses_navigation_menu_6f7c4cfd:"Masquer le menu de navigation de cours",hide_groups_navigation_menu_62e8b3d0:"Masquer le menu de navigation de groupes",hide_navigation_menu_f0b3e90:"Masquer le menu de navigation",show_account_navigation_menu_d97270a9:"Afficher le menu de navigation de comptes",show_admin_navigation_menu_92fb579f:"Afficher le menu de navigation de l’administrateur",show_courses_navigation_menu_7ad1a8d4:"Afficher le menu de navigation de cours",show_groups_navigation_menu_1521d38d:"Afficher le menu de navigation de groupes",show_navigation_menu_34e7f441:"Afficher le menu de navigation"},"fr-CA":{hide_account_navigation_menu_ccdf9480:"Masquer le menu de navigation du compte",hide_admin_navigation_menu_5cab9c9e:"Masquer le menu de navigation de l’administrateur",hide_courses_navigation_menu_6f7c4cfd:"Masquer le menu de navigation des cours",hide_groups_navigation_menu_62e8b3d0:"Masquer le menu de navigation des groupes",hide_navigation_menu_f0b3e90:"Masquer le menu de navigation",show_account_navigation_menu_d97270a9:"Afficher le menu de navigation du compte",show_admin_navigation_menu_92fb579f:"Afficher le menu de navigation de l’administrateur",show_courses_navigation_menu_7ad1a8d4:"Afficher le menu de navigation des cours",show_groups_navigation_menu_1521d38d:"Afficher le menu de navigation des groupes",show_navigation_menu_34e7f441:"Afficher le menu de navigation"},he:{hide_account_navigation_menu_ccdf9480:"הסתרת תפריט ניווט חשבונות",hide_admin_navigation_menu_5cab9c9e:"הסתרת תפריט ניווט מנהלי מערכת",hide_courses_navigation_menu_6f7c4cfd:"הסתרת תפריט ניווט קורסים",hide_groups_navigation_menu_62e8b3d0:"הסתרת תפריט ניווט קבוצות",hide_navigation_menu_f0b3e90:"הסתרת תפריט ניווט",show_account_navigation_menu_d97270a9:"הצגת תפריט ניווט חשבונות",show_admin_navigation_menu_92fb579f:"הצגת תפריט ניווט של מנהלי מערכת",show_courses_navigation_menu_7ad1a8d4:"הצגת תפריט ניווט קורסים",show_groups_navigation_menu_1521d38d:"הצגת תפריט ניווט קבוצות",show_navigation_menu_34e7f441:"הצגת תפריט ניווט"},ht:{hide_account_navigation_menu_ccdf9480:"Kache Meni Navigasyon Kont",hide_admin_navigation_menu_5cab9c9e:"Kache Meni Navigasyon Admin",hide_courses_navigation_menu_6f7c4cfd:"Kache Meni Navigasyon Kou",hide_groups_navigation_menu_62e8b3d0:"Kache Meni Navigasyon Gwoup",hide_navigation_menu_f0b3e90:"Kache Meni Navigasyon",show_account_navigation_menu_d97270a9:"Afiche Meni Navigasyon Kont",show_admin_navigation_menu_92fb579f:"Afiche Meni Navigasyon Admin",show_courses_navigation_menu_7ad1a8d4:"Afiche Meni Navigasyon Kou",show_groups_navigation_menu_1521d38d:"Afiche Meni Navigasyon Gwoup",show_navigation_menu_34e7f441:"Afiche Meni Navigasyon"},is:{hide_account_navigation_menu_ccdf9480:"Fela leiðarstýringu valmyndar reiknings",hide_admin_navigation_menu_5cab9c9e:"Fela leiðarstýringarvalmynd kerfisstjórnanda",hide_courses_navigation_menu_6f7c4cfd:"Fela leiðarstýringarvalmynd námskeiða",hide_groups_navigation_menu_62e8b3d0:"Fela leiðarstýringarvalmynd hópa",hide_navigation_menu_f0b3e90:"Fela leiðarstýringarvalmynd",show_account_navigation_menu_d97270a9:"Sýna leiðarstýringarvalmynd reiknings",show_admin_navigation_menu_92fb579f:"Sýna leiðarstýringarvalmynd kerfisstjórnanda",show_courses_navigation_menu_7ad1a8d4:"Sýna leiðarstýringarvalmynd námskeiða",show_groups_navigation_menu_1521d38d:"Sýna leiðarstýringarvalmynd hópa",show_navigation_menu_34e7f441:"Sýna leiðarstýringarvalmynd"},it:{hide_account_navigation_menu_ccdf9480:"Nascondi menu di navigazione account",hide_admin_navigation_menu_5cab9c9e:"Nascondi menu di navigazione amministratore",hide_courses_navigation_menu_6f7c4cfd:"Nascondi menu di navigazione corsi",hide_groups_navigation_menu_62e8b3d0:"Nascondi meni di navigazione gruppi",hide_navigation_menu_f0b3e90:"Nascondi menu di navigazione",show_account_navigation_menu_d97270a9:"Mostra menu di navigazione account",show_admin_navigation_menu_92fb579f:"Mostra menu di navigazione amministratore",show_courses_navigation_menu_7ad1a8d4:"Mostra menu di esplorazione corsi",show_groups_navigation_menu_1521d38d:"Mostra menu di esplorazione gruppi",show_navigation_menu_34e7f441:"Mostra menu di navigazione"},ja:{hide_account_navigation_menu_ccdf9480:"アカウントのナビゲーションメニューを非表示にする",hide_admin_navigation_menu_5cab9c9e:"管理ナビゲーションメニューを非表示にする",hide_courses_navigation_menu_6f7c4cfd:"コースナビゲーションメニューを非表示にする",hide_groups_navigation_menu_62e8b3d0:"グループナビゲーションメニューを非表示にする",hide_navigation_menu_f0b3e90:"ナビゲーションメニューを非表示にする",show_account_navigation_menu_d97270a9:"アカウントナビゲーションメニューを表示する",show_admin_navigation_menu_92fb579f:"アドミニストレーションナビゲーションメニューを表示する",show_courses_navigation_menu_7ad1a8d4:"コースナビゲーションメニューを表示する",show_groups_navigation_menu_1521d38d:"グループナビゲーションメニューを表示する",show_navigation_menu_34e7f441:"ナビゲーションメニューを表示する"},mi:{hide_account_navigation_menu_ccdf9480:"Huna Tāhua Whakatere Pūkete",hide_admin_navigation_menu_5cab9c9e:"Huna Whakahaere Whakatere Tāhua",hide_courses_navigation_menu_6f7c4cfd:"Huna Ngā Akoranga Whakatere Tāhua",hide_groups_navigation_menu_62e8b3d0:"Huna Ngā Rōpū Whakatere Tāhua",hide_navigation_menu_f0b3e90:"Huna Whakatere Tāhua",show_account_navigation_menu_d97270a9:"Whakaatu Pūkete Whakatere Tāhua",show_admin_navigation_menu_92fb579f:"Whakaatu Whakahaere Whakatere Tāhua",show_courses_navigation_menu_7ad1a8d4:"Whakaatu Ngā Akoranga Whakatere Tāhua",show_groups_navigation_menu_1521d38d:"Whakaatu Ngā Rōpū Whakatere Tāhua",show_navigation_menu_34e7f441:"Whakaatu Whakatere Tāhua"},nb:{hide_account_navigation_menu_ccdf9480:"Skjul menyen for kontonavigering",hide_admin_navigation_menu_5cab9c9e:"Skjul menyen for administratornavigering",hide_courses_navigation_menu_6f7c4cfd:"Skjul menyen for emnernavigering",hide_groups_navigation_menu_62e8b3d0:"Skjul menyen for gruppenavigering",hide_navigation_menu_f0b3e90:"Skjul navigeringsmenyen",show_account_navigation_menu_d97270a9:"Vis menyen for kontonavigering",show_admin_navigation_menu_92fb579f:"Vis menyen for administratornavigering",show_courses_navigation_menu_7ad1a8d4:"Vis menyen for emnernavigering",show_groups_navigation_menu_1521d38d:"Vis menyen for gruppenavigering",show_navigation_menu_34e7f441:"Vis navigeringsmenyen"},nl:{hide_account_navigation_menu_ccdf9480:"Menu Accountnavigatie verbergen",hide_admin_navigation_menu_5cab9c9e:"Menu Beheernavigatie verbergen",hide_courses_navigation_menu_6f7c4cfd:"Menu Cursusnavigatie verbergen",hide_groups_navigation_menu_62e8b3d0:"Menu Groepsnavigatie verbergen",hide_navigation_menu_f0b3e90:"Navigatiemenu verbergen",show_account_navigation_menu_d97270a9:"Menu Accountnavigatie weergeven",show_admin_navigation_menu_92fb579f:"Menu Beheernavigatie weergeven",show_courses_navigation_menu_7ad1a8d4:"Menu Cursusnavigatie weergeven",show_groups_navigation_menu_1521d38d:"Menu Groepsnavigatie weergeven",show_navigation_menu_34e7f441:"Navigatiemenu weergeven"},nn:{hide_account_navigation_menu_ccdf9480:"Skjul meny for kontonavigasjon",hide_admin_navigation_menu_5cab9c9e:"Skjul meny for kontonavigasjon",hide_courses_navigation_menu_6f7c4cfd:"Skjul meny for emnenavigasjon",hide_groups_navigation_menu_62e8b3d0:"Skjul meny for gruppenavigasjon",hide_navigation_menu_f0b3e90:"Skjul navigeringsmeny",show_account_navigation_menu_d97270a9:"Vis meny for kontonavigasjon",show_admin_navigation_menu_92fb579f:"Vis admin-navigeringsmeny ",show_courses_navigation_menu_7ad1a8d4:"Vis meny for emnenavigasjon",show_groups_navigation_menu_1521d38d:"Vis meny for gruppenavigasjon",show_navigation_menu_34e7f441:"Vis navigeringsmeny"},pl:{hide_account_navigation_menu_ccdf9480:"Ukryj menu nawigacji na koncie",hide_admin_navigation_menu_5cab9c9e:"Ukryj menu nawigacji administratora",hide_courses_navigation_menu_6f7c4cfd:"Ukryj menu nawigacji w kursie",hide_groups_navigation_menu_62e8b3d0:"Ukryj menu nawigacji w grupach",hide_navigation_menu_f0b3e90:"Ukryj menu nawigacji",show_account_navigation_menu_d97270a9:"Pokaż menu nawigacji na koncie",show_admin_navigation_menu_92fb579f:"Pokaż menu nawigacji administratora",show_courses_navigation_menu_7ad1a8d4:"Pokaż menu nawigacji w kursie",show_groups_navigation_menu_1521d38d:"Pokaż menu nawigacji w grupach",show_navigation_menu_34e7f441:"Pokaż menu nawigacji"},pt:{hide_account_navigation_menu_ccdf9480:"Ocultar menu de navegação da conta",hide_admin_navigation_menu_5cab9c9e:"Ocultar menu de navegação do administrador",hide_courses_navigation_menu_6f7c4cfd:"Ocultar Menu de navegação das disciplinas",hide_groups_navigation_menu_62e8b3d0:"Ocultar Menu de navegação de grupos",hide_navigation_menu_f0b3e90:"Ocultar Menu de navegação",show_account_navigation_menu_d97270a9:"Mostrar o Menu de Navegação da Conta",show_admin_navigation_menu_92fb579f:"Mostrar o Menu de navegação do administrador",show_courses_navigation_menu_7ad1a8d4:"Mostrar Menu de navegação de disciplinas",show_groups_navigation_menu_1521d38d:"Mostrar o Menu de navegação dos grupos",show_navigation_menu_34e7f441:"Mostrar o Menu de Navegação"},"pt-BR":{hide_account_navigation_menu_ccdf9480:"Ocultar Menu de Navegação da conta",hide_admin_navigation_menu_5cab9c9e:"Ocultar Menu de Navegação do Admin",hide_courses_navigation_menu_6f7c4cfd:"Ocultar Menu de Navegação dos cursos",hide_groups_navigation_menu_62e8b3d0:"Ocultar Menu de Navegação dos grupos",hide_navigation_menu_f0b3e90:"Ocultar Menu de Navegação",show_account_navigation_menu_d97270a9:"Mostrar Menu de Navegação da conta",show_admin_navigation_menu_92fb579f:"Mostrar Menu de Navegação do Admin",show_courses_navigation_menu_7ad1a8d4:"Mostrar Menu de Navegação dos cursos",show_groups_navigation_menu_1521d38d:"Mostrar Menu de Navegação dos grupos",show_navigation_menu_34e7f441:"Mostrar Menu de Navegação"},ru:{hide_account_navigation_menu_ccdf9480:"Скрыть меню навигации учетной записи",hide_admin_navigation_menu_5cab9c9e:"Скрыть меню навигации администратора",hide_courses_navigation_menu_6f7c4cfd:"Скрыть меню навигации курсов",hide_groups_navigation_menu_62e8b3d0:"Скрыть меню навигации групп",hide_navigation_menu_f0b3e90:"Скрыть меню навигации",show_account_navigation_menu_d97270a9:"Показать меню навигации учетной записи",show_admin_navigation_menu_92fb579f:"Показать меню навигации администратора",show_courses_navigation_menu_7ad1a8d4:"Показать меню навигации курсов",show_groups_navigation_menu_1521d38d:"Показать меню навигации групп",show_navigation_menu_34e7f441:"Показать меню навигации"},sv:{hide_account_navigation_menu_ccdf9480:"Dölj konto-navigeringsmeny",hide_admin_navigation_menu_5cab9c9e:"Dölj administrations-navigeringsmeny",hide_courses_navigation_menu_6f7c4cfd:"Dölj kurs-navigeringsmeny",hide_groups_navigation_menu_62e8b3d0:"Dölj grupp-navigeringsmeny",hide_navigation_menu_f0b3e90:"Dölj navigeringsmeny",show_account_navigation_menu_d97270a9:"Visa konto-navigeringsmeny",show_admin_navigation_menu_92fb579f:"Visa administratörs-navigeringsmeny",show_courses_navigation_menu_7ad1a8d4:"Visa kurs-navigeringsmeny",show_groups_navigation_menu_1521d38d:"Visa grupp-navigeringsmeny",show_navigation_menu_34e7f441:"Visa navigeringsmeny"},"zh-Hans":{hide_account_navigation_menu_ccdf9480:"隐藏帐户导航菜单",hide_admin_navigation_menu_5cab9c9e:"隐藏管理员导航菜单",hide_courses_navigation_menu_6f7c4cfd:"隐藏课程导航菜单",hide_groups_navigation_menu_62e8b3d0:"隐藏小组导航菜单",hide_navigation_menu_f0b3e90:"隐藏导航菜单",show_account_navigation_menu_d97270a9:"显示帐户导航菜单",show_admin_navigation_menu_92fb579f:"显示管理员导航菜单",show_courses_navigation_menu_7ad1a8d4:"显示课程导航菜单",show_groups_navigation_menu_1521d38d:"显示小组导航菜单",show_navigation_menu_34e7f441:"显示导航菜单"},"zh-Hant":{hide_account_navigation_menu_ccdf9480:"隱藏帳戶導航工具選單",hide_admin_navigation_menu_5cab9c9e:"隱藏管理員導航工具選單",hide_courses_navigation_menu_6f7c4cfd:"隱藏課程導航工具選單",hide_groups_navigation_menu_62e8b3d0:"隱藏小組導航工具選單",hide_navigation_menu_f0b3e90:"隱藏導航工具選單",show_account_navigation_menu_d97270a9:"顯示帳戶導航工具選單",show_admin_navigation_menu_92fb579f:"顯示管理員導航工具選單",show_courses_navigation_menu_7ad1a8d4:"顯示課程導航工具選單",show_groups_navigation_menu_1521d38d:"顯示小組導航工具選單",show_navigation_menu_34e7f441:"顯示導航工具選單"}}})},"CU+gNa7iD4":function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=u(n("uceVF1dIMW")),r=u(n("mOY9BNujNR")),a=u(n("ArN3I+GqU9")),o=u(n("eJBzaBDd6c"))
n("D2yEjZ1CP5")
function u(e){return e&&e.__esModule?e:{default:e}}var s={buildMinimizerLink:function(){return(0,r.default)('<a href="#" style="font-size: 0.8em;">\n      '+(0,o.default)(i.default.t("links.minimize_embedded_kaltura_content","Minimize embedded content"))+"\n    </a>")},buildCommentHolder:function(e){return(0,r.default)('<div><div class="innerholder" tabindex="-1" style="margin-bottom: 15px;"></div></div>')},getMediaCommentId:function(e){var t=void 0,n=e.data("media_comment_id")||e.find(".media_comment_id:first").text()
n||(t=e.attr("id"))
t&&t.match(/^media_comment_/)&&(n=t.substring(14))
return n},collapseComment:function(e){void 0!==(t=e.find("video,audio").data("mediaelementplayer"))&&null!==t&&function(e){return e.pause()}(t)
var t
e.remove()
r.default.trackEvent("hide_embedded_content","hide_media")}},l=function(e){(0,r.default)(e.target).find("div.mejs-audio").focus()};(0,r.default)(document).on("click","a.instructure_inline_media_comment",(0,a.default)(function(){if(INST.kalturaSettings){var e=(0,r.default)(this),t="video",n=s.getMediaCommentId(e),o=s.buildCommentHolder(e);(function(e){return function(e){return e.closest("td").length>0}(e)&&function(e){return e.closest("td").css("width").replace("px","")<300}(e)})(e)&&function(e){var t=e.closest("td"),n=t.css("width")
t.data("orig-width",n)
t.css("width","300px")}(e)
e.after(o)
e.hide();("audio"===e.data("media_comment_type")||e.is(".audio_playback, .audio_comment, .instructure_audio_link"))&&(t="audio")
o.children("div").mediaComment("show_inline",n,t,e.data("download")||e.attr("href"))
s.buildMinimizerLink().appendTo(o).click((0,a.default)(function(){var t=e.closest("td")
e.show().focus()
t.css("width",t.data("orig-width"))
s.collapseComment(o)}))
r.default.trackEvent("show_embedded_content","show_media")
o.find(".innerholder").css("outline","none")
o.find(".innerholder").on("focus",l)}else alert(i.default.t("alerts.kaltura_disabled","Kaltura has been disabled for this Canvas site"))}))
t.default=s
e.exports=t.default},D2yEjZ1CP5:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=c(n("uceVF1dIMW")),r=c(n("iBw8ZGM6v8")),a=c(n("yvh8ynczHv")),o=c(n("tnyJgcGuAs")),u=c(n("NDO/g0y6Bx")),s=c(n("mOY9BNujNR")),l=c(n("3tzgL+C4wS")),d=c(n("eJBzaBDd6c"))
function c(e){return e&&e.__esModule?e:{default:e}}var f={getElement:function(e,t,n,i){var r="<"+e+" "+("video"===e?' width="'+n+'" height="'+i+'"':"")+' preload="metadata" controls>'+t+"</"+e+">"
return(0,s.default)(r)}}
s.default.extend(o.default.MediaElementDefaults,{pluginPath:"/images/mediaelement/",defaultVideoWidth:550,defaultVideoHeight:448})
o.default.MepDefaults.success=function(e,t){(0,l.default)(this.mediaCommentId,e,INST.kalturaSettings)
return e.play()}
o.default.MepDefaults.features.push("googleanalytics")
var h=o.default.MepDefaults.features.indexOf("tracks")+1
o.default.MepDefaults.features.splice(h,0,"sourcechooser")
o.default.MepDefaults.features.splice(h,0,"speed")
function _(e){var t=new s.default.Deferred
s.default.getJSON("/media_objects/"+e+"/info",function(e){var n=e.media_sources.filter(function(e){return"audio/mp3"!==e.content_type}).map(function(e){return"<source\n        type='"+(0,d.default)(e.content_type)+"'\n        src='"+(0,d.default)(e.url)+"'\n        title='"+(0,d.default)(e.width)+"x"+(0,d.default)(e.height)+" "+(0,d.default)(Math.floor(e.bitrate/1024))+" kbps'\n      />"}),i=r.default.map(e.media_tracks,function(e){var t=o.default.language.codes[e.locale]||e.locale
return"<track kind='"+(0,d.default)(e.kind)+"' label='"+(0,d.default)(t)+"' src='"+(0,d.default)(e.url)+"' srclang='"+(0,d.default)(e.locale)+"' />"}),a=r.default.map(e.media_sources,function(e){return e.content_type})
return t.resolve({sources:n,tracks:i,types:a,can_add_captions:e.can_add_captions})})
return t}function p(e){var t,n,i=e.sourcesAndTracks,r=e.mediaType,a=e.height,u=e.width,l=e.mediaPlayerOptions,d="video"===r?"video":"audio",c=i.sources.concat(i.tracks).join("")
if("audio"===r&&i.types[0].match(/^video\//)&&(t=s.default.extend({mode:"auto"},o.default.MediaElementDefaults,o.default.MepDefaults,l),n=f.getElement("audio",c),"native"!==o.default.HtmlMediaElementShim.determinePlayback(n[0],t,o.default.MediaFeatures.supportsMediaTag,!0,null).method)){d="video"
l.mode="auto_plugin"
l.isVideo=!1
l.videoHeight=a=30}return f.getElement(d,c,u,a)}var m={create:function(e,t,n,i){(0,s.default)("#media_recorder_container").removeAttr("id")
this.attr("id","media_recorder_container")
a.default.unsubscribe("media_comment_created")
a.default.subscribe("media_comment_created",function(e){return t(e.id,e.mediaType,e.title)})
var r={modal:!1,defaultTitle:i}
s.default.isFunction(n)&&(r.close=n.bind(this))
return s.default.mediaComment.init(e,r)},show_inline:function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:"video",n=arguments[2],a=(0,s.default)(this).closest(".instructure_file_link_holder").andSelf().first()
a.text(i.default.t("loading","Loading media..."))
var l=function(e,n){var a=Math.min(n.closest("div,p,table").width()||550,550),s=Math.round(a/336*240)
return _(e).done(function(l){if(l.sources.length){var d={can_add_captions:l.can_add_captions,mediaCommentId:e,googleAnalyticsTitle:e,menuTimeoutMouseLeave:50,success:function(e){n.focus()
e.play()},keyActions:[{keys:r.default.values(u.default.keyCodes),action:function(e,t,n,i){if(e.isVideo){e.showControls()
e.startControlsTimer()}new u.default(o.default,e,t,i).dispatch()}}]},c=p({sourcesAndTracks:l,mediaPlayerOptions:d,mediaType:t,height:s,width:a})
c.appendTo(n.html(""))
var f=new MediaElementPlayer(c,d)
c.data("mediaelementplayer",f)}else n.text(i.default.t("media_still_converting","Media is currently being converted, please try again in a little bit."))})}
if("maybe"===e){var d=n.replace(/\/download.*/,""),c=function(){return a.text(i.default.t("Media has been queued for conversion, please try again in a little bit."))}
return s.default.ajaxJSON(d,"GET",{},function(e){if(e.attachment&&"maybe"!==e.attachment.media_entry_id){a.text("")
return l(e.attachment.media_entry_id,a)}return c()},c)}return l(e,a)},show:function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:"video";(0,s.default)(".play_media_comment").find(".ui-dialog-titlebar-close").click()
var n=(0,s.default)(this),r=n.data("media_comment_dialog")
if(!r){var a=void 0,o=void 0
if("video"===t){a=426
o=550}else{a=180
o=400}var u=(0,s.default)('<div style="overflow: hidden; padding: 0;" />')
"audio"===t&&u.css("padding-top","120px")
u.dialog({dialogClass:"play_media_comment",title:i.default.t("titles.play_comment","Play Media Comment"),width:o,height:a+60,modal:!1,resizable:!1,close:function(){var e=n.data("mediaelementplayer")
e&&e.pause()},open:function(e){return(0,s.default)(e.currentTarget).parent().find(".ui-dialog-titlebar-close").focus()}})
return u.disableWhileLoading(_(e).done(function(r){if(r.sources.length){var s={can_add_captions:r.can_add_captions,mediaCommentId:e,googleAnalyticsTitle:e},l=p({sourcesAndTracks:r,mediaPlayerOptions:s,mediaType:t,height:a,width:o})
l.appendTo(u.html(""))
n.data({mediaelementplayer:new MediaElementPlayer(l,s),media_comment_dialog:u})}else u.text(i.default.t("media_still_converting","Media is currently being converted, please try again in a little bit."))}))}r.dialog("open")}}
s.default.fn.mediaComment=function(e){if(!INST.kalturaSettings)return console.log("Kaltura has not been enabled for this account")
for(var t=arguments.length,n=Array(t>1?t-1:0),i=1;i<t;i++)n[i-1]=arguments[i]
m[e].apply(this,n)
return this}
t.default=f
e.exports=t.default},DGHOX4S35d:function(e,t,n){var i,r
i=[n("EV7MgeIKLJ"),n("wsG6LCw0ui"),n("VcdxSyzxRH"),n("6sqZ3sUkYG"),n("6XcNbehSs1"),n("j1K+QE411H"),n("wmdTCqkKx2")],void 0!==(r=function(e,t,n,i,r,a,o){function u(){this.xmlParser=new n}u.prototype.load=function(n){var i=n.getSession()
i.kalsig=t(i)
this.xhr=new XMLHttpRequest
this.xhr.open("GET",o.uiconfUrl+e(i))
this.xhr.addEventListener("load",this.onXhrLoad.bind(this))
this.xhr.send(i)}
u.prototype.createUiConfig=function(e){this.config=r(e)}
u.prototype.onXhrLoad=function(e){this.xmlParser.parseXML(this.xhr.response)
var t=this.xmlParser.find("result").find("ui_conf").find("confFile").first().text()
if(t){this.xmlParser=new n
this.xmlParser.parseXML(t)
this.config=r(this.xmlParser)
a.dispatchEvent("UiConf.complete",this.config,this)}else a.dispatchEvent("UiConf.error",this.xhr.response,this)}
return u}.apply(t,i))&&(e.exports=r)},EKuPgEpL6b:function(e,t,n){"use strict"
var i=a(n("mOY9BNujNR")),r=a(n("zNOhtK+31x"))
function a(e){return e&&e.__esModule?e:{default:e}}(0,i.default)(document).on("mousedown click keydown",".al-trigger",function(e){var t=(0,i.default)(this)
if(!t.data("kyleMenu")){var n=i.default.extend({noButton:!0},t.data("kyleMenuOptions"))
t.data("append-to-body")&&(n.appendMenuTo="body")
n=i.default.extend(n,{popupOpts:{position:{my:t.data("popup-my"),at:t.data("popup-at"),within:t.data("popup-within")}}})
new r.default(t,n)
t.trigger(e)}})},EV7MgeIKLJ:function(e,t,n){var i
void 0!==(i=function(){return function(e){var t="?"
for(var n in e)t+=n+"="+encodeURIComponent(e[n])+"&"
return t=t.substring(0,t.length-1)}}.apply(t,[]))&&(e.exports=i)},Eq7qibUFi3:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=o(n("ZrlrdyRlgX")),r=o(n("wxAWXU5KIn")),a=o(n("mOY9BNujNR"))
function o(e){return e&&e.__esModule?e:{default:e}}var u=".lti-thumbnail-launch"
function s(e){e.preventDefault()
l.launch((0,a.default)(e.target).closest(u))}var l=new(function(){function e(){(0,i.default)(this,e);(0,a.default)(document.body).delegate(u,"click",s)}(0,r.default)(e,[{key:"launch",value:function(e){var t=JSON.parse(e.attr("target")),n=(0,a.default)("<iframe/>",{src:e.attr("href"),allowfullscreen:"",width:t.displayWidth||500,height:t.displayHeight||500})
e.replaceWith(n)}}])
return e}())(u)
t.default=l
e.exports=t.default},FMOK6cJcp3:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
n("t0oyyDFjk2")
function o(e,t,n){var i=void 0
null==t&&(t=e.is(":ui-dialog:hidden")||"true"!==e.attr("aria-expanded"))
var r,u=(0,a.default)("[aria-controls*="+e.attr("id")+"]")
u.filter(function(){return(0,a.default)(this).data("hideWhileTargetShown")}).toggle(!t)
if(n&&void 0!==n.attr("aria-expanded")){n.attr("aria-expanded",!("true"===n.attr("aria-expanded")))
e.toggle("true"===n.attr("aria-expanded"))}else e.attr("aria-expanded",""+t).toggle(t)
if(e.is(":ui-dialog")||(i=e.data("turnIntoDialog"))){if(i&&t){i=a.default.extend({autoOpen:!1,close:function(){o(e,!1)}},i)
e.dialog(i).fixDialogButtons()}if(t){e.dialog("open")
e.data("read-on-open")&&e.dialog("widget").attr("aria-live","assertive").attr("aria-atomic","true")}else e.dialog("isOpen")&&e.dialog("close")}u.each((r=t?"Shown":"Hidden",function(){var e,t=(0,a.default)(this)
if(e=t.data("htmlWhileTarget"+r)){var n="htmlWhileTarget"+("Hidden"===r?"Shown":"Hidden")
t.data(n)||t.data(n,t.html())
t.html(e)}}))}var u={bind:function(){(0,a.default)(document).on("click change keyclick",".element_toggler[aria-controls]",function(e){var t=void 0,n=(0,a.default)(this)
if(n.is('input[type="checkbox"]')){if("click"===e.type)return
t=n.prop("checked")}"click"===e.type&&e.preventDefault()
var i=n.closest(".user_content")
i.length||(i=(0,a.default)(document.body))
var r=i.find("#"+n.attr("aria-controls").replace(/\s/g,", #"))
r.length&&o(r,t,n)
var u=n.find('i[class*="icon-mini-arrow"].auto_rotate')
if(u.length){u.toggleClass("icon-mini-arrow-down")
u.toggleClass("icon-mini-arrow-right")}})}}
u.bind()
t.default=u
e.exports=t.default},FjPpBpSp8P:function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
n("r81G667jwg")
n("3pTo86YxQs");(0,a.default)(document).ready(function(){(0,a.default)("#floating_reminders").draggable();(0,a.default)(".show_reminders_link").click(function(e){e.preventDefault();(0,a.default)(this).blur()
var t=(0,a.default)("#floating_reminders"),n=t.clone()
n.children().css("visibility","hidden")
var i=(0,a.default)("#reminders_icon").offset(),r=(0,a.default)("#floating_reminders").offset().top
t.after(n)
n.css({width:20,height:20,left:i.left,top:i.top-r,opacity:0})
t.css("visibility","hidden").css("left","")
n.animate({top:t.css("top"),left:t.css("left"),width:t.width(),height:t.height(),opacity:1},"slow",function(){(0,a.default)(this).remove()
t.css("visibility","visible")
t.find("a:not(.hide_reminders_link):visible:first").focus();(0,a.default)("#reminders_icon").hide()})
t.find(".update_session_url").attr("href")});(0,a.default)(".hide_reminders_link").click(function(e){e.preventDefault()
var t=(0,a.default)(this).parents("#floating_reminders"),n=t.clone()
t.after(n).css("left",-2e3)
n.children().css("visibility","hidden")
var i=(0,a.default)("#reminders_icon").show().offset(),r=n.offset().top
n.animate({width:20,height:20,left:i.left,top:i.top-r,opacity:0},"slow",function(){(0,a.default)(this).remove()})
t.find(".update_session_url").attr("href")});(0,a.default)(".drop_held_context_link").click(function(e){e.preventDefault()
var t=(0,a.default)(this).parents(".reminder")
t.confirmDelete({url:(0,a.default)(this).attr("href"),message:"Are you sure you want to drop this "+t.find(".item_type").text()+"?",success:function(e){(0,a.default)(this).fadeOut("fast",function(){(0,a.default)(this).remove()
0===(0,a.default)("#floating_reminders .reminder").length&&(0,a.default)("#floating_reminders").fadeOut("fast",function(){(0,a.default)(this).remove();(0,a.default)("#reminders_icon").remove()})})}})})})},GTvFG2kez5:function(e,t,n){var i,r
i=[n("gbrphF+ACY"),n("mOY9BNujNR")],void 0!==(r=function(e,t){return function(n){n=t(n)
return new e({id:n.attr("id"),description:n.attr("description"),entryType:n.attr("entryType"),mediaType:n.attr("mediaType"),type:n.attr("type"),extensions:n.attr("extensions")})}}.apply(t,i))&&(e.exports=r)},KPRNYFd0CF:function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
function o(e){var t=a.default.Event("keyclick");(0,a.default)(e.target).trigger(t)
t.isDefaultPrevented()&&e.preventDefault()
t.isPropagationStopped()&&e.stopPropagation()}function u(e){switch(e.which){case 13:return o(e)
case 32:return e.preventDefault()}}function s(e){switch(e.which){case 32:return o(e)}}a.default.fn.activate_keyclick=function(){var e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:null
this.on("keydown",e,u)
return this.on("keyup",e,s)};(0,a.default)(document).activate_keyclick("[role=button], [role=checkbox]")},LShObMQJhT:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.attachErrorHandler=o
t.getImagesAndAttach=u
var i=a(n("mOY9BNujNR")),r=a(n("9vdLYFzxED"))
function a(e){return e&&e.__esModule?e:{default:e}}function o(e){(0,i.default)(e).on("error",function(e){e.currentTarget.src?i.default.get(e.currentTarget.src).fail(function(t){403===t.status?(0,i.default)(e.currentTarget).attr({src:"/images/svg-icons/icon_lock.svg",alt:r.default.t("Locked image"),width:100,height:100}):(0,i.default)(e.currentTarget).addClass("broken-image")}):(0,i.default)(e.currentTarget).addClass("broken-image")})}function u(){(0,i.default)('img[src!=""]').toArray().forEach(o)}(0,i.default)(document).ready(function(){return u()})},M4fFHvVeAA:function(e,t,n){(function(e,i){var r;(function(){var a,o=200,u="Unsupported core-js use. Try https://npms.io/search?q=ponyfill.",s="Expected a function",l="__lodash_hash_undefined__",d=500,c="__lodash_placeholder__",f=1,h=2,_=4,p=1,m=2,v=1,g=2,y=4,b=8,w=16,k=32,x=64,E=128,C=256,S=512,M=30,A="...",T=800,j=16,O=1,N=2,I=1/0,F=9007199254740991,R=1.7976931348623157e308,U=NaN,D=4294967295,P=D-1,L=D>>>1,z=[["ary",E],["bind",v],["bindKey",g],["curry",b],["curryRight",w],["flip",S],["partial",k],["partialRight",x],["rearg",C]],H="[object Arguments]",B="[object Array]",W="[object AsyncFunction]",q="[object Boolean]",V="[object Date]",K="[object DOMException]",Y="[object Error]",$="[object Function]",G="[object GeneratorFunction]",J="[object Map]",X="[object Number]",Q="[object Null]",Z="[object Object]",ee="[object Proxy]",te="[object RegExp]",ne="[object Set]",ie="[object String]",re="[object Symbol]",ae="[object Undefined]",oe="[object WeakMap]",ue="[object WeakSet]",se="[object ArrayBuffer]",le="[object DataView]",de="[object Float32Array]",ce="[object Float64Array]",fe="[object Int8Array]",he="[object Int16Array]",_e="[object Int32Array]",pe="[object Uint8Array]",me="[object Uint8ClampedArray]",ve="[object Uint16Array]",ge="[object Uint32Array]",ye=/\b__p \+= '';/g,be=/\b(__p \+=) '' \+/g,we=/(__e\(.*?\)|\b__t\)) \+\n'';/g,ke=/&(?:amp|lt|gt|quot|#39);/g,xe=/[&<>"']/g,Ee=RegExp(ke.source),Ce=RegExp(xe.source),Se=/<%-([\s\S]+?)%>/g,Me=/<%([\s\S]+?)%>/g,Ae=/<%=([\s\S]+?)%>/g,Te=/\.|\[(?:[^[\]]*|(["'])(?:(?!\1)[^\\]|\\.)*?\1)\]/,je=/^\w*$/,Oe=/[^.[\]]+|\[(?:(-?\d+(?:\.\d+)?)|(["'])((?:(?!\2)[^\\]|\\.)*?)\2)\]|(?=(?:\.|\[\])(?:\.|\[\]|$))/g,Ne=/[\\^$.*+?()[\]{}|]/g,Ie=RegExp(Ne.source),Fe=/^\s+|\s+$/g,Re=/^\s+/,Ue=/\s+$/,De=/\{(?:\n\/\* \[wrapped with .+\] \*\/)?\n?/,Pe=/\{\n\/\* \[wrapped with (.+)\] \*/,Le=/,? & /,ze=/[^\x00-\x2f\x3a-\x40\x5b-\x60\x7b-\x7f]+/g,He=/\\(\\)?/g,Be=/\$\{([^\\}]*(?:\\.[^\\}]*)*)\}/g,We=/\w*$/,qe=/^[-+]0x[0-9a-f]+$/i,Ve=/^0b[01]+$/i,Ke=/^\[object .+?Constructor\]$/,Ye=/^0o[0-7]+$/i,$e=/^(?:0|[1-9]\d*)$/,Ge=/[\xc0-\xd6\xd8-\xf6\xf8-\xff\u0100-\u017f]/g,Je=/($^)/,Xe=/['\n\r\u2028\u2029\\]/g,Qe="\\u0300-\\u036f\\ufe20-\\ufe2f\\u20d0-\\u20ff",Ze="\\xac\\xb1\\xd7\\xf7\\x00-\\x2f\\x3a-\\x40\\x5b-\\x60\\x7b-\\xbf\\u2000-\\u206f \\t\\x0b\\f\\xa0\\ufeff\\n\\r\\u2028\\u2029\\u1680\\u180e\\u2000\\u2001\\u2002\\u2003\\u2004\\u2005\\u2006\\u2007\\u2008\\u2009\\u200a\\u202f\\u205f\\u3000",et="[\\ud800-\\udfff]",tt="["+Ze+"]",nt="["+Qe+"]",it="\\d+",rt="[\\u2700-\\u27bf]",at="[a-z\\xdf-\\xf6\\xf8-\\xff]",ot="[^\\ud800-\\udfff"+Ze+it+"\\u2700-\\u27bfa-z\\xdf-\\xf6\\xf8-\\xffA-Z\\xc0-\\xd6\\xd8-\\xde]",ut="\\ud83c[\\udffb-\\udfff]",st="[^\\ud800-\\udfff]",lt="(?:\\ud83c[\\udde6-\\uddff]){2}",dt="[\\ud800-\\udbff][\\udc00-\\udfff]",ct="[A-Z\\xc0-\\xd6\\xd8-\\xde]",ft="(?:"+at+"|"+ot+")",ht="(?:"+ct+"|"+ot+")",_t="(?:"+nt+"|"+ut+")"+"?",pt="[\\ufe0e\\ufe0f]?"+_t+("(?:\\u200d(?:"+[st,lt,dt].join("|")+")[\\ufe0e\\ufe0f]?"+_t+")*"),mt="(?:"+[rt,lt,dt].join("|")+")"+pt,vt="(?:"+[st+nt+"?",nt,lt,dt,et].join("|")+")",gt=RegExp("['’]","g"),yt=RegExp(nt,"g"),bt=RegExp(ut+"(?="+ut+")|"+vt+pt,"g"),wt=RegExp([ct+"?"+at+"+(?:['’](?:d|ll|m|re|s|t|ve))?(?="+[tt,ct,"$"].join("|")+")",ht+"+(?:['’](?:D|LL|M|RE|S|T|VE))?(?="+[tt,ct+ft,"$"].join("|")+")",ct+"?"+ft+"+(?:['’](?:d|ll|m|re|s|t|ve))?",ct+"+(?:['’](?:D|LL|M|RE|S|T|VE))?","\\d*(?:1ST|2ND|3RD|(?![123])\\dTH)(?=\\b|[a-z_])","\\d*(?:1st|2nd|3rd|(?![123])\\dth)(?=\\b|[A-Z_])",it,mt].join("|"),"g"),kt=RegExp("[\\u200d\\ud800-\\udfff"+Qe+"\\ufe0e\\ufe0f]"),xt=/[a-z][A-Z]|[A-Z]{2,}[a-z]|[0-9][a-zA-Z]|[a-zA-Z][0-9]|[^a-zA-Z0-9 ]/,Et=["Array","Buffer","DataView","Date","Error","Float32Array","Float64Array","Function","Int8Array","Int16Array","Int32Array","Map","Math","Object","Promise","RegExp","Set","String","Symbol","TypeError","Uint8Array","Uint8ClampedArray","Uint16Array","Uint32Array","WeakMap","_","clearTimeout","isFinite","parseInt","setTimeout"],Ct=-1,St={}
St[de]=St[ce]=St[fe]=St[he]=St[_e]=St[pe]=St[me]=St[ve]=St[ge]=!0
St[H]=St[B]=St[se]=St[q]=St[le]=St[V]=St[Y]=St[$]=St[J]=St[X]=St[Z]=St[te]=St[ne]=St[ie]=St[oe]=!1
var Mt={}
Mt[H]=Mt[B]=Mt[se]=Mt[le]=Mt[q]=Mt[V]=Mt[de]=Mt[ce]=Mt[fe]=Mt[he]=Mt[_e]=Mt[J]=Mt[X]=Mt[Z]=Mt[te]=Mt[ne]=Mt[ie]=Mt[re]=Mt[pe]=Mt[me]=Mt[ve]=Mt[ge]=!0
Mt[Y]=Mt[$]=Mt[oe]=!1
var At={"\\":"\\","'":"'","\n":"n","\r":"r","\u2028":"u2028","\u2029":"u2029"},Tt=parseFloat,jt=parseInt,Ot="object"==typeof e&&e&&e.Object===Object&&e,Nt="object"==typeof self&&self&&self.Object===Object&&self,It=Ot||Nt||Function("return this")(),Ft="object"==typeof t&&t&&!t.nodeType&&t,Rt=Ft&&"object"==typeof i&&i&&!i.nodeType&&i,Ut=Rt&&Rt.exports===Ft,Dt=Ut&&Ot.process,Pt=function(){try{return Dt&&Dt.binding&&Dt.binding("util")}catch(e){}}(),Lt=Pt&&Pt.isArrayBuffer,zt=Pt&&Pt.isDate,Ht=Pt&&Pt.isMap,Bt=Pt&&Pt.isRegExp,Wt=Pt&&Pt.isSet,qt=Pt&&Pt.isTypedArray
function Vt(e,t,n){switch(n.length){case 0:return e.call(t)
case 1:return e.call(t,n[0])
case 2:return e.call(t,n[0],n[1])
case 3:return e.call(t,n[0],n[1],n[2])}return e.apply(t,n)}function Kt(e,t,n,i){for(var r=-1,a=null==e?0:e.length;++r<a;){var o=e[r]
t(i,o,n(o),e)}return i}function Yt(e,t){for(var n=-1,i=null==e?0:e.length;++n<i&&!1!==t(e[n],n,e););return e}function $t(e,t){for(var n=null==e?0:e.length;n--&&!1!==t(e[n],n,e););return e}function Gt(e,t){for(var n=-1,i=null==e?0:e.length;++n<i;)if(!t(e[n],n,e))return!1
return!0}function Jt(e,t){for(var n=-1,i=null==e?0:e.length,r=0,a=[];++n<i;){var o=e[n]
t(o,n,e)&&(a[r++]=o)}return a}function Xt(e,t){return!!(null==e?0:e.length)&&sn(e,t,0)>-1}function Qt(e,t,n){for(var i=-1,r=null==e?0:e.length;++i<r;)if(n(t,e[i]))return!0
return!1}function Zt(e,t){for(var n=-1,i=null==e?0:e.length,r=Array(i);++n<i;)r[n]=t(e[n],n,e)
return r}function en(e,t){for(var n=-1,i=t.length,r=e.length;++n<i;)e[r+n]=t[n]
return e}function tn(e,t,n,i){var r=-1,a=null==e?0:e.length
i&&a&&(n=e[++r])
for(;++r<a;)n=t(n,e[r],r,e)
return n}function nn(e,t,n,i){var r=null==e?0:e.length
i&&r&&(n=e[--r])
for(;r--;)n=t(n,e[r],r,e)
return n}function rn(e,t){for(var n=-1,i=null==e?0:e.length;++n<i;)if(t(e[n],n,e))return!0
return!1}var an=fn("length")
function on(e,t,n){var i
n(e,function(e,n,r){if(t(e,n,r)){i=n
return!1}})
return i}function un(e,t,n,i){for(var r=e.length,a=n+(i?1:-1);i?a--:++a<r;)if(t(e[a],a,e))return a
return-1}function sn(e,t,n){return t==t?function(e,t,n){var i=n-1,r=e.length
for(;++i<r;)if(e[i]===t)return i
return-1}(e,t,n):un(e,dn,n)}function ln(e,t,n,i){for(var r=n-1,a=e.length;++r<a;)if(i(e[r],t))return r
return-1}function dn(e){return e!=e}function cn(e,t){var n=null==e?0:e.length
return n?pn(e,t)/n:U}function fn(e){return function(t){return null==t?a:t[e]}}function hn(e){return function(t){return null==e?a:e[t]}}function _n(e,t,n,i,r){r(e,function(e,r,a){n=i?(i=!1,e):t(n,e,r,a)})
return n}function pn(e,t){for(var n,i=-1,r=e.length;++i<r;){var o=t(e[i])
o!==a&&(n=n===a?o:n+o)}return n}function mn(e,t){for(var n=-1,i=Array(e);++n<e;)i[n]=t(n)
return i}function vn(e){return function(t){return e(t)}}function gn(e,t){return Zt(t,function(t){return e[t]})}function yn(e,t){return e.has(t)}function bn(e,t){for(var n=-1,i=e.length;++n<i&&sn(t,e[n],0)>-1;);return n}function wn(e,t){for(var n=e.length;n--&&sn(t,e[n],0)>-1;);return n}var kn=hn({"À":"A","Á":"A","Â":"A","Ã":"A","Ä":"A","Å":"A","à":"a","á":"a","â":"a","ã":"a","ä":"a","å":"a","Ç":"C","ç":"c","Ð":"D","ð":"d","È":"E","É":"E","Ê":"E","Ë":"E","è":"e","é":"e","ê":"e","ë":"e","Ì":"I","Í":"I","Î":"I","Ï":"I","ì":"i","í":"i","î":"i","ï":"i","Ñ":"N","ñ":"n","Ò":"O","Ó":"O","Ô":"O","Õ":"O","Ö":"O","Ø":"O","ò":"o","ó":"o","ô":"o","õ":"o","ö":"o","ø":"o","Ù":"U","Ú":"U","Û":"U","Ü":"U","ù":"u","ú":"u","û":"u","ü":"u","Ý":"Y","ý":"y","ÿ":"y","Æ":"Ae","æ":"ae","Þ":"Th","þ":"th","ß":"ss","Ā":"A","Ă":"A","Ą":"A","ā":"a","ă":"a","ą":"a","Ć":"C","Ĉ":"C","Ċ":"C","Č":"C","ć":"c","ĉ":"c","ċ":"c","č":"c","Ď":"D","Đ":"D","ď":"d","đ":"d","Ē":"E","Ĕ":"E","Ė":"E","Ę":"E","Ě":"E","ē":"e","ĕ":"e","ė":"e","ę":"e","ě":"e","Ĝ":"G","Ğ":"G","Ġ":"G","Ģ":"G","ĝ":"g","ğ":"g","ġ":"g","ģ":"g","Ĥ":"H","Ħ":"H","ĥ":"h","ħ":"h","Ĩ":"I","Ī":"I","Ĭ":"I","Į":"I","İ":"I","ĩ":"i","ī":"i","ĭ":"i","į":"i","ı":"i","Ĵ":"J","ĵ":"j","Ķ":"K","ķ":"k","ĸ":"k","Ĺ":"L","Ļ":"L","Ľ":"L","Ŀ":"L","Ł":"L","ĺ":"l","ļ":"l","ľ":"l","ŀ":"l","ł":"l","Ń":"N","Ņ":"N","Ň":"N","Ŋ":"N","ń":"n","ņ":"n","ň":"n","ŋ":"n","Ō":"O","Ŏ":"O","Ő":"O","ō":"o","ŏ":"o","ő":"o","Ŕ":"R","Ŗ":"R","Ř":"R","ŕ":"r","ŗ":"r","ř":"r","Ś":"S","Ŝ":"S","Ş":"S","Š":"S","ś":"s","ŝ":"s","ş":"s","š":"s","Ţ":"T","Ť":"T","Ŧ":"T","ţ":"t","ť":"t","ŧ":"t","Ũ":"U","Ū":"U","Ŭ":"U","Ů":"U","Ű":"U","Ų":"U","ũ":"u","ū":"u","ŭ":"u","ů":"u","ű":"u","ų":"u","Ŵ":"W","ŵ":"w","Ŷ":"Y","ŷ":"y","Ÿ":"Y","Ź":"Z","Ż":"Z","Ž":"Z","ź":"z","ż":"z","ž":"z","Ĳ":"IJ","ĳ":"ij","Œ":"Oe","œ":"oe","ŉ":"'n","ſ":"s"}),xn=hn({"&":"&amp;","<":"&lt;",">":"&gt;",'"':"&quot;","'":"&#39;"})
function En(e){return"\\"+At[e]}function Cn(e){return kt.test(e)}function Sn(e){var t=-1,n=Array(e.size)
e.forEach(function(e,i){n[++t]=[i,e]})
return n}function Mn(e,t){return function(n){return e(t(n))}}function An(e,t){for(var n=-1,i=e.length,r=0,a=[];++n<i;){var o=e[n]
if(o===t||o===c){e[n]=c
a[r++]=n}}return a}function Tn(e,t){return"__proto__"==t?a:e[t]}function jn(e){var t=-1,n=Array(e.size)
e.forEach(function(e){n[++t]=e})
return n}function On(e){var t=-1,n=Array(e.size)
e.forEach(function(e){n[++t]=[e,e]})
return n}function Nn(e){return Cn(e)?function(e){var t=bt.lastIndex=0
for(;bt.test(e);)++t
return t}(e):an(e)}function In(e){return Cn(e)?function(e){return e.match(bt)||[]}(e):function(e){return e.split("")}(e)}var Fn=hn({"&amp;":"&","&lt;":"<","&gt;":">","&quot;":'"',"&#39;":"'"})
var Rn=function e(t){var n,i=(t=null==t?It:Rn.defaults(It.Object(),t,Rn.pick(It,Et))).Array,r=t.Date,Qe=t.Error,Ze=t.Function,et=t.Math,tt=t.Object,nt=t.RegExp,it=t.String,rt=t.TypeError,at=i.prototype,ot=Ze.prototype,ut=tt.prototype,st=t["__core-js_shared__"],lt=ot.toString,dt=ut.hasOwnProperty,ct=0,ft=(n=/[^.]+$/.exec(st&&st.keys&&st.keys.IE_PROTO||""))?"Symbol(src)_1."+n:"",ht=ut.toString,_t=lt.call(tt),pt=It._,mt=nt("^"+lt.call(dt).replace(Ne,"\\$&").replace(/hasOwnProperty|(function).*?(?=\\\()| for .+?(?=\\\])/g,"$1.*?")+"$"),vt=Ut?t.Buffer:a,bt=t.Symbol,kt=t.Uint8Array,At=vt?vt.allocUnsafe:a,Ot=Mn(tt.getPrototypeOf,tt),Nt=tt.create,Ft=ut.propertyIsEnumerable,Rt=at.splice,Dt=bt?bt.isConcatSpreadable:a,Pt=bt?bt.iterator:a,an=bt?bt.toStringTag:a,hn=function(){try{var e=La(tt,"defineProperty")
e({},"",{})
return e}catch(e){}}(),Un=t.clearTimeout!==It.clearTimeout&&t.clearTimeout,Dn=r&&r.now!==It.Date.now&&r.now,Pn=t.setTimeout!==It.setTimeout&&t.setTimeout,Ln=et.ceil,zn=et.floor,Hn=tt.getOwnPropertySymbols,Bn=vt?vt.isBuffer:a,Wn=t.isFinite,qn=at.join,Vn=Mn(tt.keys,tt),Kn=et.max,Yn=et.min,$n=r.now,Gn=t.parseInt,Jn=et.random,Xn=at.reverse,Qn=La(t,"DataView"),Zn=La(t,"Map"),ei=La(t,"Promise"),ti=La(t,"Set"),ni=La(t,"WeakMap"),ii=La(tt,"create"),ri=ni&&new ni,ai={},oi=co(Qn),ui=co(Zn),si=co(ei),li=co(ti),di=co(ni),ci=bt?bt.prototype:a,fi=ci?ci.valueOf:a,hi=ci?ci.toString:a
function _i(e){if(Au(e)&&!vu(e)&&!(e instanceof gi)){if(e instanceof vi)return e
if(dt.call(e,"__wrapped__"))return fo(e)}return new vi(e)}var pi=function(){function e(){}return function(t){if(!Mu(t))return{}
if(Nt)return Nt(t)
e.prototype=t
var n=new e
e.prototype=a
return n}}()
function mi(){}function vi(e,t){this.__wrapped__=e
this.__actions__=[]
this.__chain__=!!t
this.__index__=0
this.__values__=a}_i.templateSettings={escape:Se,evaluate:Me,interpolate:Ae,variable:"",imports:{_:_i}}
_i.prototype=mi.prototype
_i.prototype.constructor=_i
vi.prototype=pi(mi.prototype)
vi.prototype.constructor=vi
function gi(e){this.__wrapped__=e
this.__actions__=[]
this.__dir__=1
this.__filtered__=!1
this.__iteratees__=[]
this.__takeCount__=D
this.__views__=[]}gi.prototype=pi(mi.prototype)
gi.prototype.constructor=gi
function yi(e){var t=-1,n=null==e?0:e.length
this.clear()
for(;++t<n;){var i=e[t]
this.set(i[0],i[1])}}yi.prototype.clear=function(){this.__data__=ii?ii(null):{}
this.size=0}
yi.prototype.delete=function(e){var t=this.has(e)&&delete this.__data__[e]
this.size-=t?1:0
return t}
yi.prototype.get=function(e){var t=this.__data__
if(ii){var n=t[e]
return n===l?a:n}return dt.call(t,e)?t[e]:a}
yi.prototype.has=function(e){var t=this.__data__
return ii?t[e]!==a:dt.call(t,e)}
yi.prototype.set=function(e,t){var n=this.__data__
this.size+=this.has(e)?0:1
n[e]=ii&&t===a?l:t
return this}
function bi(e){var t=-1,n=null==e?0:e.length
this.clear()
for(;++t<n;){var i=e[t]
this.set(i[0],i[1])}}bi.prototype.clear=function(){this.__data__=[]
this.size=0}
bi.prototype.delete=function(e){var t=this.__data__,n=ji(t,e)
if(n<0)return!1
n==t.length-1?t.pop():Rt.call(t,n,1);--this.size
return!0}
bi.prototype.get=function(e){var t=this.__data__,n=ji(t,e)
return n<0?a:t[n][1]}
bi.prototype.has=function(e){return ji(this.__data__,e)>-1}
bi.prototype.set=function(e,t){var n=this.__data__,i=ji(n,e)
if(i<0){++this.size
n.push([e,t])}else n[i][1]=t
return this}
function wi(e){var t=-1,n=null==e?0:e.length
this.clear()
for(;++t<n;){var i=e[t]
this.set(i[0],i[1])}}wi.prototype.clear=function(){this.size=0
this.__data__={hash:new yi,map:new(Zn||bi),string:new yi}}
wi.prototype.delete=function(e){var t=Da(this,e).delete(e)
this.size-=t?1:0
return t}
wi.prototype.get=function(e){return Da(this,e).get(e)}
wi.prototype.has=function(e){return Da(this,e).has(e)}
wi.prototype.set=function(e,t){var n=Da(this,e),i=n.size
n.set(e,t)
this.size+=n.size==i?0:1
return this}
function ki(e){var t=-1,n=null==e?0:e.length
this.__data__=new wi
for(;++t<n;)this.add(e[t])}ki.prototype.add=ki.prototype.push=function(e){this.__data__.set(e,l)
return this}
ki.prototype.has=function(e){return this.__data__.has(e)}
function xi(e){var t=this.__data__=new bi(e)
this.size=t.size}xi.prototype.clear=function(){this.__data__=new bi
this.size=0}
xi.prototype.delete=function(e){var t=this.__data__,n=t.delete(e)
this.size=t.size
return n}
xi.prototype.get=function(e){return this.__data__.get(e)}
xi.prototype.has=function(e){return this.__data__.has(e)}
xi.prototype.set=function(e,t){var n=this.__data__
if(n instanceof bi){var i=n.__data__
if(!Zn||i.length<o-1){i.push([e,t])
this.size=++n.size
return this}n=this.__data__=new wi(i)}n.set(e,t)
this.size=n.size
return this}
function Ei(e,t){var n=vu(e),i=!n&&mu(e),r=!n&&!i&&wu(e),a=!n&&!i&&!r&&Uu(e),o=n||i||r||a,u=o?mn(e.length,it):[],s=u.length
for(var l in e)!t&&!dt.call(e,l)||o&&("length"==l||r&&("offset"==l||"parent"==l)||a&&("buffer"==l||"byteLength"==l||"byteOffset"==l)||Ka(l,s))||u.push(l)
return u}function Ci(e){var t=e.length
return t?e[kr(0,t-1)]:a}function Si(e,t){return uo(ia(e),Ri(t,0,e.length))}function Mi(e){return uo(ia(e))}function Ai(e,t,n){(n===a||hu(e[t],n))&&(n!==a||t in e)||Ii(e,t,n)}function Ti(e,t,n){var i=e[t]
dt.call(e,t)&&hu(i,n)&&(n!==a||t in e)||Ii(e,t,n)}function ji(e,t){for(var n=e.length;n--;)if(hu(e[n][0],t))return n
return-1}function Oi(e,t,n,i){zi(e,function(e,r,a){t(i,e,n(e),a)})
return i}function Ni(e,t){return e&&ra(t,rs(t),e)}function Ii(e,t,n){"__proto__"==t&&hn?hn(e,t,{configurable:!0,enumerable:!0,value:n,writable:!0}):e[t]=n}function Fi(e,t){for(var n=-1,r=t.length,o=i(r),u=null==e;++n<r;)o[n]=u?a:Zu(e,t[n])
return o}function Ri(e,t,n){if(e==e){n!==a&&(e=e<=n?e:n)
t!==a&&(e=e>=t?e:t)}return e}function Ui(e,t,n,i,r,o){var u,s=t&f,l=t&h,d=t&_
n&&(u=r?n(e,i,r,o):n(e))
if(u!==a)return u
if(!Mu(e))return e
var c=vu(e)
if(c){u=function(e){var t=e.length,n=new e.constructor(t)
if(t&&"string"==typeof e[0]&&dt.call(e,"index")){n.index=e.index
n.input=e.input}return n}(e)
if(!s)return ia(e,u)}else{var p=Ba(e),m=p==$||p==G
if(wu(e))return Xr(e,s)
if(p==Z||p==H||m&&!r){u=l||m?{}:qa(e)
if(!s)return l?function(e,t){return ra(e,Ha(e),t)}(e,function(e,t){return e&&ra(t,as(t),e)}(u,e)):function(e,t){return ra(e,za(e),t)}(e,Ni(u,e))}else{if(!Mt[p])return r?e:{}
u=function(e,t,n){var i,r=e.constructor
switch(t){case se:return Qr(e)
case q:case V:return new r(+e)
case le:return function(e,t){var n=t?Qr(e.buffer):e.buffer
return new e.constructor(n,e.byteOffset,e.byteLength)}(e,n)
case de:case ce:case fe:case he:case _e:case pe:case me:case ve:case ge:return Zr(e,n)
case J:return new r
case X:case ie:return new r(e)
case te:return function(e){var t=new e.constructor(e.source,We.exec(e))
t.lastIndex=e.lastIndex
return t}(e)
case ne:return new r
case re:return i=e,fi?tt(fi.call(i)):{}}}(e,p,s)}}o||(o=new xi)
var v=o.get(e)
if(v)return v
o.set(e,u)
if(Iu(e)){e.forEach(function(i){u.add(Ui(i,t,n,i,e,o))})
return u}if(Tu(e)){e.forEach(function(i,r){u.set(r,Ui(i,t,n,r,e,o))})
return u}var g=c?a:(d?l?Na:Oa:l?as:rs)(e)
Yt(g||e,function(i,r){g&&(i=e[r=i])
Ti(u,r,Ui(i,t,n,r,e,o))})
return u}function Di(e,t,n){var i=n.length
if(null==e)return!i
e=tt(e)
for(;i--;){var r=n[i],o=t[r],u=e[r]
if(u===a&&!(r in e)||!o(u))return!1}return!0}function Pi(e,t,n){if("function"!=typeof e)throw new rt(s)
return io(function(){e.apply(a,n)},t)}function Li(e,t,n,i){var r=-1,a=Xt,u=!0,s=e.length,l=[],d=t.length
if(!s)return l
n&&(t=Zt(t,vn(n)))
if(i){a=Qt
u=!1}else if(t.length>=o){a=yn
u=!1
t=new ki(t)}e:for(;++r<s;){var c=e[r],f=null==n?c:n(c)
c=i||0!==c?c:0
if(u&&f==f){for(var h=d;h--;)if(t[h]===f)continue e
l.push(c)}else a(t,f,i)||l.push(c)}return l}var zi=ua($i),Hi=ua(Gi,!0)
function Bi(e,t){var n=!0
zi(e,function(e,i,r){return n=!!t(e,i,r)})
return n}function Wi(e,t,n){for(var i=-1,r=e.length;++i<r;){var o=e[i],u=t(o)
if(null!=u&&(s===a?u==u&&!Ru(u):n(u,s)))var s=u,l=o}return l}function qi(e,t){var n=[]
zi(e,function(e,i,r){t(e,i,r)&&n.push(e)})
return n}function Vi(e,t,n,i,r){var a=-1,o=e.length
n||(n=Va)
r||(r=[])
for(;++a<o;){var u=e[a]
t>0&&n(u)?t>1?Vi(u,t-1,n,i,r):en(r,u):i||(r[r.length]=u)}return r}var Ki=sa(),Yi=sa(!0)
function $i(e,t){return e&&Ki(e,t,rs)}function Gi(e,t){return e&&Yi(e,t,rs)}function Ji(e,t){return Jt(t,function(t){return Eu(e[t])})}function Xi(e,t){for(var n=0,i=(t=Yr(t,e)).length;null!=e&&n<i;)e=e[lo(t[n++])]
return n&&n==i?e:a}function Qi(e,t,n){var i=t(e)
return vu(e)?i:en(i,n(e))}function Zi(e){return null==e?e===a?ae:Q:an&&an in tt(e)?function(e){var t=dt.call(e,an),n=e[an]
try{e[an]=a
var i=!0}catch(e){}var r=ht.call(e)
i&&(t?e[an]=n:delete e[an])
return r}(e):function(e){return ht.call(e)}(e)}function er(e,t){return e>t}function tr(e,t){return null!=e&&dt.call(e,t)}function nr(e,t){return null!=e&&t in tt(e)}function ir(e,t,n){for(var r=n?Qt:Xt,o=e[0].length,u=e.length,s=u,l=i(u),d=1/0,c=[];s--;){var f=e[s]
s&&t&&(f=Zt(f,vn(t)))
d=Yn(f.length,d)
l[s]=!n&&(t||o>=120&&f.length>=120)?new ki(s&&f):a}f=e[0]
var h=-1,_=l[0]
e:for(;++h<o&&c.length<d;){var p=f[h],m=t?t(p):p
p=n||0!==p?p:0
if(!(_?yn(_,m):r(c,m,n))){s=u
for(;--s;){var v=l[s]
if(!(v?yn(v,m):r(e[s],m,n)))continue e}_&&_.push(m)
c.push(p)}}return c}function rr(e,t,n){var i=null==(e=to(e,t=Yr(t,e)))?e:e[lo(xo(t))]
return null==i?a:Vt(i,e,n)}function ar(e){return Au(e)&&Zi(e)==H}function or(e,t,n,i,r){return e===t||(null==e||null==t||!Au(e)&&!Au(t)?e!=e&&t!=t:function(e,t,n,i,r,o){var u=vu(e),s=vu(t),l=u?B:Ba(e),d=s?B:Ba(t),c=(l=l==H?Z:l)==Z,f=(d=d==H?Z:d)==Z,h=l==d
if(h&&wu(e)){if(!wu(t))return!1
u=!0
c=!1}if(h&&!c){o||(o=new xi)
return u||Uu(e)?Ta(e,t,n,i,r,o):function(e,t,n,i,r,a,o){switch(n){case le:if(e.byteLength!=t.byteLength||e.byteOffset!=t.byteOffset)return!1
e=e.buffer
t=t.buffer
case se:return!(e.byteLength!=t.byteLength||!a(new kt(e),new kt(t)))
case q:case V:case X:return hu(+e,+t)
case Y:return e.name==t.name&&e.message==t.message
case te:case ie:return e==t+""
case J:var u=Sn
case ne:var s=i&p
u||(u=jn)
if(e.size!=t.size&&!s)return!1
var l=o.get(e)
if(l)return l==t
i|=m
o.set(e,t)
var d=Ta(u(e),u(t),i,r,a,o)
o.delete(e)
return d
case re:if(fi)return fi.call(e)==fi.call(t)}return!1}(e,t,l,n,i,r,o)}if(!(n&p)){var _=c&&dt.call(e,"__wrapped__"),v=f&&dt.call(t,"__wrapped__")
if(_||v){var g=_?e.value():e,y=v?t.value():t
o||(o=new xi)
return r(g,y,n,i,o)}}if(!h)return!1
o||(o=new xi)
return function(e,t,n,i,r,o){var u=n&p,s=Oa(e),l=s.length,d=Oa(t).length
if(l!=d&&!u)return!1
for(var c=l;c--;){var f=s[c]
if(!(u?f in t:dt.call(t,f)))return!1}var h=o.get(e)
if(h&&o.get(t))return h==t
var _=!0
o.set(e,t)
o.set(t,e)
for(var m=u;++c<l;){f=s[c]
var v=e[f],g=t[f]
if(i)var y=u?i(g,v,f,t,e,o):i(v,g,f,e,t,o)
if(!(y===a?v===g||r(v,g,n,i,o):y)){_=!1
break}m||(m="constructor"==f)}if(_&&!m){var b=e.constructor,w=t.constructor
b!=w&&"constructor"in e&&"constructor"in t&&!("function"==typeof b&&b instanceof b&&"function"==typeof w&&w instanceof w)&&(_=!1)}o.delete(e)
o.delete(t)
return _}(e,t,n,i,r,o)}(e,t,n,i,or,r))}function ur(e,t,n,i){var r=n.length,o=r,u=!i
if(null==e)return!o
e=tt(e)
for(;r--;){var s=n[r]
if(u&&s[2]?s[1]!==e[s[0]]:!(s[0]in e))return!1}for(;++r<o;){var l=(s=n[r])[0],d=e[l],c=s[1]
if(u&&s[2]){if(d===a&&!(l in e))return!1}else{var f=new xi
if(i)var h=i(d,c,l,e,t,f)
if(!(h===a?or(c,d,p|m,i,f):h))return!1}}return!0}function sr(e){return!(!Mu(e)||ft&&ft in e)&&(Eu(e)?mt:Ke).test(co(e))}function lr(e){return"function"==typeof e?e:null==e?js:"object"==typeof e?vu(e)?pr(e[0],e[1]):_r(e):Ls(e)}function dr(e){if(!Xa(e))return Vn(e)
var t=[]
for(var n in tt(e))dt.call(e,n)&&"constructor"!=n&&t.push(n)
return t}function cr(e){if(!Mu(e))return function(e){var t=[]
if(null!=e)for(var n in tt(e))t.push(n)
return t}(e)
var t=Xa(e),n=[]
for(var i in e)("constructor"!=i||!t&&dt.call(e,i))&&n.push(i)
return n}function fr(e,t){return e<t}function hr(e,t){var n=-1,r=yu(e)?i(e.length):[]
zi(e,function(e,i,a){r[++n]=t(e,i,a)})
return r}function _r(e){var t=Pa(e)
return 1==t.length&&t[0][2]?Za(t[0][0],t[0][1]):function(n){return n===e||ur(n,e,t)}}function pr(e,t){return $a(e)&&Qa(t)?Za(lo(e),t):function(n){var i=Zu(n,e)
return i===a&&i===t?es(n,e):or(t,i,p|m)}}function mr(e,t,n,i,r){e!==t&&Ki(t,function(o,u){if(Mu(o)){r||(r=new xi)
!function(e,t,n,i,r,o,u){var s=Tn(e,n),l=Tn(t,n),d=u.get(l)
if(d)Ai(e,n,d)
else{var c=o?o(s,l,n+"",e,t,u):a,f=c===a
if(f){var h=vu(l),_=!h&&wu(l),p=!h&&!_&&Uu(l)
c=l
if(h||_||p)if(vu(s))c=s
else if(bu(s))c=ia(s)
else if(_){f=!1
c=Xr(l,!0)}else if(p){f=!1
c=Zr(l,!0)}else c=[]
else if(Ou(l)||mu(l)){c=s
mu(s)?c=qu(s):(!Mu(s)||i&&Eu(s))&&(c=qa(l))}else f=!1}if(f){u.set(l,c)
r(c,l,i,o,u)
u.delete(l)}Ai(e,n,c)}}(e,t,u,n,mr,i,r)}else{var s=i?i(Tn(e,u),o,u+"",e,t,r):a
s===a&&(s=o)
Ai(e,u,s)}},as)}function vr(e,t){var n=e.length
if(n)return Ka(t+=t<0?n:0,n)?e[t]:a}function gr(e,t,n){var i=-1
t=Zt(t.length?t:[js],vn(Ua()))
return function(e,t){var n=e.length
e.sort(t)
for(;n--;)e[n]=e[n].value
return e}(hr(e,function(e,n,r){return{criteria:Zt(t,function(t){return t(e)}),index:++i,value:e}}),function(e,t){return function(e,t,n){for(var i=-1,r=e.criteria,a=t.criteria,o=r.length,u=n.length;++i<o;){var s=ea(r[i],a[i])
if(s){if(i>=u)return s
var l=n[i]
return s*("desc"==l?-1:1)}}return e.index-t.index}(e,t,n)})}function yr(e,t,n){for(var i=-1,r=t.length,a={};++i<r;){var o=t[i],u=Xi(e,o)
n(u,o)&&Mr(a,Yr(o,e),u)}return a}function br(e,t,n,i){var r=i?ln:sn,a=-1,o=t.length,u=e
e===t&&(t=ia(t))
n&&(u=Zt(e,vn(n)))
for(;++a<o;)for(var s=0,l=t[a],d=n?n(l):l;(s=r(u,d,s,i))>-1;){u!==e&&Rt.call(u,s,1)
Rt.call(e,s,1)}return e}function wr(e,t){for(var n=e?t.length:0,i=n-1;n--;){var r=t[n]
if(n==i||r!==a){var a=r
Ka(r)?Rt.call(e,r,1):Lr(e,r)}}return e}function kr(e,t){return e+zn(Jn()*(t-e+1))}function xr(e,t){var n=""
if(!e||t<1||t>F)return n
do{t%2&&(n+=e);(t=zn(t/2))&&(e+=e)}while(t)
return n}function Er(e,t){return ro(eo(e,t,js),e+"")}function Cr(e){return Ci(hs(e))}function Sr(e,t){var n=hs(e)
return uo(n,Ri(t,0,n.length))}function Mr(e,t,n,i){if(!Mu(e))return e
for(var r=-1,o=(t=Yr(t,e)).length,u=o-1,s=e;null!=s&&++r<o;){var l=lo(t[r]),d=n
if(r!=u){var c=s[l];(d=i?i(c,l,s):a)===a&&(d=Mu(c)?c:Ka(t[r+1])?[]:{})}Ti(s,l,d)
s=s[l]}return e}var Ar=ri?function(e,t){ri.set(e,t)
return e}:js,Tr=hn?function(e,t){return hn(e,"toString",{configurable:!0,enumerable:!1,value:Ms(t),writable:!0})}:js
function jr(e){return uo(hs(e))}function Or(e,t,n){var r=-1,a=e.length
t<0&&(t=-t>a?0:a+t);(n=n>a?a:n)<0&&(n+=a)
a=t>n?0:n-t>>>0
t>>>=0
for(var o=i(a);++r<a;)o[r]=e[r+t]
return o}function Nr(e,t){var n
zi(e,function(e,i,r){return!(n=t(e,i,r))})
return!!n}function Ir(e,t,n){var i=0,r=null==e?i:e.length
if("number"==typeof t&&t==t&&r<=L){for(;i<r;){var a=i+r>>>1,o=e[a]
null!==o&&!Ru(o)&&(n?o<=t:o<t)?i=a+1:r=a}return r}return Fr(e,t,js,n)}function Fr(e,t,n,i){t=n(t)
for(var r=0,o=null==e?0:e.length,u=t!=t,s=null===t,l=Ru(t),d=t===a;r<o;){var c=zn((r+o)/2),f=n(e[c]),h=f!==a,_=null===f,p=f==f,m=Ru(f)
if(u)var v=i||p
else v=d?p&&(i||h):s?p&&h&&(i||!_):l?p&&h&&!_&&(i||!m):!_&&!m&&(i?f<=t:f<t)
v?r=c+1:o=c}return Yn(o,P)}function Rr(e,t){for(var n=-1,i=e.length,r=0,a=[];++n<i;){var o=e[n],u=t?t(o):o
if(!n||!hu(u,s)){var s=u
a[r++]=0===o?0:o}}return a}function Ur(e){return"number"==typeof e?e:Ru(e)?U:+e}function Dr(e){if("string"==typeof e)return e
if(vu(e))return Zt(e,Dr)+""
if(Ru(e))return hi?hi.call(e):""
var t=e+""
return"0"==t&&1/e==-I?"-0":t}function Pr(e,t,n){var i=-1,r=Xt,a=e.length,u=!0,s=[],l=s
if(n){u=!1
r=Qt}else if(a>=o){var d=t?null:xa(e)
if(d)return jn(d)
u=!1
r=yn
l=new ki}else l=t?[]:s
e:for(;++i<a;){var c=e[i],f=t?t(c):c
c=n||0!==c?c:0
if(u&&f==f){for(var h=l.length;h--;)if(l[h]===f)continue e
t&&l.push(f)
s.push(c)}else if(!r(l,f,n)){l!==s&&l.push(f)
s.push(c)}}return s}function Lr(e,t){return null==(e=to(e,t=Yr(t,e)))||delete e[lo(xo(t))]}function zr(e,t,n,i){return Mr(e,t,n(Xi(e,t)),i)}function Hr(e,t,n,i){for(var r=e.length,a=i?r:-1;(i?a--:++a<r)&&t(e[a],a,e););return n?Or(e,i?0:a,i?a+1:r):Or(e,i?a+1:0,i?r:a)}function Br(e,t){var n=e
n instanceof gi&&(n=n.value())
return tn(t,function(e,t){return t.func.apply(t.thisArg,en([e],t.args))},n)}function Wr(e,t,n){var r=e.length
if(r<2)return r?Pr(e[0]):[]
for(var a=-1,o=i(r);++a<r;)for(var u=e[a],s=-1;++s<r;)s!=a&&(o[a]=Li(o[a]||u,e[s],t,n))
return Pr(Vi(o,1),t,n)}function qr(e,t,n){for(var i=-1,r=e.length,o=t.length,u={};++i<r;){var s=i<o?t[i]:a
n(u,e[i],s)}return u}function Vr(e){return bu(e)?e:[]}function Kr(e){return"function"==typeof e?e:js}function Yr(e,t){return vu(e)?e:$a(e,t)?[e]:so(Vu(e))}var $r=Er
function Gr(e,t,n){var i=e.length
n=n===a?i:n
return!t&&n>=i?e:Or(e,t,n)}var Jr=Un||function(e){return It.clearTimeout(e)}
function Xr(e,t){if(t)return e.slice()
var n=e.length,i=At?At(n):new e.constructor(n)
e.copy(i)
return i}function Qr(e){var t=new e.constructor(e.byteLength)
new kt(t).set(new kt(e))
return t}function Zr(e,t){var n=t?Qr(e.buffer):e.buffer
return new e.constructor(n,e.byteOffset,e.length)}function ea(e,t){if(e!==t){var n=e!==a,i=null===e,r=e==e,o=Ru(e),u=t!==a,s=null===t,l=t==t,d=Ru(t)
if(!s&&!d&&!o&&e>t||o&&u&&l&&!s&&!d||i&&u&&l||!n&&l||!r)return 1
if(!i&&!o&&!d&&e<t||d&&n&&r&&!i&&!o||s&&n&&r||!u&&r||!l)return-1}return 0}function ta(e,t,n,r){for(var a=-1,o=e.length,u=n.length,s=-1,l=t.length,d=Kn(o-u,0),c=i(l+d),f=!r;++s<l;)c[s]=t[s]
for(;++a<u;)(f||a<o)&&(c[n[a]]=e[a])
for(;d--;)c[s++]=e[a++]
return c}function na(e,t,n,r){for(var a=-1,o=e.length,u=-1,s=n.length,l=-1,d=t.length,c=Kn(o-s,0),f=i(c+d),h=!r;++a<c;)f[a]=e[a]
for(var _=a;++l<d;)f[_+l]=t[l]
for(;++u<s;)(h||a<o)&&(f[_+n[u]]=e[a++])
return f}function ia(e,t){var n=-1,r=e.length
t||(t=i(r))
for(;++n<r;)t[n]=e[n]
return t}function ra(e,t,n,i){var r=!n
n||(n={})
for(var o=-1,u=t.length;++o<u;){var s=t[o],l=i?i(n[s],e[s],s,n,e):a
l===a&&(l=e[s])
r?Ii(n,s,l):Ti(n,s,l)}return n}function aa(e,t){return function(n,i){var r=vu(n)?Kt:Oi,a=t?t():{}
return r(n,e,Ua(i,2),a)}}function oa(e){return Er(function(t,n){var i=-1,r=n.length,o=r>1?n[r-1]:a,u=r>2?n[2]:a
o=e.length>3&&"function"==typeof o?(r--,o):a
if(u&&Ya(n[0],n[1],u)){o=r<3?a:o
r=1}t=tt(t)
for(;++i<r;){var s=n[i]
s&&e(t,s,i,o)}return t})}function ua(e,t){return function(n,i){if(null==n)return n
if(!yu(n))return e(n,i)
for(var r=n.length,a=t?r:-1,o=tt(n);(t?a--:++a<r)&&!1!==i(o[a],a,o););return n}}function sa(e){return function(t,n,i){for(var r=-1,a=tt(t),o=i(t),u=o.length;u--;){var s=o[e?u:++r]
if(!1===n(a[s],s,a))break}return t}}function la(e){return function(t){var n=Cn(t=Vu(t))?In(t):a,i=n?n[0]:t.charAt(0),r=n?Gr(n,1).join(""):t.slice(1)
return i[e]()+r}}function da(e){return function(t){return tn(Es(ms(t).replace(gt,"")),e,"")}}function ca(e){return function(){var t=arguments
switch(t.length){case 0:return new e
case 1:return new e(t[0])
case 2:return new e(t[0],t[1])
case 3:return new e(t[0],t[1],t[2])
case 4:return new e(t[0],t[1],t[2],t[3])
case 5:return new e(t[0],t[1],t[2],t[3],t[4])
case 6:return new e(t[0],t[1],t[2],t[3],t[4],t[5])
case 7:return new e(t[0],t[1],t[2],t[3],t[4],t[5],t[6])}var n=pi(e.prototype),i=e.apply(n,t)
return Mu(i)?i:n}}function fa(e){return function(t,n,i){var r=tt(t)
if(!yu(t)){var o=Ua(n,3)
t=rs(t)
n=function(e){return o(r[e],e,r)}}var u=e(t,n,i)
return u>-1?r[o?t[u]:u]:a}}function ha(e){return ja(function(t){var n=t.length,i=n,r=vi.prototype.thru
e&&t.reverse()
for(;i--;){var o=t[i]
if("function"!=typeof o)throw new rt(s)
if(r&&!u&&"wrapper"==Fa(o))var u=new vi([],!0)}i=u?i:n
for(;++i<n;){var l=Fa(o=t[i]),d="wrapper"==l?Ia(o):a
u=d&&Ga(d[0])&&d[1]==(E|b|k|C)&&!d[4].length&&1==d[9]?u[Fa(d[0])].apply(u,d[3]):1==o.length&&Ga(o)?u[l]():u.thru(o)}return function(){var e=arguments,i=e[0]
if(u&&1==e.length&&vu(i))return u.plant(i).value()
for(var r=0,a=n?t[r].apply(this,e):i;++r<n;)a=t[r].call(this,a)
return a}})}function _a(e,t,n,r,o,u,s,l,d,c){var f=t&E,h=t&v,_=t&g,p=t&(b|w),m=t&S,y=_?a:ca(e)
return function v(){for(var g=arguments.length,b=i(g),w=g;w--;)b[w]=arguments[w]
if(p)var k=Ra(v),x=function(e,t){for(var n=e.length,i=0;n--;)e[n]===t&&++i
return i}(b,k)
r&&(b=ta(b,r,o,p))
u&&(b=na(b,u,s,p))
g-=x
if(p&&g<c){var E=An(b,k)
return wa(e,t,_a,v.placeholder,n,b,E,l,d,c-g)}var C=h?n:this,S=_?C[e]:e
g=b.length
l?b=function(e,t){for(var n=e.length,i=Yn(t.length,n),r=ia(e);i--;){var o=t[i]
e[i]=Ka(o,n)?r[o]:a}return e}(b,l):m&&g>1&&b.reverse()
f&&d<g&&(b.length=d)
this&&this!==It&&this instanceof v&&(S=y||ca(S))
return S.apply(C,b)}}function pa(e,t){return function(n,i){return function(e,t,n,i){$i(e,function(e,r,a){t(i,n(e),r,a)})
return i}(n,e,t(i),{})}}function ma(e,t){return function(n,i){var r
if(n===a&&i===a)return t
n!==a&&(r=n)
if(i!==a){if(r===a)return i
if("string"==typeof n||"string"==typeof i){n=Dr(n)
i=Dr(i)}else{n=Ur(n)
i=Ur(i)}r=e(n,i)}return r}}function va(e){return ja(function(t){t=Zt(t,vn(Ua()))
return Er(function(n){var i=this
return e(t,function(e){return Vt(e,i,n)})})})}function ga(e,t){var n=(t=t===a?" ":Dr(t)).length
if(n<2)return n?xr(t,e):t
var i=xr(t,Ln(e/Nn(t)))
return Cn(t)?Gr(In(i),0,e).join(""):i.slice(0,e)}function ya(e){return function(t,n,r){r&&"number"!=typeof r&&Ya(t,n,r)&&(n=r=a)
t=zu(t)
if(n===a){n=t
t=0}else n=zu(n)
return function(e,t,n,r){for(var a=-1,o=Kn(Ln((t-e)/(n||1)),0),u=i(o);o--;){u[r?o:++a]=e
e+=n}return u}(t,n,r=r===a?t<n?1:-1:zu(r),e)}}function ba(e){return function(t,n){if("string"!=typeof t||"string"!=typeof n){t=Wu(t)
n=Wu(n)}return e(t,n)}}function wa(e,t,n,i,r,o,u,s,l,d){var c=t&b
t|=c?k:x;(t&=~(c?x:k))&y||(t&=~(v|g))
var f=[e,t,r,c?o:a,c?u:a,c?a:o,c?a:u,s,l,d],h=n.apply(a,f)
Ga(e)&&no(h,f)
h.placeholder=i
return ao(h,e,t)}function ka(e){var t=et[e]
return function(e,n){e=Wu(e)
if(n=null==n?0:Yn(Hu(n),292)){var i=(Vu(e)+"e").split("e")
return+((i=(Vu(t(i[0]+"e"+(+i[1]+n)))+"e").split("e"))[0]+"e"+(+i[1]-n))}return t(e)}}var xa=ti&&1/jn(new ti([,-0]))[1]==I?function(e){return new ti(e)}:Rs
function Ea(e){return function(t){var n=Ba(t)
return n==J?Sn(t):n==ne?On(t):function(e,t){return Zt(t,function(t){return[t,e[t]]})}(t,e(t))}}function Ca(e,t,n,r,o,u,l,d){var f=t&g
if(!f&&"function"!=typeof e)throw new rt(s)
var h=r?r.length:0
if(!h){t&=~(k|x)
r=o=a}l=l===a?l:Kn(Hu(l),0)
d=d===a?d:Hu(d)
h-=o?o.length:0
if(t&x){var _=r,p=o
r=o=a}var m=f?a:Ia(e),S=[e,t,n,r,o,_,p,u,l,d]
m&&function(e,t){var n=e[1],i=t[1],r=n|i,a=r<(v|g|E),o=i==E&&n==b||i==E&&n==C&&e[7].length<=t[8]||i==(E|C)&&t[7].length<=t[8]&&n==b
if(!a&&!o)return e
if(i&v){e[2]=t[2]
r|=n&v?0:y}var u=t[3]
if(u){var s=e[3]
e[3]=s?ta(s,u,t[4]):u
e[4]=s?An(e[3],c):t[4]}if(u=t[5]){s=e[5]
e[5]=s?na(s,u,t[6]):u
e[6]=s?An(e[5],c):t[6]}(u=t[7])&&(e[7]=u)
i&E&&(e[8]=null==e[8]?t[8]:Yn(e[8],t[8]))
null==e[9]&&(e[9]=t[9])
e[0]=t[0]
e[1]=r}(S,m)
e=S[0]
t=S[1]
n=S[2]
r=S[3]
o=S[4]
!(d=S[9]=S[9]===a?f?0:e.length:Kn(S[9]-h,0))&&t&(b|w)&&(t&=~(b|w))
if(t&&t!=v)M=t==b||t==w?function(e,t,n){var r=ca(e)
return function o(){for(var u=arguments.length,s=i(u),l=u,d=Ra(o);l--;)s[l]=arguments[l]
var c=u<3&&s[0]!==d&&s[u-1]!==d?[]:An(s,d)
return(u-=c.length)<n?wa(e,t,_a,o.placeholder,a,s,c,a,a,n-u):Vt(this&&this!==It&&this instanceof o?r:e,this,s)}}(e,t,d):t!=k&&t!=(v|k)||o.length?_a.apply(a,S):function(e,t,n,r){var a=t&v,o=ca(e)
return function t(){for(var u=-1,s=arguments.length,l=-1,d=r.length,c=i(d+s),f=this&&this!==It&&this instanceof t?o:e;++l<d;)c[l]=r[l]
for(;s--;)c[l++]=arguments[++u]
return Vt(f,a?n:this,c)}}(e,t,n,r)
else var M=function(e,t,n){var i=t&v,r=ca(e)
return function t(){return(this&&this!==It&&this instanceof t?r:e).apply(i?n:this,arguments)}}(e,t,n)
return ao((m?Ar:no)(M,S),e,t)}function Sa(e,t,n,i){return e===a||hu(e,ut[n])&&!dt.call(i,n)?t:e}function Ma(e,t,n,i,r,o){if(Mu(e)&&Mu(t)){o.set(t,e)
mr(e,t,a,Ma,o)
o.delete(t)}return e}function Aa(e){return Ou(e)?a:e}function Ta(e,t,n,i,r,o){var u=n&p,s=e.length,l=t.length
if(s!=l&&!(u&&l>s))return!1
var d=o.get(e)
if(d&&o.get(t))return d==t
var c=-1,f=!0,h=n&m?new ki:a
o.set(e,t)
o.set(t,e)
for(;++c<s;){var _=e[c],v=t[c]
if(i)var g=u?i(v,_,c,t,e,o):i(_,v,c,e,t,o)
if(g!==a){if(g)continue
f=!1
break}if(h){if(!rn(t,function(e,t){if(!yn(h,t)&&(_===e||r(_,e,n,i,o)))return h.push(t)})){f=!1
break}}else if(_!==v&&!r(_,v,n,i,o)){f=!1
break}}o.delete(e)
o.delete(t)
return f}function ja(e){return ro(eo(e,a,go),e+"")}function Oa(e){return Qi(e,rs,za)}function Na(e){return Qi(e,as,Ha)}var Ia=ri?function(e){return ri.get(e)}:Rs
function Fa(e){for(var t=e.name+"",n=ai[t],i=dt.call(ai,t)?n.length:0;i--;){var r=n[i],a=r.func
if(null==a||a==e)return r.name}return t}function Ra(e){return(dt.call(_i,"placeholder")?_i:e).placeholder}function Ua(){var e=_i.iteratee||Os
e=e===Os?lr:e
return arguments.length?e(arguments[0],arguments[1]):e}function Da(e,t){var n,i,r=e.__data__
return("string"==(i=typeof(n=t))||"number"==i||"symbol"==i||"boolean"==i?"__proto__"!==n:null===n)?r["string"==typeof t?"string":"hash"]:r.map}function Pa(e){for(var t=rs(e),n=t.length;n--;){var i=t[n],r=e[i]
t[n]=[i,r,Qa(r)]}return t}function La(e,t){var n=function(e,t){return null==e?a:e[t]}(e,t)
return sr(n)?n:a}var za=Hn?function(e){if(null==e)return[]
e=tt(e)
return Jt(Hn(e),function(t){return Ft.call(e,t)})}:Bs,Ha=Hn?function(e){for(var t=[];e;){en(t,za(e))
e=Ot(e)}return t}:Bs,Ba=Zi;(Qn&&Ba(new Qn(new ArrayBuffer(1)))!=le||Zn&&Ba(new Zn)!=J||ei&&"[object Promise]"!=Ba(ei.resolve())||ti&&Ba(new ti)!=ne||ni&&Ba(new ni)!=oe)&&(Ba=function(e){var t=Zi(e),n=t==Z?e.constructor:a,i=n?co(n):""
if(i)switch(i){case oi:return le
case ui:return J
case si:return"[object Promise]"
case li:return ne
case di:return oe}return t})
function Wa(e,t,n){for(var i=-1,r=(t=Yr(t,e)).length,a=!1;++i<r;){var o=lo(t[i])
if(!(a=null!=e&&n(e,o)))break
e=e[o]}return a||++i!=r?a:!!(r=null==e?0:e.length)&&Su(r)&&Ka(o,r)&&(vu(e)||mu(e))}function qa(e){return"function"!=typeof e.constructor||Xa(e)?{}:pi(Ot(e))}function Va(e){return vu(e)||mu(e)||!!(Dt&&e&&e[Dt])}function Ka(e,t){var n=typeof e
return!!(t=null==t?F:t)&&("number"==n||"symbol"!=n&&$e.test(e))&&e>-1&&e%1==0&&e<t}function Ya(e,t,n){if(!Mu(n))return!1
var i=typeof t
return!!("number"==i?yu(n)&&Ka(t,n.length):"string"==i&&t in n)&&hu(n[t],e)}function $a(e,t){if(vu(e))return!1
var n=typeof e
return!("number"!=n&&"symbol"!=n&&"boolean"!=n&&null!=e&&!Ru(e))||je.test(e)||!Te.test(e)||null!=t&&e in tt(t)}function Ga(e){var t=Fa(e),n=_i[t]
if("function"!=typeof n||!(t in gi.prototype))return!1
if(e===n)return!0
var i=Ia(n)
return!!i&&e===i[0]}var Ja=st?Eu:Ws
function Xa(e){var t=e&&e.constructor
return e===("function"==typeof t&&t.prototype||ut)}function Qa(e){return e==e&&!Mu(e)}function Za(e,t){return function(n){return null!=n&&n[e]===t&&(t!==a||e in tt(n))}}function eo(e,t,n){t=Kn(t===a?e.length-1:t,0)
return function(){for(var r=arguments,a=-1,o=Kn(r.length-t,0),u=i(o);++a<o;)u[a]=r[t+a]
a=-1
for(var s=i(t+1);++a<t;)s[a]=r[a]
s[t]=n(u)
return Vt(e,this,s)}}function to(e,t){return t.length<2?e:Xi(e,Or(t,0,-1))}var no=oo(Ar),io=Pn||function(e,t){return It.setTimeout(e,t)},ro=oo(Tr)
function ao(e,t,n){var i=t+""
return ro(e,function(e,t){var n=t.length
if(!n)return e
var i=n-1
t[i]=(n>1?"& ":"")+t[i]
t=t.join(n>2?", ":" ")
return e.replace(De,"{\n/* [wrapped with "+t+"] */\n")}(i,function(e,t){Yt(z,function(n){var i="_."+n[0]
t&n[1]&&!Xt(e,i)&&e.push(i)})
return e.sort()}(function(e){var t=e.match(Pe)
return t?t[1].split(Le):[]}(i),n)))}function oo(e){var t=0,n=0
return function(){var i=$n(),r=j-(i-n)
n=i
if(r>0){if(++t>=T)return arguments[0]}else t=0
return e.apply(a,arguments)}}function uo(e,t){var n=-1,i=e.length,r=i-1
t=t===a?i:t
for(;++n<t;){var o=kr(n,r),u=e[o]
e[o]=e[n]
e[n]=u}e.length=t
return e}var so=function(e){var t=uu(e,function(e){n.size===d&&n.clear()
return e}),n=t.cache
return t}(function(e){var t=[]
46===e.charCodeAt(0)&&t.push("")
e.replace(Oe,function(e,n,i,r){t.push(i?r.replace(He,"$1"):n||e)})
return t})
function lo(e){if("string"==typeof e||Ru(e))return e
var t=e+""
return"0"==t&&1/e==-I?"-0":t}function co(e){if(null!=e){try{return lt.call(e)}catch(e){}try{return e+""}catch(e){}}return""}function fo(e){if(e instanceof gi)return e.clone()
var t=new vi(e.__wrapped__,e.__chain__)
t.__actions__=ia(e.__actions__)
t.__index__=e.__index__
t.__values__=e.__values__
return t}var ho=Er(function(e,t){return bu(e)?Li(e,Vi(t,1,bu,!0)):[]}),_o=Er(function(e,t){var n=xo(t)
bu(n)&&(n=a)
return bu(e)?Li(e,Vi(t,1,bu,!0),Ua(n,2)):[]}),po=Er(function(e,t){var n=xo(t)
bu(n)&&(n=a)
return bu(e)?Li(e,Vi(t,1,bu,!0),a,n):[]})
function mo(e,t,n){var i=null==e?0:e.length
if(!i)return-1
var r=null==n?0:Hu(n)
r<0&&(r=Kn(i+r,0))
return un(e,Ua(t,3),r)}function vo(e,t,n){var i=null==e?0:e.length
if(!i)return-1
var r=i-1
if(n!==a){r=Hu(n)
r=n<0?Kn(i+r,0):Yn(r,i-1)}return un(e,Ua(t,3),r,!0)}function go(e){return null!=e&&e.length?Vi(e,1):[]}function yo(e){return e&&e.length?e[0]:a}var bo=Er(function(e){var t=Zt(e,Vr)
return t.length&&t[0]===e[0]?ir(t):[]}),wo=Er(function(e){var t=xo(e),n=Zt(e,Vr)
t===xo(n)?t=a:n.pop()
return n.length&&n[0]===e[0]?ir(n,Ua(t,2)):[]}),ko=Er(function(e){var t=xo(e),n=Zt(e,Vr);(t="function"==typeof t?t:a)&&n.pop()
return n.length&&n[0]===e[0]?ir(n,a,t):[]})
function xo(e){var t=null==e?0:e.length
return t?e[t-1]:a}var Eo=Er(Co)
function Co(e,t){return e&&e.length&&t&&t.length?br(e,t):e}var So=ja(function(e,t){var n=null==e?0:e.length,i=Fi(e,t)
wr(e,Zt(t,function(e){return Ka(e,n)?+e:e}).sort(ea))
return i})
function Mo(e){return null==e?e:Xn.call(e)}var Ao=Er(function(e){return Pr(Vi(e,1,bu,!0))}),To=Er(function(e){var t=xo(e)
bu(t)&&(t=a)
return Pr(Vi(e,1,bu,!0),Ua(t,2))}),jo=Er(function(e){var t=xo(e)
t="function"==typeof t?t:a
return Pr(Vi(e,1,bu,!0),a,t)})
function Oo(e){if(!e||!e.length)return[]
var t=0
e=Jt(e,function(e){if(bu(e)){t=Kn(e.length,t)
return!0}})
return mn(t,function(t){return Zt(e,fn(t))})}function No(e,t){if(!e||!e.length)return[]
var n=Oo(e)
return null==t?n:Zt(n,function(e){return Vt(t,a,e)})}var Io=Er(function(e,t){return bu(e)?Li(e,t):[]}),Fo=Er(function(e){return Wr(Jt(e,bu))}),Ro=Er(function(e){var t=xo(e)
bu(t)&&(t=a)
return Wr(Jt(e,bu),Ua(t,2))}),Uo=Er(function(e){var t=xo(e)
t="function"==typeof t?t:a
return Wr(Jt(e,bu),a,t)}),Do=Er(Oo)
var Po=Er(function(e){var t=e.length,n=t>1?e[t-1]:a
return No(e,n="function"==typeof n?(e.pop(),n):a)})
function Lo(e){var t=_i(e)
t.__chain__=!0
return t}function zo(e,t){return t(e)}var Ho=ja(function(e){var t=e.length,n=t?e[0]:0,i=this.__wrapped__,r=function(t){return Fi(t,e)}
if(t>1||this.__actions__.length||!(i instanceof gi)||!Ka(n))return this.thru(r);(i=i.slice(n,+n+(t?1:0))).__actions__.push({func:zo,args:[r],thisArg:a})
return new vi(i,this.__chain__).thru(function(e){t&&!e.length&&e.push(a)
return e})})
var Bo=aa(function(e,t,n){dt.call(e,n)?++e[n]:Ii(e,n,1)})
var Wo=fa(mo),qo=fa(vo)
function Vo(e,t){return(vu(e)?Yt:zi)(e,Ua(t,3))}function Ko(e,t){return(vu(e)?$t:Hi)(e,Ua(t,3))}var Yo=aa(function(e,t,n){dt.call(e,n)?e[n].push(t):Ii(e,n,[t])})
var $o=Er(function(e,t,n){var r=-1,a="function"==typeof t,o=yu(e)?i(e.length):[]
zi(e,function(e){o[++r]=a?Vt(t,e,n):rr(e,t,n)})
return o}),Go=aa(function(e,t,n){Ii(e,n,t)})
function Jo(e,t){return(vu(e)?Zt:hr)(e,Ua(t,3))}var Xo=aa(function(e,t,n){e[n?0:1].push(t)},function(){return[[],[]]})
var Qo=Er(function(e,t){if(null==e)return[]
var n=t.length
n>1&&Ya(e,t[0],t[1])?t=[]:n>2&&Ya(t[0],t[1],t[2])&&(t=[t[0]])
return gr(e,Vi(t,1),[])}),Zo=Dn||function(){return It.Date.now()}
function eu(e,t,n){t=n?a:t
t=e&&null==t?e.length:t
return Ca(e,E,a,a,a,a,t)}function tu(e,t){var n
if("function"!=typeof t)throw new rt(s)
e=Hu(e)
return function(){--e>0&&(n=t.apply(this,arguments))
e<=1&&(t=a)
return n}}var nu=Er(function(e,t,n){var i=v
if(n.length){var r=An(n,Ra(nu))
i|=k}return Ca(e,i,t,n,r)}),iu=Er(function(e,t,n){var i=v|g
if(n.length){var r=An(n,Ra(iu))
i|=k}return Ca(t,i,e,n,r)})
function ru(e,t,n){var i,r,o,u,l,d,c=0,f=!1,h=!1,_=!0
if("function"!=typeof e)throw new rt(s)
t=Wu(t)||0
if(Mu(n)){f=!!n.leading
o=(h="maxWait"in n)?Kn(Wu(n.maxWait)||0,t):o
_="trailing"in n?!!n.trailing:_}function p(t){var n=i,o=r
i=r=a
c=t
return u=e.apply(o,n)}function m(e){var n=e-d
return d===a||n>=t||n<0||h&&e-c>=o}function v(){var e=Zo()
if(m(e))return g(e)
l=io(v,function(e){var n=t-(e-d)
return h?Yn(n,o-(e-c)):n}(e))}function g(e){l=a
if(_&&i)return p(e)
i=r=a
return u}function y(){var e=Zo(),n=m(e)
i=arguments
r=this
d=e
if(n){if(l===a)return function(e){c=e
l=io(v,t)
return f?p(e):u}(d)
if(h){l=io(v,t)
return p(d)}}l===a&&(l=io(v,t))
return u}y.cancel=function(){l!==a&&Jr(l)
c=0
i=d=r=l=a}
y.flush=function(){return l===a?u:g(Zo())}
return y}var au=Er(function(e,t){return Pi(e,1,t)}),ou=Er(function(e,t,n){return Pi(e,Wu(t)||0,n)})
function uu(e,t){if("function"!=typeof e||null!=t&&"function"!=typeof t)throw new rt(s)
var n=function(){var i=arguments,r=t?t.apply(this,i):i[0],a=n.cache
if(a.has(r))return a.get(r)
var o=e.apply(this,i)
n.cache=a.set(r,o)||a
return o}
n.cache=new(uu.Cache||wi)
return n}uu.Cache=wi
function su(e){if("function"!=typeof e)throw new rt(s)
return function(){var t=arguments
switch(t.length){case 0:return!e.call(this)
case 1:return!e.call(this,t[0])
case 2:return!e.call(this,t[0],t[1])
case 3:return!e.call(this,t[0],t[1],t[2])}return!e.apply(this,t)}}var lu=$r(function(e,t){var n=(t=1==t.length&&vu(t[0])?Zt(t[0],vn(Ua())):Zt(Vi(t,1),vn(Ua()))).length
return Er(function(i){for(var r=-1,a=Yn(i.length,n);++r<a;)i[r]=t[r].call(this,i[r])
return Vt(e,this,i)})}),du=Er(function(e,t){var n=An(t,Ra(du))
return Ca(e,k,a,t,n)}),cu=Er(function(e,t){var n=An(t,Ra(cu))
return Ca(e,x,a,t,n)}),fu=ja(function(e,t){return Ca(e,C,a,a,a,t)})
function hu(e,t){return e===t||e!=e&&t!=t}var _u=ba(er),pu=ba(function(e,t){return e>=t}),mu=ar(function(){return arguments}())?ar:function(e){return Au(e)&&dt.call(e,"callee")&&!Ft.call(e,"callee")},vu=i.isArray,gu=Lt?vn(Lt):function(e){return Au(e)&&Zi(e)==se}
function yu(e){return null!=e&&Su(e.length)&&!Eu(e)}function bu(e){return Au(e)&&yu(e)}var wu=Bn||Ws,ku=zt?vn(zt):function(e){return Au(e)&&Zi(e)==V}
function xu(e){if(!Au(e))return!1
var t=Zi(e)
return t==Y||t==K||"string"==typeof e.message&&"string"==typeof e.name&&!Ou(e)}function Eu(e){if(!Mu(e))return!1
var t=Zi(e)
return t==$||t==G||t==W||t==ee}function Cu(e){return"number"==typeof e&&e==Hu(e)}function Su(e){return"number"==typeof e&&e>-1&&e%1==0&&e<=F}function Mu(e){var t=typeof e
return null!=e&&("object"==t||"function"==t)}function Au(e){return null!=e&&"object"==typeof e}var Tu=Ht?vn(Ht):function(e){return Au(e)&&Ba(e)==J}
function ju(e){return"number"==typeof e||Au(e)&&Zi(e)==X}function Ou(e){if(!Au(e)||Zi(e)!=Z)return!1
var t=Ot(e)
if(null===t)return!0
var n=dt.call(t,"constructor")&&t.constructor
return"function"==typeof n&&n instanceof n&&lt.call(n)==_t}var Nu=Bt?vn(Bt):function(e){return Au(e)&&Zi(e)==te}
var Iu=Wt?vn(Wt):function(e){return Au(e)&&Ba(e)==ne}
function Fu(e){return"string"==typeof e||!vu(e)&&Au(e)&&Zi(e)==ie}function Ru(e){return"symbol"==typeof e||Au(e)&&Zi(e)==re}var Uu=qt?vn(qt):function(e){return Au(e)&&Su(e.length)&&!!St[Zi(e)]}
var Du=ba(fr),Pu=ba(function(e,t){return e<=t})
function Lu(e){if(!e)return[]
if(yu(e))return Fu(e)?In(e):ia(e)
if(Pt&&e[Pt])return function(e){for(var t,n=[];!(t=e.next()).done;)n.push(t.value)
return n}(e[Pt]())
var t=Ba(e)
return(t==J?Sn:t==ne?jn:hs)(e)}function zu(e){return e?(e=Wu(e))===I||e===-I?(e<0?-1:1)*R:e==e?e:0:0===e?e:0}function Hu(e){var t=zu(e),n=t%1
return t==t?n?t-n:t:0}function Bu(e){return e?Ri(Hu(e),0,D):0}function Wu(e){if("number"==typeof e)return e
if(Ru(e))return U
if(Mu(e)){var t="function"==typeof e.valueOf?e.valueOf():e
e=Mu(t)?t+"":t}if("string"!=typeof e)return 0===e?e:+e
e=e.replace(Fe,"")
var n=Ve.test(e)
return n||Ye.test(e)?jt(e.slice(2),n?2:8):qe.test(e)?U:+e}function qu(e){return ra(e,as(e))}function Vu(e){return null==e?"":Dr(e)}var Ku=oa(function(e,t){if(Xa(t)||yu(t))ra(t,rs(t),e)
else for(var n in t)dt.call(t,n)&&Ti(e,n,t[n])}),Yu=oa(function(e,t){ra(t,as(t),e)}),$u=oa(function(e,t,n,i){ra(t,as(t),e,i)}),Gu=oa(function(e,t,n,i){ra(t,rs(t),e,i)}),Ju=ja(Fi)
var Xu=Er(function(e,t){e=tt(e)
var n=-1,i=t.length,r=i>2?t[2]:a
r&&Ya(t[0],t[1],r)&&(i=1)
for(;++n<i;)for(var o=t[n],u=as(o),s=-1,l=u.length;++s<l;){var d=u[s],c=e[d];(c===a||hu(c,ut[d])&&!dt.call(e,d))&&(e[d]=o[d])}return e}),Qu=Er(function(e){e.push(a,Ma)
return Vt(us,a,e)})
function Zu(e,t,n){var i=null==e?a:Xi(e,t)
return i===a?n:i}function es(e,t){return null!=e&&Wa(e,t,nr)}var ts=pa(function(e,t,n){null!=t&&"function"!=typeof t.toString&&(t=ht.call(t))
e[t]=n},Ms(js)),ns=pa(function(e,t,n){null!=t&&"function"!=typeof t.toString&&(t=ht.call(t))
dt.call(e,t)?e[t].push(n):e[t]=[n]},Ua),is=Er(rr)
function rs(e){return yu(e)?Ei(e):dr(e)}function as(e){return yu(e)?Ei(e,!0):cr(e)}var os=oa(function(e,t,n){mr(e,t,n)}),us=oa(function(e,t,n,i){mr(e,t,n,i)}),ss=ja(function(e,t){var n={}
if(null==e)return n
var i=!1
t=Zt(t,function(t){t=Yr(t,e)
i||(i=t.length>1)
return t})
ra(e,Na(e),n)
i&&(n=Ui(n,f|h|_,Aa))
for(var r=t.length;r--;)Lr(n,t[r])
return n})
var ls=ja(function(e,t){return null==e?{}:function(e,t){return yr(e,t,function(t,n){return es(e,n)})}(e,t)})
function ds(e,t){if(null==e)return{}
var n=Zt(Na(e),function(e){return[e]})
t=Ua(t)
return yr(e,n,function(e,n){return t(e,n[0])})}var cs=Ea(rs),fs=Ea(as)
function hs(e){return null==e?[]:gn(e,rs(e))}var _s=da(function(e,t,n){t=t.toLowerCase()
return e+(n?ps(t):t)})
function ps(e){return xs(Vu(e).toLowerCase())}function ms(e){return(e=Vu(e))&&e.replace(Ge,kn).replace(yt,"")}var vs=da(function(e,t,n){return e+(n?"-":"")+t.toLowerCase()}),gs=da(function(e,t,n){return e+(n?" ":"")+t.toLowerCase()}),ys=la("toLowerCase")
var bs=da(function(e,t,n){return e+(n?"_":"")+t.toLowerCase()})
var ws=da(function(e,t,n){return e+(n?" ":"")+xs(t)})
var ks=da(function(e,t,n){return e+(n?" ":"")+t.toUpperCase()}),xs=la("toUpperCase")
function Es(e,t,n){e=Vu(e)
return(t=n?a:t)===a?function(e){return xt.test(e)}(e)?function(e){return e.match(wt)||[]}(e):function(e){return e.match(ze)||[]}(e):e.match(t)||[]}var Cs=Er(function(e,t){try{return Vt(e,a,t)}catch(e){return xu(e)?e:new Qe(e)}}),Ss=ja(function(e,t){Yt(t,function(t){t=lo(t)
Ii(e,t,nu(e[t],e))})
return e})
function Ms(e){return function(){return e}}var As=ha(),Ts=ha(!0)
function js(e){return e}function Os(e){return lr("function"==typeof e?e:Ui(e,f))}var Ns=Er(function(e,t){return function(n){return rr(n,e,t)}}),Is=Er(function(e,t){return function(n){return rr(e,n,t)}})
function Fs(e,t,n){var i=rs(t),r=Ji(t,i)
if(null==n&&(!Mu(t)||!r.length&&i.length)){n=t
t=e
e=this
r=Ji(t,rs(t))}var a=!(Mu(n)&&"chain"in n&&!n.chain),o=Eu(e)
Yt(r,function(n){var i=t[n]
e[n]=i
o&&(e.prototype[n]=function(){var t=this.__chain__
if(a||t){var n=e(this.__wrapped__);(n.__actions__=ia(this.__actions__)).push({func:i,args:arguments,thisArg:e})
n.__chain__=t
return n}return i.apply(e,en([this.value()],arguments))})})
return e}function Rs(){}var Us=va(Zt),Ds=va(Gt),Ps=va(rn)
function Ls(e){return $a(e)?fn(lo(e)):function(e){return function(t){return Xi(t,e)}}(e)}var zs=ya(),Hs=ya(!0)
function Bs(){return[]}function Ws(){return!1}var qs=ma(function(e,t){return e+t},0),Vs=ka("ceil"),Ks=ma(function(e,t){return e/t},1),Ys=ka("floor")
var $s=ma(function(e,t){return e*t},1),Gs=ka("round"),Js=ma(function(e,t){return e-t},0)
_i.after=function(e,t){if("function"!=typeof t)throw new rt(s)
e=Hu(e)
return function(){if(--e<1)return t.apply(this,arguments)}}
_i.ary=eu
_i.assign=Ku
_i.assignIn=Yu
_i.assignInWith=$u
_i.assignWith=Gu
_i.at=Ju
_i.before=tu
_i.bind=nu
_i.bindAll=Ss
_i.bindKey=iu
_i.castArray=function(){if(!arguments.length)return[]
var e=arguments[0]
return vu(e)?e:[e]}
_i.chain=Lo
_i.chunk=function(e,t,n){t=(n?Ya(e,t,n):t===a)?1:Kn(Hu(t),0)
var r=null==e?0:e.length
if(!r||t<1)return[]
for(var o=0,u=0,s=i(Ln(r/t));o<r;)s[u++]=Or(e,o,o+=t)
return s}
_i.compact=function(e){for(var t=-1,n=null==e?0:e.length,i=0,r=[];++t<n;){var a=e[t]
a&&(r[i++]=a)}return r}
_i.concat=function(){var e=arguments.length
if(!e)return[]
for(var t=i(e-1),n=arguments[0],r=e;r--;)t[r-1]=arguments[r]
return en(vu(n)?ia(n):[n],Vi(t,1))}
_i.cond=function(e){var t=null==e?0:e.length,n=Ua()
e=t?Zt(e,function(e){if("function"!=typeof e[1])throw new rt(s)
return[n(e[0]),e[1]]}):[]
return Er(function(n){for(var i=-1;++i<t;){var r=e[i]
if(Vt(r[0],this,n))return Vt(r[1],this,n)}})}
_i.conforms=function(e){return function(e){var t=rs(e)
return function(n){return Di(n,e,t)}}(Ui(e,f))}
_i.constant=Ms
_i.countBy=Bo
_i.create=function(e,t){var n=pi(e)
return null==t?n:Ni(n,t)}
_i.curry=function e(t,n,i){var r=Ca(t,b,a,a,a,a,a,n=i?a:n)
r.placeholder=e.placeholder
return r}
_i.curryRight=function e(t,n,i){var r=Ca(t,w,a,a,a,a,a,n=i?a:n)
r.placeholder=e.placeholder
return r}
_i.debounce=ru
_i.defaults=Xu
_i.defaultsDeep=Qu
_i.defer=au
_i.delay=ou
_i.difference=ho
_i.differenceBy=_o
_i.differenceWith=po
_i.drop=function(e,t,n){var i=null==e?0:e.length
return i?Or(e,(t=n||t===a?1:Hu(t))<0?0:t,i):[]}
_i.dropRight=function(e,t,n){var i=null==e?0:e.length
return i?Or(e,0,(t=i-(t=n||t===a?1:Hu(t)))<0?0:t):[]}
_i.dropRightWhile=function(e,t){return e&&e.length?Hr(e,Ua(t,3),!0,!0):[]}
_i.dropWhile=function(e,t){return e&&e.length?Hr(e,Ua(t,3),!0):[]}
_i.fill=function(e,t,n,i){var r=null==e?0:e.length
if(!r)return[]
if(n&&"number"!=typeof n&&Ya(e,t,n)){n=0
i=r}return function(e,t,n,i){var r=e.length;(n=Hu(n))<0&&(n=-n>r?0:r+n);(i=i===a||i>r?r:Hu(i))<0&&(i+=r)
i=n>i?0:Bu(i)
for(;n<i;)e[n++]=t
return e}(e,t,n,i)}
_i.filter=function(e,t){return(vu(e)?Jt:qi)(e,Ua(t,3))}
_i.flatMap=function(e,t){return Vi(Jo(e,t),1)}
_i.flatMapDeep=function(e,t){return Vi(Jo(e,t),I)}
_i.flatMapDepth=function(e,t,n){n=n===a?1:Hu(n)
return Vi(Jo(e,t),n)}
_i.flatten=go
_i.flattenDeep=function(e){return null!=e&&e.length?Vi(e,I):[]}
_i.flattenDepth=function(e,t){return null!=e&&e.length?Vi(e,t=t===a?1:Hu(t)):[]}
_i.flip=function(e){return Ca(e,S)}
_i.flow=As
_i.flowRight=Ts
_i.fromPairs=function(e){for(var t=-1,n=null==e?0:e.length,i={};++t<n;){var r=e[t]
i[r[0]]=r[1]}return i}
_i.functions=function(e){return null==e?[]:Ji(e,rs(e))}
_i.functionsIn=function(e){return null==e?[]:Ji(e,as(e))}
_i.groupBy=Yo
_i.initial=function(e){return null!=e&&e.length?Or(e,0,-1):[]}
_i.intersection=bo
_i.intersectionBy=wo
_i.intersectionWith=ko
_i.invert=ts
_i.invertBy=ns
_i.invokeMap=$o
_i.iteratee=Os
_i.keyBy=Go
_i.keys=rs
_i.keysIn=as
_i.map=Jo
_i.mapKeys=function(e,t){var n={}
t=Ua(t,3)
$i(e,function(e,i,r){Ii(n,t(e,i,r),e)})
return n}
_i.mapValues=function(e,t){var n={}
t=Ua(t,3)
$i(e,function(e,i,r){Ii(n,i,t(e,i,r))})
return n}
_i.matches=function(e){return _r(Ui(e,f))}
_i.matchesProperty=function(e,t){return pr(e,Ui(t,f))}
_i.memoize=uu
_i.merge=os
_i.mergeWith=us
_i.method=Ns
_i.methodOf=Is
_i.mixin=Fs
_i.negate=su
_i.nthArg=function(e){e=Hu(e)
return Er(function(t){return vr(t,e)})}
_i.omit=ss
_i.omitBy=function(e,t){return ds(e,su(Ua(t)))}
_i.once=function(e){return tu(2,e)}
_i.orderBy=function(e,t,n,i){if(null==e)return[]
vu(t)||(t=null==t?[]:[t])
vu(n=i?a:n)||(n=null==n?[]:[n])
return gr(e,t,n)}
_i.over=Us
_i.overArgs=lu
_i.overEvery=Ds
_i.overSome=Ps
_i.partial=du
_i.partialRight=cu
_i.partition=Xo
_i.pick=ls
_i.pickBy=ds
_i.property=Ls
_i.propertyOf=function(e){return function(t){return null==e?a:Xi(e,t)}}
_i.pull=Eo
_i.pullAll=Co
_i.pullAllBy=function(e,t,n){return e&&e.length&&t&&t.length?br(e,t,Ua(n,2)):e}
_i.pullAllWith=function(e,t,n){return e&&e.length&&t&&t.length?br(e,t,a,n):e}
_i.pullAt=So
_i.range=zs
_i.rangeRight=Hs
_i.rearg=fu
_i.reject=function(e,t){return(vu(e)?Jt:qi)(e,su(Ua(t,3)))}
_i.remove=function(e,t){var n=[]
if(!e||!e.length)return n
var i=-1,r=[],a=e.length
t=Ua(t,3)
for(;++i<a;){var o=e[i]
if(t(o,i,e)){n.push(o)
r.push(i)}}wr(e,r)
return n}
_i.rest=function(e,t){if("function"!=typeof e)throw new rt(s)
return Er(e,t=t===a?t:Hu(t))}
_i.reverse=Mo
_i.sampleSize=function(e,t,n){t=(n?Ya(e,t,n):t===a)?1:Hu(t)
return(vu(e)?Si:Sr)(e,t)}
_i.set=function(e,t,n){return null==e?e:Mr(e,t,n)}
_i.setWith=function(e,t,n,i){i="function"==typeof i?i:a
return null==e?e:Mr(e,t,n,i)}
_i.shuffle=function(e){return(vu(e)?Mi:jr)(e)}
_i.slice=function(e,t,n){var i=null==e?0:e.length
if(!i)return[]
if(n&&"number"!=typeof n&&Ya(e,t,n)){t=0
n=i}else{t=null==t?0:Hu(t)
n=n===a?i:Hu(n)}return Or(e,t,n)}
_i.sortBy=Qo
_i.sortedUniq=function(e){return e&&e.length?Rr(e):[]}
_i.sortedUniqBy=function(e,t){return e&&e.length?Rr(e,Ua(t,2)):[]}
_i.split=function(e,t,n){n&&"number"!=typeof n&&Ya(e,t,n)&&(t=n=a)
return(n=n===a?D:n>>>0)?(e=Vu(e))&&("string"==typeof t||null!=t&&!Nu(t))&&!(t=Dr(t))&&Cn(e)?Gr(In(e),0,n):e.split(t,n):[]}
_i.spread=function(e,t){if("function"!=typeof e)throw new rt(s)
t=null==t?0:Kn(Hu(t),0)
return Er(function(n){var i=n[t],r=Gr(n,0,t)
i&&en(r,i)
return Vt(e,this,r)})}
_i.tail=function(e){var t=null==e?0:e.length
return t?Or(e,1,t):[]}
_i.take=function(e,t,n){return e&&e.length?Or(e,0,(t=n||t===a?1:Hu(t))<0?0:t):[]}
_i.takeRight=function(e,t,n){var i=null==e?0:e.length
return i?Or(e,(t=i-(t=n||t===a?1:Hu(t)))<0?0:t,i):[]}
_i.takeRightWhile=function(e,t){return e&&e.length?Hr(e,Ua(t,3),!1,!0):[]}
_i.takeWhile=function(e,t){return e&&e.length?Hr(e,Ua(t,3)):[]}
_i.tap=function(e,t){t(e)
return e}
_i.throttle=function(e,t,n){var i=!0,r=!0
if("function"!=typeof e)throw new rt(s)
if(Mu(n)){i="leading"in n?!!n.leading:i
r="trailing"in n?!!n.trailing:r}return ru(e,t,{leading:i,maxWait:t,trailing:r})}
_i.thru=zo
_i.toArray=Lu
_i.toPairs=cs
_i.toPairsIn=fs
_i.toPath=function(e){return vu(e)?Zt(e,lo):Ru(e)?[e]:ia(so(Vu(e)))}
_i.toPlainObject=qu
_i.transform=function(e,t,n){var i=vu(e),r=i||wu(e)||Uu(e)
t=Ua(t,4)
if(null==n){var a=e&&e.constructor
n=r?i?new a:[]:Mu(e)&&Eu(a)?pi(Ot(e)):{}}(r?Yt:$i)(e,function(e,i,r){return t(n,e,i,r)})
return n}
_i.unary=function(e){return eu(e,1)}
_i.union=Ao
_i.unionBy=To
_i.unionWith=jo
_i.uniq=function(e){return e&&e.length?Pr(e):[]}
_i.uniqBy=function(e,t){return e&&e.length?Pr(e,Ua(t,2)):[]}
_i.uniqWith=function(e,t){t="function"==typeof t?t:a
return e&&e.length?Pr(e,a,t):[]}
_i.unset=function(e,t){return null==e||Lr(e,t)}
_i.unzip=Oo
_i.unzipWith=No
_i.update=function(e,t,n){return null==e?e:zr(e,t,Kr(n))}
_i.updateWith=function(e,t,n,i){i="function"==typeof i?i:a
return null==e?e:zr(e,t,Kr(n),i)}
_i.values=hs
_i.valuesIn=function(e){return null==e?[]:gn(e,as(e))}
_i.without=Io
_i.words=Es
_i.wrap=function(e,t){return du(Kr(t),e)}
_i.xor=Fo
_i.xorBy=Ro
_i.xorWith=Uo
_i.zip=Do
_i.zipObject=function(e,t){return qr(e||[],t||[],Ti)}
_i.zipObjectDeep=function(e,t){return qr(e||[],t||[],Mr)}
_i.zipWith=Po
_i.entries=cs
_i.entriesIn=fs
_i.extend=Yu
_i.extendWith=$u
Fs(_i,_i)
_i.add=qs
_i.attempt=Cs
_i.camelCase=_s
_i.capitalize=ps
_i.ceil=Vs
_i.clamp=function(e,t,n){if(n===a){n=t
t=a}n!==a&&(n=(n=Wu(n))==n?n:0)
t!==a&&(t=(t=Wu(t))==t?t:0)
return Ri(Wu(e),t,n)}
_i.clone=function(e){return Ui(e,_)}
_i.cloneDeep=function(e){return Ui(e,f|_)}
_i.cloneDeepWith=function(e,t){return Ui(e,f|_,t="function"==typeof t?t:a)}
_i.cloneWith=function(e,t){return Ui(e,_,t="function"==typeof t?t:a)}
_i.conformsTo=function(e,t){return null==t||Di(e,t,rs(t))}
_i.deburr=ms
_i.defaultTo=function(e,t){return null==e||e!=e?t:e}
_i.divide=Ks
_i.endsWith=function(e,t,n){e=Vu(e)
t=Dr(t)
var i=e.length,r=n=n===a?i:Ri(Hu(n),0,i)
return(n-=t.length)>=0&&e.slice(n,r)==t}
_i.eq=hu
_i.escape=function(e){return(e=Vu(e))&&Ce.test(e)?e.replace(xe,xn):e}
_i.escapeRegExp=function(e){return(e=Vu(e))&&Ie.test(e)?e.replace(Ne,"\\$&"):e}
_i.every=function(e,t,n){var i=vu(e)?Gt:Bi
n&&Ya(e,t,n)&&(t=a)
return i(e,Ua(t,3))}
_i.find=Wo
_i.findIndex=mo
_i.findKey=function(e,t){return on(e,Ua(t,3),$i)}
_i.findLast=qo
_i.findLastIndex=vo
_i.findLastKey=function(e,t){return on(e,Ua(t,3),Gi)}
_i.floor=Ys
_i.forEach=Vo
_i.forEachRight=Ko
_i.forIn=function(e,t){return null==e?e:Ki(e,Ua(t,3),as)}
_i.forInRight=function(e,t){return null==e?e:Yi(e,Ua(t,3),as)}
_i.forOwn=function(e,t){return e&&$i(e,Ua(t,3))}
_i.forOwnRight=function(e,t){return e&&Gi(e,Ua(t,3))}
_i.get=Zu
_i.gt=_u
_i.gte=pu
_i.has=function(e,t){return null!=e&&Wa(e,t,tr)}
_i.hasIn=es
_i.head=yo
_i.identity=js
_i.includes=function(e,t,n,i){e=yu(e)?e:hs(e)
n=n&&!i?Hu(n):0
var r=e.length
n<0&&(n=Kn(r+n,0))
return Fu(e)?n<=r&&e.indexOf(t,n)>-1:!!r&&sn(e,t,n)>-1}
_i.indexOf=function(e,t,n){var i=null==e?0:e.length
if(!i)return-1
var r=null==n?0:Hu(n)
r<0&&(r=Kn(i+r,0))
return sn(e,t,r)}
_i.inRange=function(e,t,n){t=zu(t)
if(n===a){n=t
t=0}else n=zu(n)
return function(e,t,n){return e>=Yn(t,n)&&e<Kn(t,n)}(e=Wu(e),t,n)}
_i.invoke=is
_i.isArguments=mu
_i.isArray=vu
_i.isArrayBuffer=gu
_i.isArrayLike=yu
_i.isArrayLikeObject=bu
_i.isBoolean=function(e){return!0===e||!1===e||Au(e)&&Zi(e)==q}
_i.isBuffer=wu
_i.isDate=ku
_i.isElement=function(e){return Au(e)&&1===e.nodeType&&!Ou(e)}
_i.isEmpty=function(e){if(null==e)return!0
if(yu(e)&&(vu(e)||"string"==typeof e||"function"==typeof e.splice||wu(e)||Uu(e)||mu(e)))return!e.length
var t=Ba(e)
if(t==J||t==ne)return!e.size
if(Xa(e))return!dr(e).length
for(var n in e)if(dt.call(e,n))return!1
return!0}
_i.isEqual=function(e,t){return or(e,t)}
_i.isEqualWith=function(e,t,n){var i=(n="function"==typeof n?n:a)?n(e,t):a
return i===a?or(e,t,a,n):!!i}
_i.isError=xu
_i.isFinite=function(e){return"number"==typeof e&&Wn(e)}
_i.isFunction=Eu
_i.isInteger=Cu
_i.isLength=Su
_i.isMap=Tu
_i.isMatch=function(e,t){return e===t||ur(e,t,Pa(t))}
_i.isMatchWith=function(e,t,n){n="function"==typeof n?n:a
return ur(e,t,Pa(t),n)}
_i.isNaN=function(e){return ju(e)&&e!=+e}
_i.isNative=function(e){if(Ja(e))throw new Qe(u)
return sr(e)}
_i.isNil=function(e){return null==e}
_i.isNull=function(e){return null===e}
_i.isNumber=ju
_i.isObject=Mu
_i.isObjectLike=Au
_i.isPlainObject=Ou
_i.isRegExp=Nu
_i.isSafeInteger=function(e){return Cu(e)&&e>=-F&&e<=F}
_i.isSet=Iu
_i.isString=Fu
_i.isSymbol=Ru
_i.isTypedArray=Uu
_i.isUndefined=function(e){return e===a}
_i.isWeakMap=function(e){return Au(e)&&Ba(e)==oe}
_i.isWeakSet=function(e){return Au(e)&&Zi(e)==ue}
_i.join=function(e,t){return null==e?"":qn.call(e,t)}
_i.kebabCase=vs
_i.last=xo
_i.lastIndexOf=function(e,t,n){var i=null==e?0:e.length
if(!i)return-1
var r=i
n!==a&&(r=(r=Hu(n))<0?Kn(i+r,0):Yn(r,i-1))
return t==t?function(e,t,n){for(var i=n+1;i--;)if(e[i]===t)return i
return i}(e,t,r):un(e,dn,r,!0)}
_i.lowerCase=gs
_i.lowerFirst=ys
_i.lt=Du
_i.lte=Pu
_i.max=function(e){return e&&e.length?Wi(e,js,er):a}
_i.maxBy=function(e,t){return e&&e.length?Wi(e,Ua(t,2),er):a}
_i.mean=function(e){return cn(e,js)}
_i.meanBy=function(e,t){return cn(e,Ua(t,2))}
_i.min=function(e){return e&&e.length?Wi(e,js,fr):a}
_i.minBy=function(e,t){return e&&e.length?Wi(e,Ua(t,2),fr):a}
_i.stubArray=Bs
_i.stubFalse=Ws
_i.stubObject=function(){return{}}
_i.stubString=function(){return""}
_i.stubTrue=function(){return!0}
_i.multiply=$s
_i.nth=function(e,t){return e&&e.length?vr(e,Hu(t)):a}
_i.noConflict=function(){It._===this&&(It._=pt)
return this}
_i.noop=Rs
_i.now=Zo
_i.pad=function(e,t,n){e=Vu(e)
var i=(t=Hu(t))?Nn(e):0
if(!t||i>=t)return e
var r=(t-i)/2
return ga(zn(r),n)+e+ga(Ln(r),n)}
_i.padEnd=function(e,t,n){e=Vu(e)
var i=(t=Hu(t))?Nn(e):0
return t&&i<t?e+ga(t-i,n):e}
_i.padStart=function(e,t,n){e=Vu(e)
var i=(t=Hu(t))?Nn(e):0
return t&&i<t?ga(t-i,n)+e:e}
_i.parseInt=function(e,t,n){n||null==t?t=0:t&&(t=+t)
return Gn(Vu(e).replace(Re,""),t||0)}
_i.random=function(e,t,n){n&&"boolean"!=typeof n&&Ya(e,t,n)&&(t=n=a)
if(n===a)if("boolean"==typeof t){n=t
t=a}else if("boolean"==typeof e){n=e
e=a}if(e===a&&t===a){e=0
t=1}else{e=zu(e)
if(t===a){t=e
e=0}else t=zu(t)}if(e>t){var i=e
e=t
t=i}if(n||e%1||t%1){var r=Jn()
return Yn(e+r*(t-e+Tt("1e-"+((r+"").length-1))),t)}return kr(e,t)}
_i.reduce=function(e,t,n){var i=vu(e)?tn:_n,r=arguments.length<3
return i(e,Ua(t,4),n,r,zi)}
_i.reduceRight=function(e,t,n){var i=vu(e)?nn:_n,r=arguments.length<3
return i(e,Ua(t,4),n,r,Hi)}
_i.repeat=function(e,t,n){t=(n?Ya(e,t,n):t===a)?1:Hu(t)
return xr(Vu(e),t)}
_i.replace=function(){var e=arguments,t=Vu(e[0])
return e.length<3?t:t.replace(e[1],e[2])}
_i.result=function(e,t,n){var i=-1,r=(t=Yr(t,e)).length
if(!r){r=1
e=a}for(;++i<r;){var o=null==e?a:e[lo(t[i])]
if(o===a){i=r
o=n}e=Eu(o)?o.call(e):o}return e}
_i.round=Gs
_i.runInContext=e
_i.sample=function(e){return(vu(e)?Ci:Cr)(e)}
_i.size=function(e){if(null==e)return 0
if(yu(e))return Fu(e)?Nn(e):e.length
var t=Ba(e)
return t==J||t==ne?e.size:dr(e).length}
_i.snakeCase=bs
_i.some=function(e,t,n){var i=vu(e)?rn:Nr
n&&Ya(e,t,n)&&(t=a)
return i(e,Ua(t,3))}
_i.sortedIndex=function(e,t){return Ir(e,t)}
_i.sortedIndexBy=function(e,t,n){return Fr(e,t,Ua(n,2))}
_i.sortedIndexOf=function(e,t){var n=null==e?0:e.length
if(n){var i=Ir(e,t)
if(i<n&&hu(e[i],t))return i}return-1}
_i.sortedLastIndex=function(e,t){return Ir(e,t,!0)}
_i.sortedLastIndexBy=function(e,t,n){return Fr(e,t,Ua(n,2),!0)}
_i.sortedLastIndexOf=function(e,t){if(null!=e&&e.length){var n=Ir(e,t,!0)-1
if(hu(e[n],t))return n}return-1}
_i.startCase=ws
_i.startsWith=function(e,t,n){e=Vu(e)
n=null==n?0:Ri(Hu(n),0,e.length)
t=Dr(t)
return e.slice(n,n+t.length)==t}
_i.subtract=Js
_i.sum=function(e){return e&&e.length?pn(e,js):0}
_i.sumBy=function(e,t){return e&&e.length?pn(e,Ua(t,2)):0}
_i.template=function(e,t,n){var i=_i.templateSettings
n&&Ya(e,t,n)&&(t=a)
e=Vu(e)
t=$u({},t,i,Sa)
var r,o,u=$u({},t.imports,i.imports,Sa),s=rs(u),l=gn(u,s),d=0,c=t.interpolate||Je,f="__p += '",h=nt((t.escape||Je).source+"|"+c.source+"|"+(c===Ae?Be:Je).source+"|"+(t.evaluate||Je).source+"|$","g"),_="//# sourceURL="+("sourceURL"in t?t.sourceURL:"lodash.templateSources["+ ++Ct+"]")+"\n"
e.replace(h,function(t,n,i,a,u,s){i||(i=a)
f+=e.slice(d,s).replace(Xe,En)
if(n){r=!0
f+="' +\n__e("+n+") +\n'"}if(u){o=!0
f+="';\n"+u+";\n__p += '"}i&&(f+="' +\n((__t = ("+i+")) == null ? '' : __t) +\n'")
d=s+t.length
return t})
f+="';\n"
var p=t.variable
p||(f="with (obj) {\n"+f+"\n}\n")
f=(o?f.replace(ye,""):f).replace(be,"$1").replace(we,"$1;")
f="function("+(p||"obj")+") {\n"+(p?"":"obj || (obj = {});\n")+"var __t, __p = ''"+(r?", __e = _.escape":"")+(o?", __j = Array.prototype.join;\nfunction print() { __p += __j.call(arguments, '') }\n":";\n")+f+"return __p\n}"
var m=Cs(function(){return Ze(s,_+"return "+f).apply(a,l)})
m.source=f
if(xu(m))throw m
return m}
_i.times=function(e,t){if((e=Hu(e))<1||e>F)return[]
var n=D,i=Yn(e,D)
t=Ua(t)
e-=D
for(var r=mn(i,t);++n<e;)t(n)
return r}
_i.toFinite=zu
_i.toInteger=Hu
_i.toLength=Bu
_i.toLower=function(e){return Vu(e).toLowerCase()}
_i.toNumber=Wu
_i.toSafeInteger=function(e){return e?Ri(Hu(e),-F,F):0===e?e:0}
_i.toString=Vu
_i.toUpper=function(e){return Vu(e).toUpperCase()}
_i.trim=function(e,t,n){if((e=Vu(e))&&(n||t===a))return e.replace(Fe,"")
if(!e||!(t=Dr(t)))return e
var i=In(e),r=In(t)
return Gr(i,bn(i,r),wn(i,r)+1).join("")}
_i.trimEnd=function(e,t,n){if((e=Vu(e))&&(n||t===a))return e.replace(Ue,"")
if(!e||!(t=Dr(t)))return e
var i=In(e)
return Gr(i,0,wn(i,In(t))+1).join("")}
_i.trimStart=function(e,t,n){if((e=Vu(e))&&(n||t===a))return e.replace(Re,"")
if(!e||!(t=Dr(t)))return e
var i=In(e)
return Gr(i,bn(i,In(t))).join("")}
_i.truncate=function(e,t){var n=M,i=A
if(Mu(t)){var r="separator"in t?t.separator:r
n="length"in t?Hu(t.length):n
i="omission"in t?Dr(t.omission):i}var o=(e=Vu(e)).length
if(Cn(e)){var u=In(e)
o=u.length}if(n>=o)return e
var s=n-Nn(i)
if(s<1)return i
var l=u?Gr(u,0,s).join(""):e.slice(0,s)
if(r===a)return l+i
u&&(s+=l.length-s)
if(Nu(r)){if(e.slice(s).search(r)){var d,c=l
r.global||(r=nt(r.source,Vu(We.exec(r))+"g"))
r.lastIndex=0
for(;d=r.exec(c);)var f=d.index
l=l.slice(0,f===a?s:f)}}else if(e.indexOf(Dr(r),s)!=s){var h=l.lastIndexOf(r)
h>-1&&(l=l.slice(0,h))}return l+i}
_i.unescape=function(e){return(e=Vu(e))&&Ee.test(e)?e.replace(ke,Fn):e}
_i.uniqueId=function(e){var t=++ct
return Vu(e)+t}
_i.upperCase=ks
_i.upperFirst=xs
_i.each=Vo
_i.eachRight=Ko
_i.first=yo
Fs(_i,function(){var e={}
$i(_i,function(t,n){dt.call(_i.prototype,n)||(e[n]=t)})
return e}(),{chain:!1})
_i.VERSION="4.17.5"
Yt(["bind","bindKey","curry","curryRight","partial","partialRight"],function(e){_i[e].placeholder=_i})
Yt(["drop","take"],function(e,t){gi.prototype[e]=function(n){n=n===a?1:Kn(Hu(n),0)
var i=this.__filtered__&&!t?new gi(this):this.clone()
i.__filtered__?i.__takeCount__=Yn(n,i.__takeCount__):i.__views__.push({size:Yn(n,D),type:e+(i.__dir__<0?"Right":"")})
return i}
gi.prototype[e+"Right"]=function(t){return this.reverse()[e](t).reverse()}})
Yt(["filter","map","takeWhile"],function(e,t){var n=t+1,i=n==O||3==n
gi.prototype[e]=function(e){var t=this.clone()
t.__iteratees__.push({iteratee:Ua(e,3),type:n})
t.__filtered__=t.__filtered__||i
return t}})
Yt(["head","last"],function(e,t){var n="take"+(t?"Right":"")
gi.prototype[e]=function(){return this[n](1).value()[0]}})
Yt(["initial","tail"],function(e,t){var n="drop"+(t?"":"Right")
gi.prototype[e]=function(){return this.__filtered__?new gi(this):this[n](1)}})
gi.prototype.compact=function(){return this.filter(js)}
gi.prototype.find=function(e){return this.filter(e).head()}
gi.prototype.findLast=function(e){return this.reverse().find(e)}
gi.prototype.invokeMap=Er(function(e,t){return"function"==typeof e?new gi(this):this.map(function(n){return rr(n,e,t)})})
gi.prototype.reject=function(e){return this.filter(su(Ua(e)))}
gi.prototype.slice=function(e,t){e=Hu(e)
var n=this
if(n.__filtered__&&(e>0||t<0))return new gi(n)
e<0?n=n.takeRight(-e):e&&(n=n.drop(e))
t!==a&&(n=(t=Hu(t))<0?n.dropRight(-t):n.take(t-e))
return n}
gi.prototype.takeRightWhile=function(e){return this.reverse().takeWhile(e).reverse()}
gi.prototype.toArray=function(){return this.take(D)}
$i(gi.prototype,function(e,t){var n=/^(?:filter|find|map|reject)|While$/.test(t),i=/^(?:head|last)$/.test(t),r=_i[i?"take"+("last"==t?"Right":""):t],o=i||/^find/.test(t)
r&&(_i.prototype[t]=function(){var t=this.__wrapped__,u=i?[1]:arguments,s=t instanceof gi,l=u[0],d=s||vu(t),c=function(e){var t=r.apply(_i,en([e],u))
return i&&f?t[0]:t}
d&&n&&"function"==typeof l&&1!=l.length&&(s=d=!1)
var f=this.__chain__,h=!!this.__actions__.length,_=o&&!f,p=s&&!h
if(!o&&d){t=p?t:new gi(this)
var m=e.apply(t,u)
m.__actions__.push({func:zo,args:[c],thisArg:a})
return new vi(m,f)}if(_&&p)return e.apply(this,u)
m=this.thru(c)
return _?i?m.value()[0]:m.value():m})})
Yt(["pop","push","shift","sort","splice","unshift"],function(e){var t=at[e],n=/^(?:push|sort|unshift)$/.test(e)?"tap":"thru",i=/^(?:pop|shift)$/.test(e)
_i.prototype[e]=function(){var e=arguments
if(i&&!this.__chain__){var r=this.value()
return t.apply(vu(r)?r:[],e)}return this[n](function(n){return t.apply(vu(n)?n:[],e)})}})
$i(gi.prototype,function(e,t){var n=_i[t]
if(n){var i=n.name+"";(ai[i]||(ai[i]=[])).push({name:t,func:n})}})
ai[_a(a,g).name]=[{name:"wrapper",func:a}]
gi.prototype.clone=function(){var e=new gi(this.__wrapped__)
e.__actions__=ia(this.__actions__)
e.__dir__=this.__dir__
e.__filtered__=this.__filtered__
e.__iteratees__=ia(this.__iteratees__)
e.__takeCount__=this.__takeCount__
e.__views__=ia(this.__views__)
return e}
gi.prototype.reverse=function(){if(this.__filtered__){var e=new gi(this)
e.__dir__=-1
e.__filtered__=!0}else(e=this.clone()).__dir__*=-1
return e}
gi.prototype.value=function(){var e=this.__wrapped__.value(),t=this.__dir__,n=vu(e),i=t<0,r=n?e.length:0,a=function(e,t,n){for(var i=-1,r=n.length;++i<r;){var a=n[i],o=a.size
switch(a.type){case"drop":e+=o
break
case"dropRight":t-=o
break
case"take":t=Yn(t,e+o)
break
case"takeRight":e=Kn(e,t-o)}}return{start:e,end:t}}(0,r,this.__views__),o=a.start,u=a.end,s=u-o,l=i?u:o-1,d=this.__iteratees__,c=d.length,f=0,h=Yn(s,this.__takeCount__)
if(!n||!i&&r==s&&h==s)return Br(e,this.__actions__)
var _=[]
e:for(;s--&&f<h;){for(var p=-1,m=e[l+=t];++p<c;){var v=d[p],g=v.iteratee,y=v.type,b=g(m)
if(y==N)m=b
else if(!b){if(y==O)continue e
break e}}_[f++]=m}return _}
_i.prototype.at=Ho
_i.prototype.chain=function(){return Lo(this)}
_i.prototype.commit=function(){return new vi(this.value(),this.__chain__)}
_i.prototype.next=function(){this.__values__===a&&(this.__values__=Lu(this.value()))
var e=this.__index__>=this.__values__.length
return{done:e,value:e?a:this.__values__[this.__index__++]}}
_i.prototype.plant=function(e){for(var t,n=this;n instanceof mi;){var i=fo(n)
i.__index__=0
i.__values__=a
t?r.__wrapped__=i:t=i
var r=i
n=n.__wrapped__}r.__wrapped__=e
return t}
_i.prototype.reverse=function(){var e=this.__wrapped__
if(e instanceof gi){var t=e
this.__actions__.length&&(t=new gi(this));(t=t.reverse()).__actions__.push({func:zo,args:[Mo],thisArg:a})
return new vi(t,this.__chain__)}return this.thru(Mo)}
_i.prototype.toJSON=_i.prototype.valueOf=_i.prototype.value=function(){return Br(this.__wrapped__,this.__actions__)}
_i.prototype.first=_i.prototype.head
Pt&&(_i.prototype[Pt]=function(){return this})
return _i}()
It._=Rn;(r=function(){return Rn}.call(t,n,t,i))!==a&&(i.exports=r)}).call(this)}).call(t,n("DuR2MXOpqV"),n("3IRHqcYYwf")(e))},MJc1meCUnj:function(e,t,n){var i,r,a=function(e,t){return function(){return e.apply(t,arguments)}}
i=[n("uceVF1dIMW"),n("mOY9BNujNR"),n("pmU8As9kkw")],void 0!==(r=function(e,t){return function(){function n(){this.setCloseOption=a(this.setCloseOption,this)
this.hide=a(this.hide,this)}n.prototype.initialize=function(){this.dialog=t("#media_comment_dialog")
return this.createLoadingWindow()}
n.prototype.hide=function(){return t("#media_comment_dialog").dialog("close")}
n.prototype.createLoadingWindow=function(){0===this.dialog.length&&(this.dialog=t("<div/>").attr("id","media_comment_dialog"))
this.dialog.text(e.t("messages.loading","Loading..."))
this.dialog.dialog({title:e.t("titles.record_upload_media_comment","Record/Upload Media Comment"),resizable:!1,width:470,height:300,modal:!0})
return this.dialog=t("#media_comment_dialog")}
n.prototype.displayContent=function(e){return this.dialog.html(e)}
n.prototype.mediaReady=function(e,t){this.showUpdateDialog()
this.setCloseOption(t)
this.resetRecordHolders()
return this.setupTypes(e)}
n.prototype.showUpdateDialog=function(){return this.dialog.dialog({title:e.t("titles.record_upload_media_comment","Record/Upload Media Comment"),width:560,height:475,modal:!0})}
n.prototype.setCloseOption=function(e){return this.dialog.dialog("option","close",(n=this,function(){t("#audio_record").before("<div id='audio_record'/>").remove()
t("#video_record").before("<div id='video_record'/>").remove()
if(e&&e.close&&t.isFunction(e.close))return e.close.call(n.$dialog)}))
var n}
n.prototype.setupTypes=function(e){if("video"===e){t("#video_record_option").click()
t("#media_record_option_holder").hide()
t("#audio_upload_holder").hide()
return t("#video_upload_holder").show()}if("audio"===e){t("#audio_record_option").click()
t("#media_record_option_holder").hide()
t("#audio_upload_holder").show()
return t("#video_upload_holder").hide()}t("#video_record_option").click()
t("#audio_upload_holder").show()
return t("#video_upload_holder").show()}
n.prototype.resetRecordHolders=function(){t("#audio_record").before("<div id='audio_record'/>").remove()
return t("#video_record").before("<div id='video_record'/>").remove()}
n.prototype.activateTabs=function(){return this.dialog.find("#media_record_tabs").tabs()}
return n}()}.apply(t,i))&&(e.exports=r)},"NDO/g0y6Bx":function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i},o=n("M4fFHvVeAA")
var u={ENTER:13,ESC:27,SPACE:32,LEFT:37,UP:38,RIGHT:39,DOWN:40,PAGE_UP:33,PAGE_DOWN:34,M:77,F:70,G_REWIND:227,G_FORWARD:228},s={captions:".mejs-captions-button",fullscreen:".mejs-fullscreen-button",playpause:".mejs-playpause-button",progress:".mejs-time-rail",source:".mejs-sourcechooser-button",speed:".mejs-speed-button",volume:".mejs-volume-button"}
function l(e,t){var n=e.filter(t).first(),i=e.index(n)
return i<0?0:i}function d(e,t,n,i){this.player=t
this.media=n
this.event=i
this.keyCode=i.keyCode
this.isFullScreen=e.MediaFeatures.hasTrueNativeFullScreen&&e.MediaFeatures.isFullScreen()||t.isFullScreen
this.isFirefox=e.MediaFeatures.isFirefox}d.keyCodes=u
d.prototype._targetControl=function(e){return(0,a.default)(this.event.target).closest(e)}
d.prototype.handlerKey=function(){var e=this
return(0,o.findKey)(s,function(t){return e._targetControl(t).length})||"player"}
d.prototype.dispatch=function(){this.event.preventDefault()
this[this.handlerKey()+"Handler"]()}
d.prototype.captionsHandler=function(){var e=void 0,t=this.player,n=this.event,i=(0,a.default)(t.captionsButton).find(".mejs-captions-selector input[type=radio]"),r=l(i,function(e,n){return"none"===n.value&&null==t.selectedTrack||t.selectedTrack&&n.value===t.selectedTrack.srclang})
switch(this.keyCode){case u.DOWN:e=Math.min(r+1,i.length-1)
i.slice(e).first().focus().click()
break
case u.UP:e=Math.max(r-1,0)
i.slice(e).first().focus().click()
break
case u.ENTER:"a"===n.target.tagName.toLowerCase()&&(0,a.default)(n.target)[0].click()}}
d.prototype.fullscreenHandler=function(){var e=this.player,t=this.event
switch(this.keyCode){case u.SPACE:if(this.isFirefox)break
case u.ENTER:(0,a.default)(t.target)[0].click()
break
case u.ESC:this.isFullScreen&&e.exitFullScreen()}}
d.prototype.playpauseHandler=function(){var e=this.player,t=this.media,n=void 0
switch(this.keyCode){case u.LEFT:case u.DOWN:case u.G_REWIND:n=Math.max(t.currentTime-e.options.defaultSeekBackwardInterval(t),0)
t.setCurrentTime(n)
break
case u.RIGHT:case u.UP:case u.G_FORWARD:n=Math.min(t.currentTime+e.options.defaultSeekForwardInterval(t),t.duration)
t.setCurrentTime(n)
break
case u.PAGE_DOWN:n=Math.max(t.currentTime-e.options.defaultJumpBackwardInterval(t),0)
t.setCurrentTime(n)
break
case u.PAGE_UP:n=Math.min(t.currentTime+e.options.defaultJumpForwardInterval(t),t.duration)
t.setCurrentTime(n)
break
case u.SPACE:if(this.isFirefox)break
case u.ENTER:t.paused?t.play():t.pause()}}
d.prototype.progressHandler=function(){}
d.prototype.sourceHandler=function(){var e=void 0,t=this.player,n=(0,a.default)(t.sourcechooserButton).find(".mejs-sourcechooser-selector input[type=radio]"),i=l(n,function(e,n){return n.value===t.media.src})
switch(this.keyCode){case u.DOWN:e=Math.min(i+1,n.length-1)
n.slice(e).first().focus().click()
break
case u.UP:e=Math.max(i-1,0)
n.slice(e).first().focus().click()}}
d.prototype.speedHandler=function(){var e=void 0,t=this.player,n=(0,a.default)(t.speedButton).find(".mejs-speed-selector input[type=radio]"),i=l(n,function(e,n){return parseFloat(n.value)===t.media.playbackRate})
switch(this.keyCode){case u.DOWN:e=Math.min(i+1,n.length-1)
n.slice(e).first().focus().click()
break
case u.UP:e=Math.max(i-1,0)
n.slice(e).first().focus().click()}}
d.prototype.volumeHandler=function(){var e=this.player,t=this.media,n=void 0
switch(this.keyCode){case u.SPACE:if(this.isFirefox)break
case u.ENTER:e.setMuted(!e.media.muted)
break
case u.LEFT:n=Math.max(0,t.volume-.1)
t.setVolume(n)
break
case u.RIGHT:n=Math.min(t.volume+.1,1)
t.setVolume(n)
break
case u.PAGE_DOWN:n=Math.max(0,t.volume-.5)
t.setVolume(n)
break
case u.PAGE_UP:n=Math.min(t.volume+.5,1)
t.setVolume(n)}}
d.prototype.playerHandler=function(){var e=this.player,t=this.media,n=this.event,i=void 0,r=void 0
switch(this.keyCode){case u.LEFT:case u.G_REWIND:i=Math.max(t.currentTime-e.options.defaultSeekBackwardInterval(t),0)
t.setCurrentTime(i)
break
case u.RIGHT:case u.G_FORWARD:i=Math.min(t.currentTime+e.options.defaultSeekForwardInterval(t),t.duration)
t.setCurrentTime(i)
break
case u.PAGE_DOWN:i=Math.max(t.currentTime-e.options.defaultJumpBackwardInterval(t),0)
t.setCurrentTime(i)
break
case u.PAGE_UP:i=Math.min(t.currentTime+e.options.defaultJumpForwardInterval(t),t.duration)
t.setCurrentTime(i)
break
case u.F:(0,a.default)(n.target).find(".mejs-fullscreen-button > button")[0].click()
break
case u.UP:r=t.volume
t.setVolume(Math.min(r+.1,1))
break
case u.DOWN:r=t.volume
t.setVolume(Math.max(0,r-.1))
break
case u.M:e.setMuted(!e.media.muted)
break
case u.SPACE:if(this.isFirefox)break
case u.ENTER:t.paused?t.play():t.pause()}}
t.default=d
e.exports=t.default},OGUJHwbmJb:function(e,t,n){"use strict"
var i,r=l(n("uceVF1dIMW")),a=l(n("iBw8ZGM6v8")),o=l(n("yvh8ynczHv")),u=l(n("mOY9BNujNR")),s=l(n("eJBzaBDd6c"))
l(n("2JPOf+YwLj")),l(n("uJvXVpBkfw"))
n("D2yEjZ1CP5")
n("Q4xR9Iqymk")
n("pmU8As9kkw")
n("kzdUuF07HD")
n("3pTo86YxQs")
n("11DZr9oB9c")
n("oxTDiksfqi")
function l(e){return e&&e.__esModule?e:{default:e}}u.default.mediaComment=function(e,t,n){var i=(0,u.default)("<div/>");(0,u.default)("body").append(i.hide())
u.default.fn.mediaComment.apply(i,arguments)}
u.default.mediaComment.partnerData=function(e){var t={context_code:u.default.mediaComment.contextCode(),root_account_id:ENV.DOMAIN_ROOT_ACCOUNT_ID,context_source:ENV.CONTEXT_ACTION_SOURCE}
ENV.SIS_SOURCE_ID&&(t.sis_source_id=ENV.SIS_SOURCE_ID)
ENV.SIS_USER_ID&&(t.sis_user_id=ENV.SIS_USER_ID)
return JSON.stringify(t)}
u.default.mediaComment.contextCode=function(){return ENV.context_asset_string||"user_"+ENV.current_user_id}
function d(e){var t=u.default.mediaComment.contextCode(),n={2:"image",5:"audio"}[e.mediaType]||"video"
t&&u.default.ajaxJSON("/media_objects","POST",{id:e.entryId,type:n,context_code:t,title:e.title,user_entered_title:e.userTitle},function(e){o.default.publish("media_object_created",e)},u.default.noop)
o.default.publish("media_comment_created",{id:e.entryId,mediaType:n,title:e.userTitle})}var c={}
u.default.mediaComment.entryAdded=function(e,t,n,i){if(e&&!c[e]){c[e]=!0
d({mediaType:t,entryId:e,title:n,userTitle:i})}}
u.default.mediaComment.audio_delegate={readyHandler:function(){try{(0,u.default)("#audio_upload")[0].setMediaType("audio")}catch(e){u.default.mediaComment.upload_delegate.setupErrorHandler()}},selectHandler:function(){u.default.mediaComment.upload_delegate.selectHandler("audio")},singleUploadCompleteHandler:function(e){u.default.mediaComment.upload_delegate.singleUploadCompleteHandler("audio",e)},allUploadsCompleteHandler:function(){u.default.mediaComment.upload_delegate.allUploadsCompleteHandler("audio")},entriesAddedHandler:function(e){u.default.mediaComment.upload_delegate.entriesAddedHandler("audio",e)},progressHandler:function(e){u.default.mediaComment.upload_delegate.progressHandler("audio",e[0],e[1],e[2])},uploadErrorHandler:function(){u.default.mediaComment.upload_delegate.uploadErrorHandler("audio")}}
u.default.mediaComment.video_delegate={readyWatcher:null,expectReady:function(){u.default.mediaComment.video_delegate.readyWatcher||(u.default.mediaComment.video_delegate.readyWatcher=setTimeout(u.default.mediaComment.upload_delegate.setupErrorHandler,2e3))},readyHandler:function(){try{(0,u.default)("#video_upload")[0].setMediaType("video")}catch(e){u.default.mediaComment.upload_delegate.setupErrorHandler()}clearTimeout(u.default.mediaComment.video_delegate.readyWatcher)
u.default.mediaComment.video_delegate.readyWatcher=!0},selectHandler:function(){u.default.mediaComment.upload_delegate.selectHandler("video")},singleUploadCompleteHandler:function(e){u.default.mediaComment.upload_delegate.singleUploadCompleteHandler("video",e)},allUploadsCompleteHandler:function(){u.default.mediaComment.upload_delegate.allUploadsCompleteHandler("video")},entriesAddedHandler:function(e){u.default.mediaComment.upload_delegate.entriesAddedHandler("video",e)},progressHandler:function(e){u.default.mediaComment.upload_delegate.progressHandler("video",e[0],e[1],e[2])},uploadErrorHandler:function(){u.default.mediaComment.upload_delegate.uploadErrorHandler("video")}}
u.default.mediaComment.upload_delegate={currentType:"audio",submit:function(){var e=u.default.mediaComment.upload_delegate.currentType,t=(0,u.default)("#"+e+"_upload")[0].getFiles()
t.length>1&&(0,u.default)("#"+e+"_upload")[0].removeFiles(0,t.length-2)
if(0!=(t=(0,u.default)("#"+e+"_upload")[0].getFiles()).length){(0,u.default)("#media_upload_progress").css("visibility","visible").progressbar({value:1});(0,u.default)("#media_upload_submit").attr("disabled",!0).text(r.default.t("messages.submitting","Submitting Media File..."));(0,u.default)("#"+e+"_upload")[0].upload()}},selectHandler:function(e){u.default.mediaComment.upload_delegate.currentType=e
try{var t=(0,u.default)("#"+e+"_upload")[0].getFiles()}catch(e){u.default.mediaComment.upload_delegate.setupErrorHandler()
return}t.length>1&&(0,u.default)("#"+e+"_upload")[0].removeFiles(0,t.length-2)
var n=(0,u.default)("#"+e+"_upload")[0].getFiles()[0];(0,u.default)("#media_upload_settings .icon").attr("src","/images/file-"+e+".png");(0,u.default)("#media_upload_submit").show();(0,u.default)("#media_upload_submit").attr("disabled",!n);(0,u.default)("#media_upload_settings").css("visibility",n?"visible":"hidden");(0,u.default)("#media_upload_title").val(n.title);(0,u.default)("#media_upload_display_title").text(n.title);(0,u.default)("#media_upload_file_size").text(u.default.fileSize(n.bytesTotal));(0,u.default)("#media_upload_feedback_text").html("");(0,u.default)("#media_upload_feedback").css("visibility","hidden")
if(n.bytesTotal>INST.kalturaSettings.max_file_size_bytes){(0,u.default)("#media_upload_feedback_text").html(r.default.t("errors.file_too_large","*This file is too large.* The maximum size is %{size}MB.",{size:INST.kalturaSettings.max_file_size_bytes/1048576,wrapper:"<b>$1</b>"}));(0,u.default)("#media_upload_feedback").css("visibility","visible");(0,u.default)("#media_upload_submit").hide()}else(0,u.default)("#media_upload_submit").click()},singleUploadCompleteHandler:function(e,t){(0,u.default)("#media_upload_progress").progressbar("option","value",100)},allUploadsCompleteHandler:function(e){(0,u.default)("#media_upload_progress").progressbar("option","value",100);(0,u.default)("#"+e+"_upload")[0].addEntries()},entriesAddedHandler:function(e,t){(0,u.default)("#media_upload_progress").progressbar("option","value",100)
var n=t[0];(0,u.default)("#media_upload_submit").text(r.default.t("messages.submitted","Submitted Media File!"))
setTimeout(function(){(0,u.default)("#media_comment_dialog").dialog("close")},1500)
"audio"==e?n.entryType=5:"video"==e&&(n.entryType=1)
u.default.mediaComment.entryAdded(n.entryId,n.entryType,n.title)},progressHandler:function(e,t,n,i){var r=100*t/n;(0,u.default)("#media_upload_progress").progressbar("option","value",r)},uploadErrorHandler:function(e){var t=(0,u.default)("#"+e+"_upload")[0].getError();(0,u.default)("#media_upload_errors").text(r.default.t("errors.upload_failed","Upload failed with error:")+" "+t);(0,u.default)("#media_upload_progress").hide()},setupErrorHandler:function(){(0,u.default)("#media_upload_feedback_text").text(r.default.t("errors.media_comment_installation_broken","Media comment uploading has not been set up properly. Please contact your administrator."));(0,u.default)("#media_upload_feedback").css("visibility","visible");(0,u.default)("#audio_upload_holder").css("visibility","hidden");(0,u.default)("#video_upload_holder").css("visibility","hidden")}}
var f=!1,h=null
u.default.mediaComment.init=function(e,t){n.e(7).then(function(){var a=n("LeFjTU1mPL")
h=h||new Date
e=e||"any"
t=t||{}
var o=u.default.trim((0,u.default)("#identity .user_name").text()||"")
o&&(o=o+": "+(new Date).toString("ddd MMM d, yyyy"))
var s=t.defaultTitle||o||r.default.t("titles.media_contribution","Media Contribution"),l=function(){var n,o
if(INST.kalturaSettings.js_uploader){n=i.getKs()
o=i.getUid()}else{n=p.data("ks")
o=p.data("uid")||"ANONYMOUS"}(0,u.default)("#video_record_title,#audio_record_title").val(s)
p.dialog({title:r.default.t("titles.record_upload_media_comment","Record/Upload Media Comment"),width:560,height:475,modal:!0})
p.dialog("option","close",function(){(0,u.default)("#audio_record").before("<div id='audio_record'/>").remove();(0,u.default)("#video_record").before("<div id='video_record'/>").remove()
t&&t.close&&u.default.isFunction(t.close)&&t.close.call(p)});(0,u.default)("#audio_record").before("<div id='audio_record'/>").remove();(0,u.default)("#video_record").before("<div id='video_record'/>").remove()
if("video"==e){(0,u.default)("#video_record_option").click();(0,u.default)("#media_record_option_holder").hide();(0,u.default)("#audio_upload_holder").hide();(0,u.default)("#video_upload_holder").show()}else if("audio"==e){(0,u.default)("#audio_record_option").click();(0,u.default)("#media_record_option_holder").hide();(0,u.default)("#audio_upload_holder").show();(0,u.default)("#video_upload_holder").hide()}else{(0,u.default)("#video_record_option").click();(0,u.default)("#audio_upload_holder").show();(0,u.default)("#video_upload_holder").show()}(0,u.default)(document).triggerHandler("reset_media_comment_forms")
var l=u.default.trim((0,u.default)("#identity .user_name").text())+" "+(new Date).toISOString()
setTimeout(function(){var e={host:location.protocol+"//"+INST.kalturaSettings.domain,rtmpHost:"rtmp://"+(INST.kalturaSettings.rtmp_domain||INST.kalturaSettings.domain),kshowId:"-1",pid:INST.kalturaSettings.partner_id,subpid:INST.kalturaSettings.subpartner_id,uid:o,ks:n,themeUrl:"/media_record/skin.swf",localeUrl:"/media_record/locale.xml",thumbOffset:"1",licenseType:"CC-0.1",showUi:"true",useCamera:"0",maxFileSize:INST.kalturaSettings.max_file_size_bytes/1048576,maxUploads:1,partnerData:u.default.mediaComment.partnerData(),partner_data:u.default.mediaComment.partnerData(),entryName:l,soundcodec:"Speex"},t={align:"middle",quality:"high",bgcolor:"#ffffff",name:"KRecordAudio",allowScriptAccess:"sameDomain",type:"application/x-shockwave-flash",pluginspage:"http://www.adobe.com/go/getflashplayer",wmode:"opaque"};(0,u.default)("#audio_record").text(r.default.t("messages.flash_required_record_audio","Flash required for recording audio."))
a.embedSWF("/media_record/KRecord.swf","audio_record","400","300","9.0.0",!1,e,t)
t=u.default.extend({},t,{name:"KRecordVideo"}),e=u.default.extend({},e,{useCamera:"1"});(0,u.default)("#video_record").html("Flash required for recording video.")
a.embedSWF("/media_record/KRecord.swf","video_record","400","300","9.0.0",!1,e,t)},INST.browser.ie?500:10)
var d={host:location.protocol+"//"+INST.kalturaSettings.domain,partnerId:INST.kalturaSettings.partner_id,subPId:INST.kalturaSettings.subpartner_id,uid:o,entryId:"-1",ks:n,thumbOffset:"1",licenseType:"CC-0.1",maxFileSize:INST.kalturaSettings.max_file_size_bytes/1048576,maxUploads:1,partnerData:u.default.mediaComment.partnerData(),partner_data:u.default.mediaComment.partnerData(),uiConfId:INST.kalturaSettings.upload_ui_conf,jsDelegate:"$.mediaComment.audio_delegate"},c={align:"middle",quality:"high",bgcolor:"#ffffff",name:"KUpload",allowScriptAccess:"always",type:"application/x-shockwave-flash",pluginspage:"http://www.adobe.com/go/getflashplayer",wmode:"transparent"};(0,u.default)("#audio_upload").text(r.default.t("messages.flash_required_upload_audio","Flash required for uploading audio."))
var h="180",_="50"
a.embedSWF("//"+INST.kalturaSettings.domain+"/kupload/ui_conf_id/"+INST.kalturaSettings.upload_ui_conf,"audio_upload",h,_,"9.0.0",!1,d,c)
d=u.default.extend({},d,{jsDelegate:"$.mediaComment.video_delegate"});(0,u.default)("#video_upload").text(r.default.t("messages.flash_required_upload_video","Flash required for uploading video."))
var m,v,g,y,b,w,k,x
h="180",_="50"
a.embedSWF("//"+INST.kalturaSettings.domain+"/kupload/ui_conf_id/"+INST.kalturaSettings.upload_ui_conf,"video_upload",h,_,"9.0.0",!1,d,c)
var E,C
f=!0
setInterval(function(){if(f){m=(0,u.default)("#audio_record_holder")
v=(0,u.default)("#audio_record")
g=(0,u.default)("#audio_record_meter")
y=0
b=0
w=(0,u.default)("#video_record_holder")
k=(0,u.default)("#video_record")
x=(0,u.default)("#video_record_meter")
E=0
C=0
f=!1}y++
E++
var e=null,t=null
v&&v[0]&&v[0].getMicophoneActivityLevel&&v.parent().length?e=v[0].getMicophoneActivityLevel():v=(0,u.default)("#audio_record")
k&&k[0]&&k[0].getMicophoneActivityLevel&&k.parent().length?t=k[0].getMicophoneActivityLevel():k=(0,u.default)("#video_record")
if(null!=e){if((e=Math.max(e,b))>-1&&!m.hasClass("with_volume")){g.css("display","none");(0,u.default)("#audio_record_holder").addClass("with_volume").animate({width:420},function(){g.css("display","")})}if(y>4){b=0
y=0
var n=(e-e%10)/10
g.attr("class","volume_meter band_"+n)}else b=e}if(null!=t){if((t=Math.max(t,C))>-1&&!w.hasClass("with_volume")){x.css("display","none");(0,u.default)("#video_record_holder").addClass("with_volume").animate({width:420},function(){x.css("display","")})}if(E>4){C=0
E=0
n=(t-t%10)/10
x.attr("class","volume_meter band_"+n)}else C=t}},20)}
if(INST.kalturaSettings.js_uploader){var c=n("uJvXVpBkfw");(i=new c(e,t)).onReady=l
i.addEntry=d}var _=new Date
_-h>3e5&&(0,u.default)("#media_comment_dialog").dialog("close").remove()
h=_
var p=(0,u.default)("#media_comment_dialog")
if(0!=p.length||INST.kalturaSettings.js_uploader)INST.kalturaSettings.js_uploader||l()
else{var m=(0,u.default)("<div/>").attr("id","media_comment_dialog")
m.text(r.default.t("messages.loading","Loading..."))
m.dialog({title:r.default.t("titles.record_upload_media_comment","Record/Upload Media Comment"),resizable:!1,width:470,height:300,modal:!0})
u.default.ajaxJSON("/api/v1/services/kaltura_session","POST",{},function(e){m.data("ks",e.ks)
m.data("uid",e.uid)},function(e){0==e.logged_in?m.data("ks-error",r.default.t("errors.must_be_logged_in","You must be logged in to record media.")):m.data("ks-error",r.default.t("errors.load_failed","Media Comment Application failed to load.  Please try again."))})
!function e(){if(m.data("ks")){var t=n("2JPOf+YwLj")
m.html(t())
m.find("#media_record_tabs").tabs({activate:u.default.mediaComment.video_delegate.expectReady})
l()}else m.data("ks-error")?m.html(m.data("ks-error")):setTimeout(e,500)}()
p=(0,u.default)("#media_comment_dialog")
p=m}}.bind(null,n)).catch(n.oe)};(0,u.default)(document).ready(function(){(0,u.default)(document).bind("reset_media_comment_forms",function(){(0,u.default)("#audio_record_holder_message,#video_record_holder_message").removeClass("saving").find(".recorder_message").html("Saving Recording...<img src='/images/media-saving.gif'/>");(0,u.default)("#audio_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume");(0,u.default)("#video_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume");(0,u.default)("#media_upload_submit").text(r.default.t("buttons.submit","Submit Media File")).attr("disabled",!0);(0,u.default)("#media_upload_settings").css("visibility","hidden");(0,u.default)("#media_upload_progress").css("visibility","hidden").progressbar().progressbar("option","value",1);(0,u.default)("#media_upload_title").val("")
var e=(0,u.default)("#audio_upload")[0]&&(0,u.default)("#audio_upload")[0].getFiles&&(0,u.default)("#audio_upload")[0].getFiles()
e&&(0,u.default)("#audio_upload")[0].removeFiles&&e.length>0&&(0,u.default)("#audio_upload")[0].removeFiles(0,e.length-1);(e=(0,u.default)("#video_upload")[0]&&(0,u.default)("#video_upload")[0].getFiles&&(0,u.default)("#video_upload")[0].getFiles())&&(0,u.default)("#video_upload")[0].removeFiles&&e.length>0&&(0,u.default)("#video_upload")[0].removeFiles(0,e.length-1)});(0,u.default)("#media_upload_submit").live("click",function(e){u.default.mediaComment.upload_delegate.submit()});(0,u.default)("#video_record_option,#audio_record_option").live("click",function(e){e.preventDefault();(0,u.default)("#video_record_option,#audio_record_option").removeClass("selected_option");(0,u.default)(this).addClass("selected_option");(0,u.default)("#audio_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume");(0,u.default)("#video_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume")
if("audio_record_option"==(0,u.default)(this).attr("id")){(0,u.default)("#video_record_holder_holder").hide();(0,u.default)("#audio_record_holder_holder").show()}else{(0,u.default)("#video_record_holder_holder").show();(0,u.default)("#audio_record_holder_holder").hide()}})});(0,u.default)(document).bind("media_recording_error",function(){(0,u.default)("#audio_record_holder_message,#video_record_holder_message").find(".recorder_message").html((0,s.default)(r.default.t("errors.save_failed","Saving appears to have failed.  Please close this popup to try again."))+"<div style='font-size: 0.8em; margin-top: 20px;'>"+(0,s.default)(r.default.t("errors.persistent_problem","If this problem keeps happening, you may want to try recording your media locally and then uploading the saved file instead."))+"</div>")})
window.mediaCommentCallback=function(e){a.default.each(e,d);(0,u.default)("#media_comment_create_dialog").empty().dialog("close")}
window.beforeAddEntry=function(){var e=Math.random()
u.default.mediaComment.lastAddAttemptId=e
setTimeout(function(){u.default.mediaComment.lastAddAttemptId==e&&(0,u.default)(document).triggerHandler("media_recording_error")},3e4);(0,u.default)("#audio_record_holder_message,#video_record_holder_message").addClass("saving")}
window.addEntryFail=function(){(0,u.default)(document).triggerHandler("media_recording_error")}
window.addEntryFailed=function(){(0,u.default)(document).triggerHandler("media_recording_error")}
window.addEntryComplete=function(e){u.default.mediaComment.lastAddAttemptId=null;(0,u.default)("#audio_record_holder_message,#video_record_holder_message").removeClass("saving")
try{var t=null
u.default.isArray(e)||(e=[e])
for(var n=0;n<e.length;n++){var i=e[n]
0==(0,u.default)("#media_record_tabs").tabs("option","selected")?t=(0,u.default)("#video_record_title,#audio_record_title").filter(":visible:first").val():(0,u.default)("#media_record_tabs").tabs("option","selected")
1==i.entryType&&(0,u.default)("#audio_record_option").hasClass("selected_option")&&(i.entryType=5)
u.default.mediaComment.entryAdded(i.entryId,i.entryType,i.entryName,t);(0,u.default)("#media_comment_dialog").dialog("close")}}catch(e){console.log(e)
alert(r.default.t("errors.save_failed_try_again","Entry failed to save.  Please try again."))}}},OmVUS6ALVM:function(e,t,n){var i,r
i=[n("wsG6LCw0ui"),n("EV7MgeIKLJ"),n("wmdTCqkKx2")],void 0!==(r=function(e,t,n){function i(){this.settings,this.file
this.xhr}i.id=1
i.prototype.createRequest=function(){var e=new XMLHttpRequest
e.open("POST",this.createUrl())
e.responseType="xml"
return e}
i.prototype.createFormData=function(){var e=new FormData
e.append("Filename",this.file.name)
e.append("Filedata",this.file)
e.append("Upload","Submit Query")
return e}
i.prototype.createFileId=function(){i.id+=1
return Date.now().toString()+i.id.toString()}
i.prototype.createUrl=function(){var e=this.settings.getSession()
e.filename=this.createFileId()
e.kalsig=this.createSignature()
return n.uploadUrl+t(e)}
i.prototype.createSignature=function(){return e(this.settings.getSession())}
i.prototype.buildRequest=function(e,t){this.settings=e
this.file=t
return this.createRequest()}
i.prototype.getFile=function(){return this.file}
i.prototype.getSettings=function(){return this.settings}
return i}.apply(t,i))&&(e.exports=r)},"PO6ncFtsF/":function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=n("36QOWIB4+W"),r=n.n(i),a=n("mOY9BNujNR")
n.n(a).a.extend(!0,r.a,{translations:{ar:{ajax_errors:{error_heading:"خطأ Ajax: %{status_code}",errors:{connection_lost:"تم فقد الاتصال بـ %{host}.  يُرجى التأكد من اتصالك بالإنترنت وحاول من جديد.",logged_out:"أنت غير مسجل الدخول حاليًا، قد يكون السبب في هذا هو فترة عدم النشاط الطويلة.",unhandled:"للأسف! لم يعمل الطلب الأخير."},links:{details:"تفاصيل...",login:"تسجيل الدخول"},no_text:"بدون نص"}},da:{ajax_errors:{error_heading:"Ajax-fejl: %{status_code}",errors:{connection_lost:"Forbindelse til %{host} blev tabt.  Sørg for, at du er koblet til nettet og prøv igen.",logged_out:"Du er ikke logget på lige nu, muligvis grundet en længerevarende periode uden aktivitet",unhandled:"Hovsa! Den sidste anmodning mislykkedes."},links:{details:"nærmere oplysninger ...",login:"Login"},no_text:"Ingen tekst"}},de:{ajax_errors:{error_heading:"Ajax-Fehler: %{status_code}",errors:{connection_lost:"Die Verbindung mit %{host} ist abgebrochen. Stellen Sie die Internetverbindung wieder her, und versuchen Sie es erneut.",logged_out:"Sie sind derzeit nicht angemeldet. Der Grund hierfür ist möglicherweise längere Inaktivität.",unhandled:"Hoppla! Die letzte Anfrage war nicht erfolgreich."},links:{details:"Details ...",login:"Anmelden"},no_text:"Kein Text"}},"en-AU":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the Internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-CA":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the Internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-GB":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-GB-x-lbs":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-GB-x-ukhe":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},es:{ajax_errors:{error_heading:"Error Ajax: %{status_code}",errors:{connection_lost:"La conexión a %{host} se perdió. Por favor asegúrese que está conectado a Internet e intente de nuevo.",logged_out:"Esta sesión no está iniciada actualmente. La causa podría ser un largo período de inactividad.",unhandled:"¡Oops! La última solicitud no funcionó."},links:{details:"detalles...",login:"Iniciar sesión"},no_text:"Sin texto"}},fa:{ajax_errors:{error_heading:"خطای Ajax: %{status_code}",errors:{connection_lost:"اتصال به %{host} از دست رفت. لطفا مطمئن شوید به اینترنت متصل هستید  و دوباره سعی کنید.",logged_out:"احتمالا به دلیل عدم فعالیت به مدت طولانی، در حال حاضر در حالت ورود به سامانه قرار ندارید.",unhandled:"اوه! آخرین درخواست مؤثر نبود."},links:{details:"اطلاعات بیشتر...",login:"ورود"},no_text:"متن موجود نیست"}},fr:{ajax_errors:{error_heading:"Erreur Ajax : %{status_code}",errors:{connection_lost:"La connexion à %{host} a été perdue. Assurez-vous que vous êtes connecté à l’Internet puis réessayez.",logged_out:"Vous n’êtes pas connecté actuellement, probablement en raison d’une trop longue période d’inactivité.",unhandled:"Erreur. Votre dernière demande n’a pas fonctionné."},links:{details:"informations...",login:"Connexion"},no_text:"Aucun texte"}},"fr-CA":{ajax_errors:{error_heading:"Erreur Ajax : %{status_code}",errors:{connection_lost:"La connexion à %{host} a été perdue. Assurez-vous que vous êtes connecté à l’Internet puis réessayez.",logged_out:"Vous n’êtes pas connecté actuellement, probablement en raison d’une trop longue période d’inactivité.",unhandled:"Erreur. Votre dernière demande n’a pas fonctionné."},links:{details:"informations...",login:"Connexion"},no_text:"Aucun texte"}},he:{ajax_errors:{error_heading:"שגיאת AJAX: (תוכנה)  %{status_code}",errors:{connection_lost:"התקשורת ל %{host}  נפסקה. יש לוודא חיבור לאינטרנט ולנסות שוב.",logged_out:"אינך מחובר/ת למערכת, הדבר יכול לקרות עקב אי פעילות לפרק זמן ארוך.",unhandled:"אופס! הבקשה האחרונה לא התבצעה."},links:{details:"פרטים...",login:"התחברות"},no_text:"אין תוכן"}},ht:{ajax_errors:{error_heading:"Erè Ajax: %{status_code}",errors:{connection_lost:"Koneksyon a %{host} te pèdi. Tanpri asire w ke ou konekte sou entènèt epi eseye ankò.",logged_out:"Ou pa konekte pou kounye a, petèt se akòz yon peryòd tan san aktivite.",unhandled:"Oops! Dènye demann lan pa fonksyone."},links:{details:"detay",login:"Koneksyon"},no_text:"San tèks"}},hy:{ajax_errors:{error_heading:"Ajax սխալ՝ %{status_code}",errors:{connection_lost:"%{host}-ի հետ միացումը կորավ: Համոզվեք, որ միացել եք Ինտերնետին և կրկին փորձեք:",logged_out:"Ներկայումս դուք համակարգում չեք, հնարավոր է, երկար ժամանակ գործողությունների բացակայության պատճառով:",unhandled:"Օյ, վերջին հարցումը անհաջող էր:"},links:{details:"մանրամասներ...",login:"Մուտք համակարգ"},no_text:"Տեքստ չկա"}},is:{ajax_errors:{error_heading:"Ajax-villa: %{status_code}",errors:{connection_lost:"Tenging við %{host} rofnaði. Gættu þess að hafa nettengingu og reyndu aftur.",logged_out:"Þú ert ekki með innskráningu, sennilega vegna langs tímabils óvirkni.",unhandled:"Þessi síðasta beiðni tókst ekki."},links:{details:"upplýsingar...",login:"Innskráning"},no_text:"Enginn texti"}},it:{ajax_errors:{error_heading:"Errore Ajax: %{status_code}",errors:{connection_lost:"Connessione a %{host} persa.  Assicurati di essere connesso a Internet e riprova.",logged_out:"Attualmente non sei connesso, probabilmente a causa di un lungo periodo di inattività.",unhandled:"Spiacenti. L'ultima richiesta non ha funzionato."},links:{details:"dettagli...",login:"Accedi"},no_text:"Nessun testo"}},ja:{ajax_errors:{error_heading:"Ajax エラー: %{status_code}",errors:{connection_lost:"%{host} への接続が失われました。インターネットに接続していることを確認してから、もう一度試してください。",logged_out:"現在ログインしていません。おそらく非アクティブの期間が長く続いたためと思われます。",unhandled:"問題が発生しました!前回の要求は失敗しています。"},links:{details:"詳細...",login:"ログイン"},no_text:"テキストはありません"}},ko:{ajax_errors:{error_heading:"Ajax 오류: %{status_code}",errors:{connection_lost:"%{host}와의 연결이 끊어졌습니다. 인터넷에 연결되어 있는지 확인하고 다시 시도하시기 바랍니다.",unhandled:"마지막 요청이 동작하지 않았습니다."},links:{details:"세부 정보",login:"로그인"},no_text:"텍스트 없음"}},mi:{ajax_errors:{error_heading:"Hapa Ajax: %{status_code}",errors:{connection_lost:"I ngaro hononga ki %{host}. Tēnā kia tūhono koe ki te Ipurangi, me te ngana anō.",logged_out:"E kore Kua takiuru koe i roto i, pea e tika ana ki te hohekore te wā roa.",unhandled:"Oops! Kihai i mahi i roto i te tono whakamutunga."},links:{details:"taipitopito ...",login:"Kuhunga"},no_text:"Kāore he kuputuhi"}},nb:{ajax_errors:{error_heading:"Ajax avvik: %{status_code}",errors:{connection_lost:"Tilkobling til %{host} ble brutt.  Sjekk at du er tilkoblet Internett og forsøk igjen.",logged_out:"Du er ikke logget inn, eventuelt på grunn av en lang periode av inaktivitet.",unhandled:"Oops! Den siste forespørselen fungerte ikke."},links:{details:"detaljer...",login:"Logg inn"},no_text:"Ingen tekst"}},nl:{ajax_errors:{error_heading:"Ajax-fout: %{status_code}",errors:{connection_lost:"Verbinding met %{host} is verbroken. Controleer of er verbinding is met internet en probeer het opnieuw.",logged_out:"Je bent momenteel niet aangemeld, mogelijk als gevolg van een lange periode van inactiviteit.",unhandled:"Oeps! Het laatste verzoek is mislukt."},links:{details:"details...",login:"Aanmelden"},no_text:"Geen tekst"}},nn:{ajax_errors:{error_heading:"AJAX-feil: %{status_code}",errors:{connection_lost:"Tilkopling til %{host} er tapt.  Kontroller om du er tilkopla Internett og prøv på nytt.",logged_out:"Du er ikkje pålogga akkurat no, kanskje på grunn av ei lang periode utan aktivitet.",unhandled:"Ops! Den siste førespurnaden fungerte ikkje."},links:{details:"detaljar...",login:"Pålogging"},no_text:"Ingen tekst"}},pl:{ajax_errors:{error_heading:"Błąd programu Ajax: %{status_code}",errors:{connection_lost:"Utracono połączenie z %{host}.  Sprawdź połączenie z Internetem i spróbuj ponownie.",logged_out:"Uczestnik nie jest teraz zalogowany, prawdopodobnie z powodu długiego okresu nieaktywności.",unhandled:"Niestety! Ostatnie żądanie nie zostało zrealizowane."},links:{details:"informacje szczegółowe...",login:"Zaloguj"},no_text:"Brak tekstu"}},pt:{ajax_errors:{error_heading:"Erro Ajax: %{status_code}",errors:{connection_lost:"A ligação a %{host} foi perdida.  Verifique se está ligado à Internet e tente novamente.",logged_out:"Não tem sessão iniciada de momento, possivelmente devido a um longo período de inatividade.",unhandled:"Oops! A última solicitação não funcionou."},links:{details:"detalhes...",login:"Iniciar sessão"},no_text:"Nenhum texto"}},"pt-BR":{ajax_errors:{error_heading:"Erro Ajax: %{status_code}",errors:{connection_lost:"A conexão com %{host} foi perdida. Verifique se você está conectado com a Internet e tente novamente.",logged_out:"Você não está registrado atualmente, talvez por um período grande de inatividade.",unhandled:"Oops! A última solicitação não funcionou."},links:{details:"detalhes...",login:"Login"},no_text:"Nenhum texto"}},ru:{ajax_errors:{error_heading:"Ошибка Ajax: %{status_code}",errors:{connection_lost:"Подключение к %{host} было потеряно.  Убедитесь, что вы подключены к Интернету, и повторите попытку.",logged_out:"В настоящее время вы не находитесь в системе, возможно, из-за отсутствия действий в течение длительного времени.",unhandled:"Ой! Последний запрос не сработал."},links:{details:"сведения...",login:"Вход в систему"},no_text:"Нет текста"}},sv:{ajax_errors:{error_heading:"Ajax fel: %{status_code}",errors:{connection_lost:"Anslutningen till %{host} förlorades. Vänligen kontrollera att du är ansluten till Internet och försök igen.",logged_out:"Du är för närvarande inte inloggad, förmodligen på grund av en lång period av inaktivitet.",unhandled:"Oj! Den senaste förfrågan fungerade inte."},links:{details:"detaljer...",login:"Logga in"},no_text:"Ingen text"}},tr:{ajax_errors:{error_heading:"Ajax Hatası: %{status_code}",errors:{connection_lost:"%{host} sunucusuna bağlantı kayboldu. İnternet'e bağlı olduğunuzdan emin olun ve tekrar deneyin.",logged_out:"Şu anda oturumunuz açık değil. Muhtemelen uzun süre hiçbir şey yapmadınız.",unhandled:"Oops! Son istek çalıştırılamadı."},links:{details:"ayrıntılar...",login:"Oturum Aç"},no_text:"Metin yok"}},"zh-Hans":{ajax_errors:{error_heading:"Ajax 错误: %{status_code}",errors:{connection_lost:"到 %{host} 的连接丢失。请确保已连接到 Internet，然后重试。",logged_out:"您当前尚未登录，可能是非活动时间太长所致。",unhandled:"噢！上一个请求未解决。"},links:{details:"详细信息...",login:"登录"},no_text:"无文本"}},"zh-Hant":{ajax_errors:{error_heading:"Ajax 錯誤：%{status_code}",errors:{connection_lost:"至 %{host} 的連接失敗。請確保已連接至 Internet，然後再試一次。",logged_out:"您當前未登入，可能是因為您長時間沒有操作。",unhandled:"哎呀！最後一個要求沒有成功。"},links:{details:"詳細資料…",login:"登入"},no_text:"無文字"}}}})},PYCyImFiAC:function(e,t,n){"use strict"
var i=a(n("whMk0QU2To")),r=a(n("mOY9BNujNR"))
n("Q4xR9Iqymk")
function a(e){return e&&e.__esModule?e:{default:e}}(0,r.default)(document).ready(function(){var e=0,t=window.ENV.page_view_update_url
s=!1
i.default.interaction_contexts={}
if(document.cookie&&document.cookie.match(/last_page_view/)){var n=document.cookie.match(/last_page_view=([^;]+)/)
if(n&&n[1])try{var a=r.default.parseJSON(unescape(n[1]))
a&&a.url&&a.seconds&&setTimeout(function(){r.default.ajaxJSON(a.url,"PUT",{interaction_seconds:a.seconds},function(){},function(){},3e3)})}catch(e){}document.cookie="last_page_view=; Path=/; expires=Thu, 01-Jan-1970 00:00:01 GMT"}if(t){var o,u=0;(0,r.default)(document).bind("page_view_update_url_received",function(e,n){t=n});(0,r.default)(document).bind("page_view_update",function(n,i){var a={}
if(i||e>10&&u<300){a.interaction_seconds=e
r.default.ajaxJSON(t,"PUT",a,null,function(e,t){422===t.status&&clearInterval(o)})
e=0}})
o=setInterval(function(){(0,r.default)(document).triggerHandler("page_view_update")},3e5)
window.addEventListener("beforeunload",function(n){if(e>30){var i=JSON.stringify({url:t,seconds:e})
document.cookie="last_page_view="+escape(i)+"; Path=/;"}})
var s=!1;(0,r.default)(document).bind("mousemove keypress mousedown focus",function(){s=!0})
setInterval(function(){if(s){e++
i.default&&i.default.interaction_context&&i.default.interaction_contexts&&(i.default.interaction_contexts[i.default.interaction_context]=(i.default.interaction_contexts[i.default.interaction_context]||0)+1)
s=!1
if(u>=300){u=0;(0,r.default)(document).triggerHandler("page_view_update")}u=0}else u++},1e3)}})},"QE/xL6drvs":function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
if(ENV.ping_url)var o=setInterval(function(){document.hidden||a.default.post(ENV.ping_url).fail(function(e){401===e.status&&clearInterval(o)})},18e4)},QfIG3OPdTK:function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
n("O9QjtziI9Q")
n("1YHB9uvbU1")
n("Nf4R7G01V5")
var o=n("i8I74pbaWm")
var u,s,l,d=(u={"left+":"right-","left-":"right+",left:"right","right+":"left-","right-":"left+",right:"left"},s=new RegExp(Object.keys(u).map(function(e){return e.replace(/[\-\+]/g,"\\$&")}).join("|")),l=function(e){return e.replace(s,function(e){return u[e]||e})},function(e,t){if((0,o.isRTL)(e)){t.my=l(t.my)
t.at=l(t.at)}}),c=0
a.default.widget("ui.tooltip",{version:"@VERSION",options:{content:function(){return(0,a.default)(this).attr("title")},hide:!0,items:"[title]",position:{my:"left+15 center",at:"right center",collision:"flipfit flipfit"},show:!0,tooltipClass:null,track:!1,close:null,open:null},_create:function(){d(this.element[0],this.options.position)
this._on({mouseover:"open",focusin:"open"})
this.tooltips={}},_setOption:function(e,t){if("disabled"!==e)this._super(e,t)
else{this[t?"_disable":"_enable"]()
this.options[e]=t}},_disable:function(){var e=this
a.default.each(this.tooltips,function(t,n){var i=a.default.Event("blur")
i.target=i.currentTarget=n[0]
e.close(i,!0)})
this.element.find(this.options.items).andSelf().each(function(){var e=(0,a.default)(this)
e.is("[title]")&&e.data("ui-tooltip-title",e.attr("title")).attr("title","")})},_enable:function(){this.element.find(this.options.items).andSelf().each(function(){var e=(0,a.default)(this)
e.data("ui-tooltip-title")&&e.attr("title",e.data("ui-tooltip-title"))})},open:function(e){var t,n=this,i=(0,a.default)(e?e.target:this.element).closest(this.options.items)
if(i.length)if(this.options.track&&i.data("ui-tooltip-id"))this._find(i).position(a.default.extend({of:i},this.options.position))
else{i.attr("title")&&i.data("ui-tooltip-title",i.attr("title"))
i.data("tooltip-open",!0);(t=this.options.content.call(i[0],function(t){i.data("tooltip-open")&&setTimeout(function(){n._open(e,i,t)},1)}))&&n._open(e,i,t)}},_open:function(e,t,n){var i,r
if(n)if((i=this._find(t)).length)i.find(".ui-tooltip-content").html(n)
else{t.is("[title]")&&(e&&"mouseover"===e.type?t.attr("title",""):t.removeAttr("title"))
i=this._tooltip(t)
!function(e,t){var n=(e.attr("aria-describedby")||"").split(/\s+/)
n.push(t)
e.data("ui-tooltip-id",t).attr("aria-describedby",a.default.trim(n.join(" ")))}(t,i.attr("id"))
i.find(".ui-tooltip-content").html(n)
if(this.options.track&&e&&/^mouse/.test(e.originalEvent.type)){r=a.default.extend({},this.options.position)
this._on(this.document,{mousemove:o})
o(e)}else i.position(a.default.extend({of:t},this.options.position))
i.hide()
this._show(i,this.options.show)
this._trigger("open",e,{tooltip:i})
this._on(t,{mouseleave:"close",focusout:"close",keyup:function(e){if(e.keyCode===a.default.ui.keyCode.ESCAPE){var n=a.default.Event(e)
n.currentTarget=t[0]
this.close(n,!0)}}})}function o(e){r.of=e
i.position(r)}},close:function(e,t){var n=this,i=(0,a.default)(e?e.currentTarget:this.element),r=this._find(i)
if(!this.closing&&(t||!e||"focusout"===e.type||this.document[0].activeElement!==i[0])){i.data("ui-tooltip-title")&&i.attr("title",i.data("ui-tooltip-title"))
!function(e){var t=e.data("ui-tooltip-id"),n=(e.attr("aria-describedby")||"").split(/\s+/),i=a.default.inArray(t,n);-1!==i&&n.splice(i,1)
e.removeData("ui-tooltip-id");(n=a.default.trim(n.join(" ")))?e.attr("aria-describedby",n):e.removeAttr("aria-describedby")}(i)
r.stop(!0)
this._hide(r,this.options.hide,function(){(0,a.default)(this).remove()
delete n.tooltips[this.id]})
i.removeData("tooltip-open")
this._off(i,"mouseleave focusout keyup")
this._off(this.document,"mousemove")
this.closing=!0
this._trigger("close",e,{tooltip:r})
this.closing=!1}},_tooltip:function(e){var t="ui-tooltip-"+c++,n=(0,a.default)("<div>").attr({id:t,role:"tooltip"}).addClass("ui-tooltip ui-widget ui-corner-all ui-widget-content "+(this.options.tooltipClass||""));(0,a.default)("<div>").addClass("ui-tooltip-content").appendTo(n)
n.appendTo(this.document[0].body)
a.default.fn.bgiframe&&n.bgiframe()
this.tooltips[t]=e
return n},_find:function(e){var t=e.data("ui-tooltip-id")
return t?(0,a.default)("#"+t):(0,a.default)()},_destroy:function(){a.default.each(this.tooltips,function(e){(0,a.default)("#"+e).remove()})}})},"SAJYeZn/X9":function(e,t,n){var i
void 0!==(i=function(){return function(e,t,n){(function(e,t){return e&&void 0!==e[t]})(n,e)&&(t[e]=n[e])}}.apply(t,[]))&&(e.exports=i)},Swn6SeDoYc:function(e,t,n){var i,r,a=function(e,t){return function(){return e.apply(t,arguments)}}
i=[n("mOY9BNujNR")],void 0!==(r=function(e){return function(){function t(){this.loadSession=a(this.loadSession,this)}t.prototype.loadSession=function(t,n,i){var r
n
i
e.ajaxJSON(t,"POST",{},(r=this,function(e){if(e.ks){e.ui_conf_id=INST.kalturaSettings.upload_ui_conf
r.kalturaSession=e
return n.call()}return i.call()}))
return!0}
t.prototype.generateUploadOptions=function(t){return{kaltura_session:this.kalturaSession,allowedMediaTypes:t,uploadUrl:this.kalturaUrl("/index.php/partnerservices2/upload"),entryUrl:this.kalturaUrl("/index.php/partnerservices2/addEntry"),uiconfUrl:this.kalturaUrl("/index.php/partnerservices2/getuiconf"),entryDefaults:{partnerData:e.mediaComment.partnerData()}}}
t.prototype.kalturaUrl=function(e){return location.protocol+"//"+INST.kalturaSettings.domain+e}
return t}()}.apply(t,i))&&(e.exports=r)},TEJtO8kTF9:function(e,t,n){var i,r
i=[n("mOY9BNujNR"),n("2JPOf+YwLj")],void 0!==(r=function(e,t){return function(){function n(){}n.prototype.loadTabs=function(n){n(t())
return e("#media_comment_dialog")}
return n}()}.apply(t,i))&&(e.exports=r)},TYNg0f0fQv:function(e,t,n){var i
void 0!==(i=function(){var e=0
function t(e){return i(n(r(e)))}function n(e){return o(u(a(e),8*e.length))}function i(t){for(var n,i=e?"0123456789ABCDEF":"0123456789abcdef",r="",a=0;a<t.length;a++){n=t.charCodeAt(a)
r+=i.charAt(n>>>4&15)+i.charAt(15&n)}return r}function r(e){for(var t,n,i="",r=-1;++r<e.length;){t=e.charCodeAt(r)
n=r+1<e.length?e.charCodeAt(r+1):0
if(55296<=t&&t<=56319&&56320<=n&&n<=57343){t=65536+((1023&t)<<10)+(1023&n)
r++}t<=127?i+=String.fromCharCode(t):t<=2047?i+=String.fromCharCode(192|t>>>6&31,128|63&t):t<=65535?i+=String.fromCharCode(224|t>>>12&15,128|t>>>6&63,128|63&t):t<=2097151&&(i+=String.fromCharCode(240|t>>>18&7,128|t>>>12&63,128|t>>>6&63,128|63&t))}return i}function a(e){for(var t=Array(e.length>>2),n=0;n<t.length;n++)t[n]=0
for(n=0;n<8*e.length;n+=8)t[n>>5]|=(255&e.charCodeAt(n/8))<<n%32
return t}function o(e){for(var t="",n=0;n<32*e.length;n+=8)t+=String.fromCharCode(e[n>>5]>>>n%32&255)
return t}function u(e,t){e[t>>5]|=128<<t%32
e[14+(t+64>>>9<<4)]=t
for(var n=1732584193,i=-271733879,r=-1732584194,a=271733878,o=0;o<e.length;o+=16){var u=n,s=i,_=r,p=a
i=f(i=f(i=f(i=f(i=c(i=c(i=c(i=c(i=d(i=d(i=d(i=d(i=l(i=l(i=l(i=l(i,r=l(r,a=l(a,n=l(n,i,r,a,e[o+0],7,-680876936),i,r,e[o+1],12,-389564586),n,i,e[o+2],17,606105819),a,n,e[o+3],22,-1044525330),r=l(r,a=l(a,n=l(n,i,r,a,e[o+4],7,-176418897),i,r,e[o+5],12,1200080426),n,i,e[o+6],17,-1473231341),a,n,e[o+7],22,-45705983),r=l(r,a=l(a,n=l(n,i,r,a,e[o+8],7,1770035416),i,r,e[o+9],12,-1958414417),n,i,e[o+10],17,-42063),a,n,e[o+11],22,-1990404162),r=l(r,a=l(a,n=l(n,i,r,a,e[o+12],7,1804603682),i,r,e[o+13],12,-40341101),n,i,e[o+14],17,-1502002290),a,n,e[o+15],22,1236535329),r=d(r,a=d(a,n=d(n,i,r,a,e[o+1],5,-165796510),i,r,e[o+6],9,-1069501632),n,i,e[o+11],14,643717713),a,n,e[o+0],20,-373897302),r=d(r,a=d(a,n=d(n,i,r,a,e[o+5],5,-701558691),i,r,e[o+10],9,38016083),n,i,e[o+15],14,-660478335),a,n,e[o+4],20,-405537848),r=d(r,a=d(a,n=d(n,i,r,a,e[o+9],5,568446438),i,r,e[o+14],9,-1019803690),n,i,e[o+3],14,-187363961),a,n,e[o+8],20,1163531501),r=d(r,a=d(a,n=d(n,i,r,a,e[o+13],5,-1444681467),i,r,e[o+2],9,-51403784),n,i,e[o+7],14,1735328473),a,n,e[o+12],20,-1926607734),r=c(r,a=c(a,n=c(n,i,r,a,e[o+5],4,-378558),i,r,e[o+8],11,-2022574463),n,i,e[o+11],16,1839030562),a,n,e[o+14],23,-35309556),r=c(r,a=c(a,n=c(n,i,r,a,e[o+1],4,-1530992060),i,r,e[o+4],11,1272893353),n,i,e[o+7],16,-155497632),a,n,e[o+10],23,-1094730640),r=c(r,a=c(a,n=c(n,i,r,a,e[o+13],4,681279174),i,r,e[o+0],11,-358537222),n,i,e[o+3],16,-722521979),a,n,e[o+6],23,76029189),r=c(r,a=c(a,n=c(n,i,r,a,e[o+9],4,-640364487),i,r,e[o+12],11,-421815835),n,i,e[o+15],16,530742520),a,n,e[o+2],23,-995338651),r=f(r,a=f(a,n=f(n,i,r,a,e[o+0],6,-198630844),i,r,e[o+7],10,1126891415),n,i,e[o+14],15,-1416354905),a,n,e[o+5],21,-57434055),r=f(r,a=f(a,n=f(n,i,r,a,e[o+12],6,1700485571),i,r,e[o+3],10,-1894986606),n,i,e[o+10],15,-1051523),a,n,e[o+1],21,-2054922799),r=f(r,a=f(a,n=f(n,i,r,a,e[o+8],6,1873313359),i,r,e[o+15],10,-30611744),n,i,e[o+6],15,-1560198380),a,n,e[o+13],21,1309151649),r=f(r,a=f(a,n=f(n,i,r,a,e[o+4],6,-145523070),i,r,e[o+11],10,-1120210379),n,i,e[o+2],15,718787259),a,n,e[o+9],21,-343485551)
n=h(n,u)
i=h(i,s)
r=h(r,_)
a=h(a,p)}return Array(n,i,r,a)}function s(e,t,n,i,r,a){return h((o=h(h(t,e),h(i,a)))<<(u=r)|o>>>32-u,n)
var o,u}function l(e,t,n,i,r,a,o){return s(t&n|~t&i,e,t,r,a,o)}function d(e,t,n,i,r,a,o){return s(t&i|n&~i,e,t,r,a,o)}function c(e,t,n,i,r,a,o){return s(t^n^i,e,t,r,a,o)}function f(e,t,n,i,r,a,o){return s(n^(t|~i),e,t,r,a,o)}function h(e,t){var n=(65535&e)+(65535&t)
return(e>>16)+(t>>16)+(n>>16)<<16|65535&n}return{encrypt:t}}.apply(t,[]))&&(e.exports=i)},UFR79ninI6:function(e,t,n){var i,r
i=[n("j1K+QE411H"),n("wmdTCqkKx2"),n("5iYkB5tAnT")],void 0!==(r=function(e,t,n){function i(){this.sessionData=new n}i.prototype.loadSession=function(){var e=new XMLHttpRequest
e.open("POST",t.sessionUrl,!0)
e.responseType="json"
e.onload=this.onSessionLoaded.bind(this)
e.send()}
i.prototype.onSessionLoaded=function(t){var n=t.target
if(200==n.status){this.sessionData.setSession(n.response)
e.dispatchEvent("SessionManager.complete",this.sessionData,this)}else e.dispatchEvent("SessionManager.error")}
i.prototype.getSession=function(){return this.sessionData}
return i}.apply(t,i))&&(e.exports=r)},V0DFOiAOkw:function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
n("VHZX6oywWS")
var o=a.default.ui.menu.prototype,u=o.refresh
a.default.extend(o,{refresh:function(){u.call(this)
var e=this,t=this.element.find("li.ui-menu-item"),n=!1
this.element.bind("click.menu",function(e){new RegExp(/^a$/i).test(e.target.tagName)||e.preventDefault()})
var i=0
this.element.find("input[type='checkbox'], input[type='radio']").each(function(){var e=(0,a.default)(this).closest("label")
if(e.length){(0,a.default)(this).insertBefore(e);(0,a.default)(this).attr("id")||(0,a.default)(this).attr("id","ui-input-"+i++)
e.attr("for",(0,a.default)(this).attr("id"))}})
this.element.bind("menufocus",function(e){var t=(0,a.default)(e.target).find("a.ui-state-focus").children("input[type='text']")
t.length&&t[0].focus()})
this.element.bind("popupopen",function(t){var n=(0,a.default)(t.target).find("input[type=radio][checked]").closest(".ui-menu-item")
n.length&&setTimeout(function(){e.focus(t,n)},0)}).bind("menublur",function(e){var t=(0,a.default)(e.target).find("input[type='text']:focus")
t.length&&t[0].blur()})
t.children("a").each(function(e,t){var i=(0,a.default)(t),r=i.parent()
if(i.children().is("input[type='checkbox'], input[type='radio']")){i.closest("ul").addClass("ui-menu-icons")
if(i.children("input[type='checkbox']").is(":checked")){i.prepend('<span class="ui-icon ui-icon-check"></span>')
r.attr({role:"menuitemcheckbox","aria-checked":"true"})}else if(i.children("input[type='radio']").is(":checked")){i.prepend('<span class="ui-icon ui-icon-radio-on"></span>')
r.attr({role:"menuitemradio","aria-checked":"true"})}else if(i.children("input[type='radio']").length){i.prepend('<span class="ui-icon ui-icon-radio-off"></span>')
r.attr({role:"menuitemradio","aria-checked":"false"})}else r.attr({role:"menuitemcheckbox","aria-checked":"false"})
i.children().is("input[type='radio']")&&r.attr("radio-group",i.children("input[type='radio']").attr("name"))
if(r.prev().length&&!r.prev().children("a").length){r.prev().addClass("ui-state-disabled").html("<span class='ui-menu-input-group'>"+r.prev().html()+"</span>").bind("click.menu",function(e){return!1}).after("<li><hr /></li>")
n=!0}else r.prev().length&&!r.prev().children("a").children().is("input[type='checkbox'], input[type='radio']")&&r.before("<li><hr /></li>")
if(n&&r.next().length&&!r.next().children("a").children().is("input[type='checkbox'], input[type='radio']")){r.after("<li><hr /></li>")
n=!1}else r.next().length&&!r.next().children("a").children().is("input[type='checkbox'], input[type='radio']")&&r.after("<li><hr /></li>")
i.children("input[type='checkbox'], input[type='radio']").hide()}})
t.bind("keydown.menu",function(t){if(t.keyCode===a.default.ui.keyCode.SPACE){if(e.active.children("a").children().is("input[type='checkbox'], input[type='radio']")){e.select(t)
t.stopImmediatePropagation()}t.preventDefault()}})
t.find("input[type='text']").bind("keydown",function(t){t.stopPropagation()
if(t.keyCode===a.default.ui.keyCode.UP){e.element.trigger("focus")
this.blur()
e.focus(t,(0,a.default)(this).closest(".ui-menu-item").prev())}if(t.keyCode===a.default.ui.keyCode.DOWN){e.element.trigger("focus")
this.blur()
e.focus(t,(0,a.default)(this).closest(".ui-menu-item").next())}}).bind("click",function(e){e.stopPropagation()})},select:function(e){var t={item:this.active||(0,a.default)(e.target).closest(".ui-menu-item")}
if(t.item.children("a").children().is("input[type='checkbox']"))if("false"===t.item.attr("aria-checked")){t.item.children("a").prepend('<span class="ui-icon ui-icon-check"></span>')
t.item.attr("aria-checked","true")
t.item.children("a").children("input[type='checkbox']").prop("checked","checked").trigger("change")}else if("true"===t.item.attr("aria-checked")){t.item.children("a").children("span.ui-icon-check").remove()
t.item.attr("aria-checked","false")
t.item.children("a").children("input[type='checkbox']").removeAttr("checked").trigger("change")}if(t.item.children("a").children().is("input[type='radio']")&&"false"===t.item.attr("aria-checked")){t.item.children("a").children("span.ui-icon-radio-off").toggleClass("ui-icon-radio-on ui-icon-radio-off")
t.item.attr("aria-checked","true")
t.item.children("a").children("input[type='radio']").prop("checked","checked").trigger("change")
t.item.siblings("[radio-group="+(0,a.default)(t.item).attr("radio-group")+"]").each(function(){(0,a.default)(this).attr("aria-checked","false");(0,a.default)(this).children("a").children("span.ui-icon-radio-on").toggleClass("ui-icon-radio-on ui-icon-radio-off");(0,a.default)(this).children("a").children("input[type='radio']").removeAttr("checked")})}t.item.children("a").children().is("input[type='checkbox'], input[type='radio']")||this.collapseAll()
this._trigger("select",e,t)}})},VDPlEqaRwD:function(e,t,n){"use strict"
var i=l(n("mOY9BNujNR")),r=l(n("iBw8ZGM6v8")),a=l(n("klGFYzYm7x")),o=l(n("cyMNwMhBvy")),u=l(n("ir8pL/Ro1S")),s=n("/rriEg1pXh")
n("XDPawBHrta")
n("Q4xR9Iqymk")
n("Q/pI8WL7wG")
n("FjPpBpSp8P")
n("pwv1UBr9wT")
n("BIYSGtzGjH")
n("WskX5tno7F")
n("PYCyImFiAC")
n("OHJtctF3NN")
n("zr2HOwddfD")
n("EKuPgEpL6b")
n("KPRNYFd0CF")
n("FMOK6cJcp3")
n("q97HwXzRnE")
n("2aUY+gHXYk")
n("CU+gNa7iD4")
n("QE/xL6drvs")
n("LShObMQJhT")
n("Eq7qibUFi3")
n("50cA3losjn")
n("OGUJHwbmJb")
n("K/mYXqZAKq")
n("11DZr9oB9c")
n("oxTDiksfqi")
n("a+Os3Kvywv")
n("PJh52PO9+b")
function l(e){return e&&e.__esModule?e:{default:e}}(0,i.default)("html").removeClass("scripts-not-loaded");(0,i.default)(".help_dialog_trigger").click(function(e){e.preventDefault()
n.e(20).then(function(e){n("il47VCngrj").open()}.bind(null,n)).catch(n.oe)});(0,i.default)("#skip_navigation_link").on("click",function(e){e.preventDefault();(0,i.default)((0,i.default)(this).attr("href")).attr("tabindex",-1).focus()})
var d=1200
function c(){var e=(0,i.default)("body").hasClass("course-menu-expanded")||(0,i.default)(document).width()>=d-15?0:-1;(0,i.default)("#section-tabs li a").attr("tabIndex",e)}(0,i.default)(c);(0,i.default)(window).on("resize",r.default.debounce(c,50));(0,i.default)("body").on("click","#courseMenuToggle",function(){(0,i.default)("body").toggleClass("course-menu-expanded");(0,o.default)();(0,i.default)("#left-side").css({display:(0,i.default)("body").hasClass("course-menu-expanded")?"block":"none"})
c()});(0,i.default)("body").on("click","[data-pushstate]",function(e){e.preventDefault()
a.default.history.navigate((0,i.default)(this).attr("href"),!0)})
window.ENV.NEW_USER_TUTORIALS&&window.ENV.NEW_USER_TUTORIALS.is_enabled&&window.ENV.context_asset_string&&"courses"===(0,u.default)(window.ENV.context_asset_string)[0]&&n.e(14).then(function(e){n("72sEc2o3li")()}.bind(null,n)).catch(n.oe)
!(window.navigator.userAgent.indexOf("Edge")>-1)&&window.CSS&&window.CSS.supports&&window.CSS.supports("(--foo: red)")||n.e(22).then(function(e){window.canvasCssVariablesPolyfill=n("yLhLh4Z3xO")}.bind(null,n)).catch(n.oe);(0,i.default)(function(){(0,s.isMathMLOnPage)()&&(0,s.loadMathJax)("MML_HTMLorMML.js")})},VHZX6oywWS:function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
n("O9QjtziI9Q")
n("1YHB9uvbU1")
function o(){return[].some.call((0,a.default)(this).parents().andSelf(),function(e){return"none"==a.default.css(e,"display")})}var u=!1
a.default.widget("ui.menu",{version:"@VERSION",defaultElement:"<ul>",delay:300,options:{icons:{submenu:"ui-icon-carat-1-e"},menus:"ul",position:{my:"left top",at:"right top"},role:"menu",blur:null,focus:null,select:null},_create:function(){this.activeMenu=this.element
this.element.uniqueId().addClass("ui-menu ui-widget ui-widget-content ui-corner-all").toggleClass("ui-menu-icons",!!this.element.find(".ui-icon").length).attr({role:this.options.role,tabIndex:0}).bind("click"+this.eventNamespace,a.default.proxy(function(e){this.options.disabled&&e.preventDefault()},this))
this.options.disabled&&this.element.addClass("ui-state-disabled").attr("aria-disabled","true")
this._on({"mousedown .ui-menu-item > a":function(e){e.preventDefault()},"click .ui-state-disabled > a":function(e){e.preventDefault()},"click .ui-menu-item:has(a)":function(e){var t=(0,a.default)(e.target)
if(!u&&t.closest(".ui-menu-item").not(".ui-state-disabled").length){u=!0
this.select(e)
this.element.has(".ui-menu").length?this.expand(e):this.element.is(":focus")||this.element.focus()}},"mouseenter .ui-menu-item":function(e){var t=(0,a.default)(e.currentTarget)
t.siblings().children(".ui-state-active").removeClass("ui-state-active")
this.focus(e,t)},mouseleave:"collapseAll","mouseleave .ui-menu":"collapseAll",focus:function(e){var t=this.active||this.element.children(".ui-menu-item").not(o).eq(0)
t.length&&this.focus(e,t)},blur:function(e){this._delay(function(){a.default.contains(this.element[0],this.document[0].activeElement)||this.collapseAll(e)})},keydown:"_keydown"})
this.refresh()
this._on(this.document,{click:function(e){(0,a.default)(e.target).closest(".ui-menu").length||this.collapseAll(e)
u=!1}})},_destroy:function(){this.element.removeAttr("aria-activedescendant").find(".ui-menu").andSelf().removeClass("ui-menu ui-widget ui-widget-content ui-corner-all ui-menu-icons").removeAttr("role").removeAttr("tabIndex").removeAttr("aria-labelledby").removeAttr("aria-expanded").removeAttr("aria-hidden").removeAttr("aria-disabled").removeUniqueId().show()
this.element.find(".ui-menu-item").removeClass("ui-menu-item").removeAttr("role").removeAttr("aria-disabled").children("a").removeUniqueId().removeClass("ui-corner-all ui-state-hover").removeAttr("tabIndex").removeAttr("role").removeAttr("aria-haspopup").children().each(function(){var e=(0,a.default)(this)
e.data("ui-menu-submenu-carat")&&e.remove()})
this.element.find(".ui-menu-divider").removeClass("ui-menu-divider ui-widget-content")},_keydown:function(e){var t,n,i,r,u,s=!0
function l(e){return e.replace(/[\-\[\]{}()*+?.,\\\^$|#\s]/g,"\\$&")}switch(e.keyCode){case a.default.ui.keyCode.PAGE_UP:this.previousPage(e)
break
case a.default.ui.keyCode.PAGE_DOWN:this.nextPage(e)
break
case a.default.ui.keyCode.HOME:this._move("first","first",e)
break
case a.default.ui.keyCode.END:this._move("last","last",e)
break
case a.default.ui.keyCode.UP:this.previous(e)
break
case a.default.ui.keyCode.DOWN:this.next(e)
break
case a.default.ui.keyCode.LEFT:this.collapse(e)
break
case a.default.ui.keyCode.RIGHT:this.active.is(".ui-state-disabled")||this.expand(e)
break
case a.default.ui.keyCode.ENTER:case a.default.ui.keyCode.SPACE:this._activate(e)
break
case a.default.ui.keyCode.ESCAPE:this.collapse(e)
break
default:s=!1
n=this.previousFilter||""
i=String.fromCharCode(e.keyCode)
r=!1
clearTimeout(this.filterTimer)
i===n?r=!0:i=n+i
u=new RegExp("^"+l(i),"i")
t=this.activeMenu.children(".ui-menu-item").filter(function(){return u.test((0,a.default)(this).children("a").not(o).text())})
if(!(t=r&&-1!==t.index(this.active.next())?this.active.nextAll(".ui-menu-item"):t).length){i=String.fromCharCode(e.keyCode)
u=new RegExp("^"+l(i),"i")
t=this.activeMenu.children(".ui-menu-item").filter(function(){return u.test((0,a.default)(this).children("a").not(o).text())})}if(t.length){this.focus(e,t)
if(t.length>1){this.previousFilter=i
this.filterTimer=this._delay(function(){delete this.previousFilter},1e3)}else delete this.previousFilter}else delete this.previousFilter}if(s){e.stopPropagation()
e.preventDefault()}},_activate:function(e){this.active.is(".ui-state-disabled")||(this.active.children("a[aria-haspopup='true']").length?this.expand(e):this.select(e))},refresh:function(){var e,t=this.options.icons.submenu,n=this.element.find(this.options.menus+":not(.ui-menu)").addClass("ui-menu ui-widget ui-widget-content ui-corner-all").hide().attr({role:this.options.role,"aria-hidden":"true","aria-expanded":"false"});(e=n.add(this.element)).children(":not(.ui-menu-item):has(a)").addClass("ui-menu-item").attr("role","presentation").children("a").uniqueId().addClass("ui-corner-all").attr({tabIndex:-1,role:this._itemRole()})
e.children(":not(.ui-menu-item)").each(function(){var e=(0,a.default)(this);/[^\-—–\s]/.test(e.text())||e.addClass("ui-widget-content ui-menu-divider")})
e.children(".ui-state-disabled").attr("aria-disabled","true")
n.each(function(){var e=(0,a.default)(this),n=e.prev("a"),i=(0,a.default)("<span>").addClass("ui-menu-icon ui-icon "+t).data("ui-menu-submenu-carat",!0)
n.attr("aria-haspopup","true").prepend(i)
e.attr("aria-labelledby",n.attr("id"))})},_itemRole:function(){return{menu:"menuitem",listbox:"option"}[this.options.role]},focus:function(e,t){var n,i
this.blur(e,e&&"focus"===e.type)
this._scrollIntoView(t)
this.active=t.first()
i=this.active.children("a:visible").addClass("ui-state-focus")
this.options.role&&this.element.attr("aria-activedescendant",i.attr("id"))
this.active.parent().closest(".ui-menu-item").children("a:first").addClass("ui-state-active")
e&&"keydown"===e.type?this._close():this.timer=this._delay(function(){this._close()},this.delay);(n=t.children(".ui-menu")).length&&/^mouse/.test(e.type)&&this._startOpening(n)
this.activeMenu=t.parent()
this._trigger("focus",e,{item:t})},_scrollIntoView:function(e){var t,n,i,r,o,u
if(this._hasScroll()){t=parseFloat(a.default.css(this.activeMenu[0],"borderTopWidth"))||0
n=parseFloat(a.default.css(this.activeMenu[0],"paddingTop"))||0
i=e.offset().top-this.activeMenu.offset().top-t-n
r=this.activeMenu.scrollTop()
o=this.activeMenu.height()
u=e.height()
i<0?this.activeMenu.scrollTop(r+i):i+u>o&&this.activeMenu.scrollTop(r+i-o+u)}},blur:function(e,t){t||clearTimeout(this.timer)
if(this.active){this.active.children("a").removeClass("ui-state-focus")
this.active=null
this._trigger("blur",e,{item:this.active})}},_startOpening:function(e){clearTimeout(this.timer)
"true"===e.attr("aria-hidden")&&(this.timer=this._delay(function(){this._close()
this._open(e)},this.delay))},_open:function(e){var t=a.default.extend({of:this.active},this.options.position)
clearTimeout(this.timer)
this.element.find(".ui-menu").not(e.parents(".ui-menu")).hide().attr("aria-hidden","true")
e.show().removeAttr("aria-hidden").attr("aria-expanded","true").position(t)},collapseAll:function(e,t){clearTimeout(this.timer)
this.timer=this._delay(function(){var n=t?this.element:(0,a.default)(e&&e.target).closest(this.element.find(".ui-menu"))
n.length||(n=this.element)
this._close(n)
this.blur(e)
this.activeMenu=n},this.delay)},_close:function(e){e||(e=this.active?this.active.parent():this.element)
e.find(".ui-menu").hide().attr("aria-hidden","true").attr("aria-expanded","false").end().find("a.ui-state-active").removeClass("ui-state-active")},collapse:function(e){var t=this.active&&this.active.parent().closest(".ui-menu-item",this.element)
if(t&&t.length){this._close()
this.focus(e,t)}},expand:function(e){var t=this.active&&this.active.children(".ui-menu ").children(".ui-menu-item").not(o).first()
if(t&&t.length){this._open(t.parent())
this._delay(function(){this.focus(e,t)})}},next:function(e){this._move("next","first",e)},previous:function(e){this._move("prev","last",e)},isFirstItem:function(){return this.active&&!this.active.prevAll(".ui-menu-item").not(o).length},isLastItem:function(){return this.active&&!this.active.nextAll(".ui-menu-item").not(o).length},_move:function(e,t,n){var i
this.active&&(i="first"===e||"last"===e?this.active["first"===e?"prevAll":"nextAll"](".ui-menu-item").not(o).eq(-1):this.active[e+"All"](".ui-menu-item").not(o).eq(0))
i&&i.length&&this.active||(i=this.activeMenu.children(".ui-menu-item").not(o)[t]())
this.focus(n,i)},nextPage:function(e){var t,n,i
if(this.active){if(!this.isLastItem())if(this._hasScroll()){n=this.active.offset().top
i=this.element.height()
this.active.nextAll(".ui-menu-item").not(o).each(function(){return(t=(0,a.default)(this)).offset().top-n-i<0})
this.focus(e,t)}else this.focus(e,this.activeMenu.children(".ui-menu-item").not(o)[this.active?"last":"first"]())}else this.next(e)},previousPage:function(e){var t,n,i
if(this.active){if(!this.isFirstItem())if(this._hasScroll()){n=this.active.offset().top
i=this.element.height()
this.active.prevAll(".ui-menu-item").not(o).each(function(){return(t=(0,a.default)(this)).offset().top-n+i>0})
this.focus(e,t)}else this.focus(e,this.activeMenu.children(".ui-menu-item").not(o).first())}else this.next(e)},_hasScroll:function(){return this.element.outerHeight()<this.element.prop("scrollHeight")},select:function(e){var t={item:this.active||(0,a.default)(e.target).closest(".ui-menu-item")}
t.item.has(".ui-menu").length||this.collapseAll(e,!0)
this._trigger("select",e,t)}})},VcdxSyzxRH:function(e,t,n){var i,r
i=[n("mOY9BNujNR")],void 0!==(r=function(e){function t(){}t.prototype.parseXML=function(t){this.$xml=e(t)
this.determineError()
return this.$xml}
t.prototype.determineError=function(){this.isError=!!this.find("error").children().length}
t.prototype.find=function(e){return this.$xml.find(e)}
t.prototype.findRecursive=function(t){t=t.split(":")
for(var n,i=this.$xml,r=0,a=t.length;r<a;r++){if(!(n=i.find(t[r])[0])){i=void 0
break}i=e(n)}return i}
t.prototype.nodeText=function(e,t,n){var i=void 0
if(""!=t.find(e).text()){i=t.find(e).text()
!0===n&&(i=parseFloat(i))}return i}
return t}.apply(t,i))&&(e.exports=r)},WskX5tno7F:function(e,t,n){"use strict"
var i=u(n("whMk0QU2To")),r=u(n("+fL4qvKaPd")),a=u(n("mOY9BNujNR")),o=u(n("eJBzaBDd6c"))
n("Q4xR9Iqymk")
n("yR513+6+ip")
n("K/mYXqZAKq")
function u(e){return e&&e.__esModule?e:{default:e}}i.default.errorCount=0
window.onerror=function(e,t,n,r,a){i.default.errorCount+=1};(0,a.default)(document).ready(function(){(0,a.default)("#instructure_ajax_error_result").defaultAjaxError(function(e,t,n,u,s){if("abort"!==u){var l="0",d=r.default.t("no_text","No text")
try{l=t.status
d=t.responseText}catch(e){}a.default.ajaxJSON(location.protocol+"//"+location.host+"/simple_response.json?rnd="+Math.round(9999999*Math.random()),"GET",{},function(){if(a.default.ajaxJSON.isUnauthenticated(t)){var e=(0,o.default)(r.default.t("errors.logged_out","You are not currently logged in, possibly due to a long period of inactivity."))
e+="<br/><a href='/login' target='_new'>"+(0,o.default)(r.default.t("links.login","Login"))+"</a>"
a.default.flashError({html:e},3e4)}else 409!=l&&f(r.default.t("errors.unhandled","Oops! The last request didn't work out."),t)},function(){f(r.default.t("errors.connection_lost","Connection to %{host} was lost.  Please make sure you're connected to the Internet and try again.",{host:location.host}),t)},{skipDefaultError:!0})
var c=(0,a.default)(this),f=function(e,t){var n=c[0]
if(n){var u=n.contentDocument||n.contentWindow&&n.contentWindow.document||window.frames[c.attr("id")].document,f=(0,a.default)(u).find("body")
f.html((0,a.default)("<h1 />").text(r.default.t("error_heading","Ajax Error: %{status_code}",{status_code:l})))
f.append((0,o.default)(d));(0,a.default)("#instructure_ajax_error_box").hide()
e=(0,o.default)(e)
s&&(e+="<br/><span style='font-size: 0.7em;'>(Development Only)</span>");(s||"production"!=i.default.environment)&&(e+="<br/><a href='#' class='last_error_details_link'>"+(0,o.default)(r.default.t("links.details","details..."))+"</a>")
a.default.flashError({html:e})}}
window.ajaxErrorFlash=f
var h=a.default.ajaxJSON.findRequest(t)
if((h=h||{}).data){h.params=""
for(var _ in h.data)h.params+="&"+_+"="+h.data[_]}var p=""
try{p=(0,a.default)("#identity .user_name").text()}catch(e){}if(i.default.ajaxErrorURL){var m="&Msg="+escape(d)+"&StatusCode="+escape(l)+"&URL="+escape(h.url||"unknown")+"&Page="+escape(location.href)+"&Method="+escape(h.submit_type||"unknown")+"&UserName="+escape(p)+"&Platform="+escape(navigator.platform)+"&UserAgent="+escape(navigator.userAgent)+"&Params="+escape(h.params||"unknown");(0,a.default)("body").append("<img style='position: absolute; left: -1000px; top: 0;' src='"+(0,o.default)(i.default.ajaxErrorURL+m.substring(0,2e3))+"' />")}}});(0,a.default)(".last_error_details_link").live("click",function(e){e.preventDefault()
e.stopPropagation();(0,a.default)("#instructure_ajax_error_box").show()});(0,a.default)(".close_instructure_ajax_error_box_link").click(function(e){e.preventDefault();(0,a.default)("#instructure_ajax_error_box").hide()})})},YAsrg8Hfzh:function(e,t,n){var i,r,a=function(e,t){return function(){return e.apply(t,arguments)}}
i=[n("mOY9BNujNR"),n("uceVF1dIMW"),n("11DZr9oB9c"),n("kzdUuF07HD")],void 0!==(r=function(e,t){return function(){function n(){this.showConfigError=a(this.showConfigError,this)
this.onFileTypeError=a(this.onFileTypeError,this)}n.prototype.monitorUpload=function(e,t,n){this.uploader&&this.uploader!==e&&this.resetListeners()
this.uploader=e
this.allowedMedia=t
this.showProgBar()
this.showFileDetails(n)
this.uploader.addEventListener("K5.uiconfError",this.showConfigError)
this.uploader.addEventListener("K5.error",this.showConfigError)
this.uploader.addEventListener("K5.fileError",this.onFileTypeError)
return this.uploader.addEventListener("K5.progress",this.updateProgBar)}
n.prototype.resetListeners=function(){this.uploader.removeEventListener("K5.uiconfError",this.showConfigError)
this.uploader.removeEventListener("K5.error",this.showConfigError)
this.uploader.removeEventListener("K5.fileError",this.onFileTypeError)
return this.uploader.removeEventListener("K5.progress",this.updateProgBar)}
n.prototype.onFileTypeError=function(e){var n
n=e.file.size>1024*e.maxFileSize*1024?t.t("file_size_error","Size of %{file} is greater than the maximum %{max} MB allowed file size.",{file:e.file.name,max:e.maxFileSize}):t.t("file_type_error","%{file} is not an acceptable %{type} file.",{file:e.file.name,type:e.allowedMediaTypes[0]})
this.resetFileDetails()
return this.showErrorMessage(n)}
n.prototype.showConfigError=function(){var n
n=t.t("errors.media_comment_installation_broken","Media comment uploading has not been set up properly. Please contact your administrator.")
this.showErrorMessage(n)
e("#media_upload_feedback").css("visibility","visible")
e("#audio_upload_holder").css("visibility","hidden")
e("#video_upload_holder").css("visibility","hidden")
return e("#media_upload_settings").css("visibility","hidden")}
n.prototype.resetFileDetails=function(){e("#media_upload_settings").css("visibility","hidden")
e("#media_upload_title").val("")
e("#media_upload_display_title").text("")
e("#media_upload_file_size").text(e.fileSize(0))
return e("#media_upload_settings .icon").attr("src","/images/file.png")}
n.prototype.showFileDetails=function(n){if(n){e("#media_upload_feedback").css("visibility","hidden")
e("#media_upload_settings").css("visibility","visible")
e("#media_upload_title").val(n.name)
e("#media_upload_display_title").text(n.name)
e("#media_upload_file_size").text(e.fileSize(n.size))
e("#media_upload_settings .icon").attr("src","/images/file-"+this.allowedMedia[0]+".png")
return e("#media_upload_submit").attr("disabled",!0).text(t.t("messages.submitting","Submitting Media File..."))}this.resetFileDetails()}
n.prototype.showErrorMessage=function(t){this.hideProgBar()
e("#media_upload_feedback").css("visibility","visible")
return e("#media_upload_feedback_text").text(t)}
n.prototype.showProgBar=function(){return e("#media_upload_progress").css("visibility","visible").progressbar()}
n.prototype.hideProgBar=function(){return e("#media_upload_progress").css("visibility","hidden")}
n.prototype.updateProgBar=function(t){var n
n=t.loaded/t.total*100
return e("#media_upload_progress").progressbar("option","value",n)}
return n}()}.apply(t,i))&&(e.exports=r)},"a+Os3Kvywv":function(e,t,n){ENV.INCOMPLETE_REGISTRATION&&n.e(19).then(function(){var e=[n("mOY9BNujNR"),n("0sxI/h3fdS"),n("mqFaHUZWhf")];(function(e,t,n){return e(n({email:ENV.USER_EMAIL})).appendTo(e("body")).dialog({title:t.t("welcome_to_canvas","Welcome to Canvas!"),width:400,resizable:!1,buttons:[{text:t.t("get_started","Get Started"),click:function(){return e(this).dialog("close")},class:"btn-primary"}]})}).apply(null,e)}).catch(n.oe)},cyMNwMhBvy:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i,r=n("+JpRIS14Qm"),a=(i=r)&&i.__esModule?i:{default:i}
t.default=function(){var e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:window.location.pathname,t={hide:{default:a.default.t("Hide Navigation Menu"),account:a.default.t("Hide Account Navigation Menu"),admin:a.default.t("Hide Admin Navigation Menu"),courses:a.default.t("Hide Courses Navigation Menu"),groups:a.default.t("Hide Groups Navigation Menu")},show:{default:a.default.t("Show Navigation Menu"),account:a.default.t("Show Account Navigation Menu"),admin:a.default.t("Show Admin Navigation Menu"),courses:a.default.t("Show Courses Navigation Menu"),groups:a.default.t("Show Groups Navigation Menu")}},n=document.body.classList.contains("course-menu-expanded")?"hide":"show",i=t[n].default
e.match(/^\/profile/)?i=t[n].account:e.match(/^\/accounts/)?i=t[n].admin:e.match(/^\/courses/)?i=t[n].courses:e.match(/^\/groups/)&&(i=t[n].groups)
var r=document.getElementById("courseMenuToggle")
r.setAttribute("aria-label",i)
r.setAttribute("title",i)}
e.exports=t.default},"f+YlSntt6E":function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=n("36QOWIB4+W"),r=n.n(i),a=n("mOY9BNujNR")
n.n(a).a.extend(!0,r.a,{translations:{ar:{locked_image_24f37a16:"صورة مؤمّنة"},da:{locked_image_24f37a16:"Låst billede"},de:{locked_image_24f37a16:"Gesperrtes Bild"},"en-AU":{locked_image_24f37a16:"Locked image"},"en-CA":{locked_image_24f37a16:"Locked image"},"en-GB":{locked_image_24f37a16:"Locked image"},"en-GB-x-lbs":{locked_image_24f37a16:"Locked image"},"en-GB-x-ukhe":{locked_image_24f37a16:"Locked image"},es:{locked_image_24f37a16:"Imagen bloqueada"},fr:{locked_image_24f37a16:"Image verrouillée"},"fr-CA":{locked_image_24f37a16:"Image verrouillée"},ht:{locked_image_24f37a16:"Imaj Bloke"},is:{locked_image_24f37a16:"Læst mynd"},it:{locked_image_24f37a16:"Immagine bloccata"},ja:{locked_image_24f37a16:"ロックされた画像"},mi:{locked_image_24f37a16:"Āhua kua rakaina"},nb:{locked_image_24f37a16:"Låst bilde"},nl:{locked_image_24f37a16:"Vergrendelde afbeelding"},pl:{locked_image_24f37a16:"Zablokowany obraz"},pt:{locked_image_24f37a16:"Imagem bloqueada"},"pt-BR":{locked_image_24f37a16:"Imagem bloqueada"},ru:{locked_image_24f37a16:"Заблокированное изображение"},sv:{locked_image_24f37a16:"Låst bild"},"zh-Hans":{locked_image_24f37a16:"锁定图片"},"zh-Hant":{locked_image_24f37a16:"鎖定圖像"}}})},"gbrphF+ACY":function(e,t,n){var i
void 0!==(i=function(){function e(e){this.extensions=this.parseExtensions(e.extensions)
this.id=e.id
this.description=e.description
this.entryType=e.entryType
this.mediaType=e.mediaType
this.type=e.type}e.prototype.parseExtensions=function(e){return e.split(";").map(function(e){return e.substring(2)})}
e.prototype.includesExtension=function(e){return-1!==this.extensions.indexOf(e.toLowerCase())}
e.prototype.toParams=function(){return{entry1_type:this.entryType,entry1_mediaType:this.mediaType}}
return e}.apply(t,[]))&&(e.exports=i)},"j1K+QE411H":function(e,t,n){var i,r
i=[n("vCQJ/Q6HMW")],void 0!==(r=function(e){return new e}.apply(t,i))&&(e.exports=r)},jksFm8iyi3:function(e,t,n){var i,r
i=[n("vs40FT3DsF"),n("UFR79ninI6"),n("5iYkB5tAnT"),n("j1K+QE411H"),n("vCQJ/Q6HMW"),n("jmveEUdviC"),n("DGHOX4S35d"),n("wmdTCqkKx2")],void 0!==(r=function(e,t,n,i,r,a,o,u){function s(e){r.decorate(this)
u.setOptions(e)
this.buildDependencies()
this.addListeners()
this.session.setSession(e.kaltura_session)
this.loadUiConf()}s.prototype.destroy=function(){i.destroy()
this.session=void 0
this.entryService=void 0
this.uiconfService=void 0}
s.prototype.buildDependencies=function(){this.session=new n
this.entryService=new a
this.uiconfService=new o}
s.prototype.addListeners=function(){i.addEventListener("UiConf.error",this.onUiConfError.bind(this))
i.addEventListener("UiConf.complete",this.onUiConfComplete.bind(this))
i.addEventListener("Uploader.error",this.onUploadError.bind(this))
i.addEventListener("Uploader.success",this.onUploadSuccess.bind(this))
i.addEventListener("Uploader.progress",this.onProgress.bind(this))
i.addEventListener("Entry.success",this.onEntrySuccess.bind(this))
i.addEventListener("Entry.fail",this.onEntryFail.bind(this))}
s.prototype.onSessionLoaded=function(e){this.session=e
this.loadUiConf()}
s.prototype.loadUiConf=function(){this.uiconfService.load(this.session)}
s.prototype.onUiConfComplete=function(e){this.uiconfig=e
this.dispatchEvent("K5.ready",{},this)}
s.prototype.uploadFile=function(t){this.file=t
if(t)if(this.uiconfig.acceptableFile(t,u.allowedMediaTypes)){this.uploader=new e
this.uploader.send(this.session,t)}else{var n={maxFileSize:this.uiconfig.maxFileSize,file:t,allowedMediaTypes:u.allowedMediaTypes}
this.dispatchEvent("K5.fileError",n,this)}}
s.prototype.onUploadSuccess=function(e){var t=[this.uiconfig.asEntryParams(this.file.name),this.session.asEntryParams(),e.asEntryParams(),u.asEntryParams()]
this.entryService.addEntry(t)}
s.prototype.onProgress=function(e){this.dispatchEvent("K5.progress",e,this)}
s.prototype.onUploadError=function(e){this.dispatchEvent("K5.error",e,this)}
s.prototype.onEntrySuccess=function(e){this.dispatchEvent("K5.complete",e,this)}
s.prototype.onEntryFail=function(e){this.dispatchEvent("K5.error",e,this)}
s.prototype.onUiConfError=function(e){this.dispatchEvent("K5.uiconfError",e,this)}
return s}.apply(t,i))&&(e.exports=r)},jmveEUdviC:function(e,t,n){var i,r
i=[n("wsG6LCw0ui"),n("EV7MgeIKLJ"),n("j1K+QE411H"),n("VcdxSyzxRH"),n("yHYOFS5JEZ"),n("wmdTCqkKx2")],void 0!==(r=function(e,t,n,i,r,a){function o(){this.xmlParser=new i}o.prototype.addEntry=function(e){this.formData=r(e)
this.createEntryRequest()}
o.prototype.createEntryRequest=function(){var n=this.formData
n.kalsig=e(n)
this.xhr=new XMLHttpRequest
this.xhr.open("GET",a.entryUrl+t(n))
this.xhr.requestType="xml"
this.xhr.onload=this.onEntryRequestLoaded.bind(this)
this.xhr.send(n)}
o.prototype.onEntryRequestLoaded=function(e){this.xmlParser.parseXML(this.xhr.response)
if(t=this.xmlParser.findRecursive("result:entries:entry1_")){var t={id:t.find("id").text(),type:t.find("type").text(),title:t.find("name").text(),context_code:t.find("partnerData").text(),mediaType:t.find("mediatype").text(),entryId:t.find("id").text(),userTitle:void 0}
n.dispatchEvent("Entry.success",t,this)}else n.dispatchEvent("Entry.fail",this.xhr.response,this)}
return o}.apply(t,i))&&(e.exports=r)},"nwUwKBv/gu":function(e,t,n){"use strict"
var i,r=n("mOY9BNujNR"),a=(i=r)&&i.__esModule?i:{default:i}
n("O9QjtziI9Q")
n("1YHB9uvbU1")
n("Nf4R7G01V5")
var o=0,u=!1
a.default.widget("ui.popup",{version:"@VERSION",options:{position:{my:"left top",at:"left bottom"},managed:!1,expandOnFocus:!1,show:{effect:"slideDown",duration:0},hide:{effect:"fadeOut",duration:0}},_create:function(){this.options.trigger||(this.options.trigger=this.element.prev())
if(!this.element.attr("id")){this.element.attr("id","ui-popup-"+o++)
this.generatedId=!0}if(!this.element.attr("role")&&!this.options.managed){this.element.attr("role","dialog")
this.generatedRole=!0}this.options.trigger.attr("aria-haspopup","true").attr("aria-owns",this.element.attr("id"))
this.element.addClass("ui-popup")
this._beforeClose()
this.element.hide()
var e=function(e){var t=!1;(0,a.default)(e.target).is("input")&&(t=!0)
if(this.isOpen){u=!0
this.close()}else{this.open(e)
clearTimeout(this.closeTimer)
this._delay(function(){t||this.focusPopup()},1)}}
this._on(this.options.trigger,{keydown:function(e){switch(e.keyCode){case a.default.ui.keyCode.TAB:this.element.hide()
this.close(e)
break
case a.default.ui.keyCode.ESCAPE:this.isOpen&&this.close(e)
break
case a.default.ui.keyCode.SPACE:case a.default.ui.keyCode.DOWN:case a.default.ui.keyCode.UP:e.preventDefault()
clearTimeout(this.closeTimer)
this._delay(function(){this.open(e)
this.focusPopup(e)},1)}},mouseup:function(e){this.mouseClickTimer=window.setTimeout(function(){delete this.mouseClickTimer}.bind(this),0)},click:function(t){t.stopPropagation()
t.preventDefault()
this.mouseClickTimer||e.call(this,t)},mousedown:e})
this.options.expandOnFocus&&this._on(this.options.trigger,{focus:function(e){u||this._delay(function(){this.isOpen||this.open(e)},1)
this._delay(function(){u=!1},100)},blur:function(e){u=!1}})
this.options.managed||this._on({keydown:function(e){if(e.keyCode===a.default.ui.keyCode.TAB){var t=(0,a.default)(":tabbable",this.element),n=t.first(),i=t.last()
if(e.target!==i[0]||e.shiftKey){if(e.target===n[0]&&e.shiftKey){i.focus(1)
e.preventDefault()}}else{n.focus(1)
e.preventDefault()}}}})
this._on({focusout:function(e){this.closeTimer=this._delay(function(){this.close(e)},150)},focusin:function(e){clearTimeout(this.closeTimer)},mouseup:function(e){clearTimeout(this.closeTimer)}})
this._on({keyup:function(e){if(e.keyCode===a.default.ui.keyCode.ESCAPE&&this.element.is(":visible")){this.close(e)
this.focusTrigger()}}})
this._on(this.document,{click:function(e){this.isOpen&&!(0,a.default)(e.target).closest(this.element.add(this.options.trigger)).length&&this.close(e)}})},_destroy:function(){this.element.show().removeClass("ui-popup").removeAttr("aria-hidden").removeAttr("aria-expanded").unbind("keypress.ui-popup")
this.options.trigger.removeAttr("aria-haspopup").removeAttr("aria-owns")
this.generatedId&&this.element.removeAttr("id")
this.generatedRole&&this.element.removeAttr("role")},open:function(e){var t=a.default.extend({},{of:this.options.trigger},this.options.position)
this._show(this.element,this.options.show)
this.element.attr("aria-hidden","false").attr("aria-expanded","true").position(t)
this.options.trigger.attr("tabindex",-1)
this.isOpen=!0
this._trigger("open",e)},focusPopup:function(e){if(!this.options.managed){var t=this.element.find(":tabbable")
this.removeTabIndex=!1
if(!t.length){if(!this.element.is(":tabbable")){this.element.attr("tabindex","0")
this.removeTabIndex=!0}t=t.add(this.element[0])}t.first().focus(1)}this._trigger("focusPopup",e)},focusTrigger:function(e){u=!0
this.options.trigger.focus()
this._trigger("focusTrigger",e)},close:function(e){this._beforeClose()
this._hide(this.element,this.options.hide)
this.options.trigger.attr("tabindex",0)
this.removeTabIndex&&this.element.removeAttr("tabindex")
this.isOpen=!1
this._trigger("close",e)},_beforeClose:function(){this.element.attr("aria-hidden","true").attr("aria-expanded","false")}})},om1wIkvxJX:function(e,t,n){var i,r
i=[n("jksFm8iyi3")],void 0!==(r=function(e){return e}.apply(t,i))&&(e.exports=r)},q97HwXzRnE:function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
a(n("iBw8ZGM6v8"))
var i=a(n("mOY9BNujNR")),r=a(n("eJBzaBDd6c"))
n("QfIG3OPdTK")
function a(e){return e&&e.__esModule?e:{default:e}}var o={},u={setPosition:function(e){function t(){return(e.tooltipClass||"").match("popover")?30:5}var n="true"===e.force_position?"none":"flipfit",i={right:{my:"left center",at:"right+"+t()+" center",collision:n},left:{my:"right center",at:"left-"+t()+" center",collision:n},top:{my:"center bottom",at:"center top-"+t(),collision:n},bottom:{my:"center top",at:"center bottom+"+t(),collision:n}}
e.position in i&&(e.position=i[e.position])}}
i.default.widget("custom.timeoutTooltip",i.default.ui.tooltip,{_open:function(e,t,n){var a=this
if(function(e){return o[e]||o[e[0]]}(t))return null
var u=Array.prototype.slice.call(arguments,0)
u.splice(2,1,(0,r.default)(n).toString())
if(!this.timeout){var s=this._superApply.bind(this,u)
this.timeout=setTimeout(function(){delete a.timeout
a._off(t,"mouseleave focusout keyup")
s()},20)
return this._on(t,{mouseleave:"close",focusout:"close",keyup:function(e){if(e.keyCode===i.default.ui.keyCode.ESCAPE){var n=i.default.Event(e)
n.currentTarget=t[0]
return this.close(n,!0)}}})}},close:function(e){if(!this.timeout)return this._superApply(arguments)
clearTimeout(this.timeout)
delete this.timeout}})
function s(e,t){return(0,i.default)(this).css(e).removeClass("left right top bottom center middle vertical horizontal").addClass([t.horizontal,t.vertical,t.important].join(" "))}(0,i.default)("body").on("mouseenter focusin","[data-tooltip]",function(e){var t=(0,i.default)(this),n=t.data("tooltip");["right","left","top","bottom"].includes(n)&&(n={position:n})
n||(n={})
n.position||(n.position="top")
u.setPosition(n)
n.collision&&(n.position.collision=n.collision)
n.position.using||(n.position.using=s)
if(t.data("html-tooltip-title")){n.content=function(){return i.default.raw((0,i.default)(this).data("html-tooltip-title"))}
n.items="[data-html-tooltip-title]"}t.data("tooltip-class")&&(n.tooltipClass=t.data("tooltip-class"))
t.removeAttr("data-tooltip").timeoutTooltip(n).timeoutTooltip("open").click(function(){return t.timeoutTooltip("close")})});(0,i.default)(window).bind("detachTooltip",function(e){return o[e.target]=!0});(0,i.default)(window).bind("reattachTooltip",function(e){return o[e.target]=!1})
t.default=u
e.exports=t.default},uJvXVpBkfw:function(e,t,n){var i,r,a=function(e,t){return function(){return e.apply(t,arguments)}}
i=[n("mOY9BNujNR"),n("MJc1meCUnj"),n("TEJtO8kTF9"),n("om1wIkvxJX"),n("YAsrg8Hfzh"),n("Swn6SeDoYc"),n("BGpftgD7c/")],void 0!==(r=function(e,t,n,i,r,o,u){return function(){function e(){this.resetUploader=a(this.resetUploader,this)
this.onUploaderReady=a(this.onUploaderReady,this)
this.onUploadComplete=a(this.onUploadComplete,this)
this.onFileError=a(this.onFileError,this)
this.doUpload=a(this.doUpload,this)
this.initialize=a(this.initialize,this)
this.dialogManager=new t
this.commentUiLoader=new n
this.kSession=new o
this.uploadViewManager=new r
this.fileInputManager=new u
this.dialogManager.initialize()
this.loadSession()}e.prototype.loadSession=function(){return this.kSession.loadSession("/api/v1/services/kaltura_session",this.initialize,this.uploadViewManager.showConfigError)}
e.prototype.onReady=function(){}
e.prototype.initialize=function(e,t){return this.commentUiLoader.loadTabs((n=this,function(i){n.onReady()
n.dialogManager.displayContent(i)
n.dialogManager.activateTabs()
n.dialogManager.mediaReady(e,t)
n.createNeededFields()
return n.bindEvents()}))
var n}
e.prototype.getKs=function(){return this.kSession.kalturaSession.ks}
e.prototype.getUid=function(){return this.kSession.kalturaSession.uid}
e.prototype.bindEvents=function(){this.fileInputManager.setUpInputTrigger("#audio_upload_holder",["audio"])
return this.fileInputManager.setUpInputTrigger("#video_upload_holder",["video"])}
e.prototype.createNeededFields=function(){return this.fileInputManager.resetFileInput(this.doUpload)}
e.prototype.doUpload=function(){var e
this.file=this.fileInputManager.getSelectedFile()
this.uploader&&this.resetUploader()
e=this.kSession.generateUploadOptions(this.fileInputManager.allowedMedia)
this.uploader=new i(e)
this.uploader.addEventListener("K5.fileError",this.onFileError)
this.uploader.addEventListener("K5.complete",this.onUploadComplete)
this.uploader.addEventListener("K5.ready",this.onUploaderReady)
this.uploadViewManager=new r
return this.uploadViewManager.monitorUpload(this.uploader,this.fileInputManager.allowedMedia,this.file)}
e.prototype.onFileError=function(){return this.createNeededFields()}
e.prototype.onUploadComplete=function(e){var t
this.resetUploader();(null!=(t=e.title)?t.length:void 0)>0||(e.title=this.file.name)
this.addEntry(e)
return this.dialogManager.hide()}
e.prototype.onUploaderReady=function(){return this.uploader.uploadFile(this.file)}
e.prototype.resetUploader=function(){this.uploader.removeEventListener("K5.fileError",this.onFileError)
this.uploader.removeEventListener("K5.complete",this.onUploadComplete)
this.uploader.removeEventListener("K5.ready",this.onUploaderReady)
return this.uploader.destroy()}
return e}()}.apply(t,i))&&(e.exports=r)},"vCQJ/Q6HMW":function(e,t,n){var i
void 0!==(i=function(){e.decorate=function(t){t.messenger=new e
t.addEventListener=function(e,n){t.messenger.addEventListener(e,n)}
t.dispatchEvent=function(e,n,i){t.messenger.dispatchEvent(e,n,i)}
t.removeEventListener=function(e,n){t.messenger.removeEventListener(e,n)}}
function e(){this.events={}}e.prototype.killAllListeners=function(e){if(!this.events[e])return!1
this.events[e]=[]}
e.prototype.destroy=function(){this.events={}}
e.prototype.dispatchEvent=function(e,t,n){this.events[e]&&this.events[e].forEach(function(e){e.call(n,t)})}
e.prototype.addEventListener=function(e,t){if(!t)return!1
this.events[e]||(this.events[e]=[])
this.events[e].push(t)
return t}
e.prototype.removeEventListener=function(e,t){if(this.events[e]){var n=this.events[e],i=[]
this.events[e].forEach(function(e,n){e===t&&i.push(n)})
i.length>0&&i.forEach(function(e){n.splice(e,1)})}}
return e}.apply(t,[]))&&(e.exports=i)},vs40FT3DsF:function(e,t,n){var i,r
i=[n("j1K+QE411H"),n("zuMcCJCnxl"),n("OmVUS6ALVM")],void 0!==(r=function(e,t,n){function i(){this.xhr=new XMLHttpRequest
this.uploadResult=new t}i.prototype.isAvailable=function(){return!!this.xhr.upload}
i.prototype.send=function(e,t){var i=new n
this.xhr=i.buildRequest(e,t)
this.addEventListeners()
this.xhr.send(i.createFormData())}
i.prototype.addEventListeners=function(){this.xhr.upload.addEventListener("progress",this.eventProxy.bind(this.xhr))
this.xhr.upload.addEventListener("load",this.eventProxy.bind(this.xhr))
this.xhr.upload.addEventListener("error",this.eventProxy.bind(this.xhr))
this.xhr.upload.addEventListener("abort",this.eventProxy.bind(this.xhr))
this.xhr.onload=this.onload.bind(this)}
i.prototype.onload=function(t){this.uploadResult.parseXML(this.xhr.response)
var n=this.uploadResult.isError?"error":"success"
e.dispatchEvent("Uploader."+n,this.uploadResult)}
i.prototype.eventProxy=function(t){var n="Uploader."+t.type
e.dispatchEvent(n,t,this)}
return i}.apply(t,i))&&(e.exports=r)},wmdTCqkKx2:function(e,t,n){var i,r
i=[n("SAJYeZn/X9")],void 0!==(r=function(e){function t(){}t.prototype.setOptions=function(e){this.mergeDefaults(e)}
t.prototype.mergeDefaults=function(t){this.allowedMediaTypes=["video","audio"]
this.sessionUrl="/api/v1/services/kaltura_session"
this.uploadUrl=""
this.entryUrl=""
this.uiconfUrl=""
this.entryDefaults={partnerData:"{'context_code': 'some_course_num', 'root_account'_id':1}",conversionProfile:2,source:1,kshow_id:-1,quick_edit:!0}
e("allowedMediaTypes",this,t)
e("sessionUrl",this,t)
e("uploadUrl",this,t)
e("entryUrl",this,t)
e("uiconfUrl",this,t)
e("partnerData",this.entryDefaults,t.entryDefaults)
e("conversionProfile",this.entryDefaults,t.entryDefaults)
e("source",this.entryDefaults,t.entryDefaults)
e("kshow_id",this.entryDefaults,t.entryDefaults)
e("quick_edit",this.entryDefaults,t.entryDefaults)}
t.prototype.asEntryParams=function(){return{entry1_partnerData:this.entryDefaults.partnerData,entry1_conversionProfile:this.entryDefaults.conversionProfile,entry1_source:this.entryDefaults.source,kshow_id:this.entryDefaults.kshow_id,quick_edit:this.entryDefaults.quick_edit}}
return new t}.apply(t,i))&&(e.exports=r)},wsG6LCw0ui:function(e,t,n){var i,r
i=[n("TYNg0f0fQv")],void 0!==(r=function(e){return function(t){var n=[]
for(var i in t)n.push(i)
var r="";(n=n.sort()).forEach(function(e){r+=e
r+=t[e]})
return e.encrypt(r)}}.apply(t,i))&&(e.exports=r)},yHYOFS5JEZ:function(e,t,n){var i
void 0!==(i=function(){return function(e){if(!e)return e
var t={};(e=e.reverse()).forEach(function(e){for(var n in e)t[n]=e[n]})
return t}}.apply(t,[]))&&(e.exports=i)},"zNOhtK+31x":function(e,t,n){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var i=o(n("ZrlrdyRlgX")),r=o(n("wxAWXU5KIn")),a=o(n("mOY9BNujNR"))
n("V0DFOiAOkw")
n("kWQsjZQaF4")
n("nwUwKBv/gu")
function o(e){return e&&e.__esModule?e:{default:e}}var u=function(){function e(t,n){var r=this;(0,i.default)(this,e);["onOpen","select","onClose","close","keepButtonActive"].forEach(function(e){return r[e]=r[e].bind(r)})
this.$trigger=(0,a.default)(t).data("kyleMenu",this)
this.$ariaMenuWrapper=this.$trigger.parent()
this.opts=a.default.extend(!0,{},e.defaults,n)
if(!this.opts.noButton){this.opts.buttonOpts.addDropArrow&&this.$trigger.append('<i class="icon-mini-arrow-down"></i>')
this.$trigger.button(this.opts.buttonOpts)
this.$trigger.bind("mouseleave.button",this.keepButtonActive)}this.$menu=this.$trigger.next().menu(this.opts.menuOpts).popup(this.opts.popupOpts).addClass("ui-kyle-menu use-css-transitions-for-show-hide")
if(this.opts.appendMenuTo){this.$menu.on({keydown:function(e){if(e.keyCode===a.default.ui.keyCode.TAB){var t=void 0
t=e.shiftKey?{which:a.default.ui.keyCode.TAB,shiftKey:!0}:{which:a.default.ui.keyCode.TAB}
var n=a.default.Event("keydown",t)
r.$trigger.focus().trigger(n)}}})
var o=this.$menu.data("popup"),u=o.open,s=this
o.open=function(){s.$menu.appendTo(s.opts.appendMenuTo)
return u.apply(this,arguments)}
this.$placeholder=(0,a.default)('<span style="display:none;">').insertAfter(this.$menu)
this.$menu.bind("click",function(){var e
return(e=r.$placeholder).trigger.apply(e,arguments)})}this.opts.notifyMenuActiveOnParent&&(this.$notifyParent=this.$trigger.closest(this.opts.notifyMenuActiveOnParent))
this.$menu.on({menuselect:this.select,popupopen:this.onOpen,popupclose:this.onClose})}(0,r.default)(e,[{key:"onOpen",value:function(e){this.$ariaMenuWrapper.attr("role","application")
this.adjustCarat(e)
this.$menu.addClass("ui-state-open")
this.opts.notifyMenuActiveOnParent&&this.$notifyParent.addClass("menu_active")}},{key:"open",value:function(){this.$menu.popup("open")}},{key:"select",value:function(e,t){var n=void 0
if("click"!==(e.originalEvent&&e.originalEvent.type)&&(n=(0,a.default)(t.item).find("a"))){e.preventDefault()
var i=n[0],r=document.createEvent("MouseEvent")
r.initEvent("click",!0,!0)
i.dispatchEvent(r)}this.close()}},{key:"onClose",value:function(){this.opts.appendMenuTo&&this.$menu.insertBefore(this.$placeholder)
this.$trigger.removeClass("ui-state-active")
this.$ariaMenuWrapper.removeAttr("role")
this.$menu.removeClass("ui-state-open")
this.opts.notifyMenuActiveOnParent&&this.$notifyParent.removeClass("menu_active")
this.opts.returnFocusTo&&!this.opts.returnFocusTo.prop("disabled")&&this.opts.returnFocusTo.focus()}},{key:"close",value:function(){this.$menu.hasClass("ui-state-open")&&this.$menu.popup("close").removeClass("ui-state-open")}},{key:"keepButtonActive",value:function(){this.$menu.is(".ui-state-open")&&this.$trigger.is(".btn, .ui-button")&&this.$trigger.addClass("ui-state-active")}},{key:"adjustCarat",value:function(e){this.$carat&&this.$carat.remove()
this.$trigger.is(".btn, .ui-button")&&this.$trigger.addClass("ui-state-active")
var t=this.$trigger.outerWidth(),n=this.$trigger.offset().left,i=this.$menu[0].getBoundingClientRect(),r=this.$trigger[0].getBoundingClientRect(),o=i.top+i.height<r.top,u=i.height-2,s=e.pageX||n+t/2,l=n-this.$menu.offset().left,d=s-this.$trigger.offset().left,c=Math.min(Math.max(6,d),t-6)+l
this.$carat=(0,a.default)('<span class="ui-menu-carat"><span /></span>').css("left",c)
o&&this.$carat.css("top",u).css("transform","rotateX(180deg)")
this.$carat.prependTo(this.$menu)}}])
return e}()
u.defaults={popupOpts:{position:{my:"center top",at:"center bottom",offset:"0 10px",within:"#main",collision:"flipfit"}},buttonOpts:{addDropArrow:!0}}
t.default=u
a.default.fn.kyleMenu=function(e){return this.each(function(){(0,a.default)(this).data().kyleMenu||new u(this,e)})}
e.exports=t.default},zr2HOwddfD:function(e,t,n){"use strict"
var i=a(n("mOY9BNujNR")),r=a(n("eJBzaBDd6c"))
function a(e){return e&&e.__esModule?e:{default:e}}(0,i.default)(document).delegate("a[data-confirm], a[data-method], a[data-remove]","click",function(e){var t,n,a=(0,i.default)(this)
if(a.data("handled")||!(t=a,n=t.data("confirm"),!n||confirm(n)))return!1
if(a.data("remove")){!function(e){var t=e.data("remove"),n=e,r=e.data("url"),a=e.closest(":ui-popup").popup("option","trigger").data("KyleMenu")
a&&a.opts.appendMenuTo&&(n=a.$placeholder)
var o=n.closest(t)
o.bind({beforeremove:function(){o.hide()},remove:function(){o.remove()}})
o.trigger("beforeremove")
var u=function(){return o.trigger("remove")}
r?i.default.ajaxJSON(r,"DELETE",{},u,function(){return o.show()}):u()}(a)
return!1}if(a.data("method")){!function(e){e.data("handled",!0)
var t=e.data("url")||e.attr("href"),n=e.data("method"),a=e.attr("target"),o=(0,i.default)('<form method="post" action="'+(0,r.default)(t)+'"></form>'),u='\n    <input name="_method" value="'+(0,r.default)(n)+'" type="hidden" />\n    <input name="authenticity_token" type="hidden" />\n  '
a&&o.attr("target",a)
o.hide().append(u).appendTo("body").submit()}(a)
return!1}})},zuMcCJCnxl:function(e,t,n){var i,r
i=[n("VcdxSyzxRH")],void 0!==(r=function(e){function t(){this.xml=void 0
this.isError=!0
this.token=void 0
this.filename=""
this.fileId=-1
this.xmlParser=new e}t.prototype.parseXML=function(e){this.xmlParser.parseXML(e)
this.isError=this.xmlParser.isError
this.xmlParser.isError||this.pullData()}
t.prototype.pullData=function(){var e=this.xmlParser.find("result_ok")
this.token=this.xmlParser.nodeText("token",e,!0)
this.fileId=this.xmlParser.nodeText("filename",e,!0)
this.filename=this.xmlParser.nodeText("origFilename",e)}
t.prototype.asEntryParams=function(){return{entry1_name:this.filename,entry1_filename:this.fileId,entry1_realFilename:this.filename}}
return t}.apply(t,i))&&(e.exports=r)}},["VDPlEqaRwD"])

//# sourceMappingURL=common.bundle-99f5b94735.js.100-99f5b94735.sourcemap