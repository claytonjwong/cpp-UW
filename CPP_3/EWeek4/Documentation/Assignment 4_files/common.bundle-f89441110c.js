canvasWebpackJsonp([75],{"+JpRIS14Qm":function(e,t,i){var n,a
n=[i("36QOWIB4+W"),i("BkaAgcBhey"),i("PyJFCi/UoU"),i("XDPawBHrta")],void 0!==(a=function(e){return e.scoped("subnav_menu_toggle")}.apply(t,n))&&(e.exports=a)},"+fL4qvKaPd":function(e,t,i){var n,a
n=[i("36QOWIB4+W"),i("PO6ncFtsF/"),i("PyJFCi/UoU"),i("XDPawBHrta")],void 0!==(a=function(e){return e.scoped("ajax_errors")}.apply(t,n))&&(e.exports=a)},"/rriEg1pXh":function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.loadMathJax=function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:null
if(!s()&&d()){window.MathJax=r
o.default.getScript("//cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.1/MathJax.js?config="+e,t)}}
t.isMathMLOnPage=function(){return(0,o.default)("math").length>0}
t.isMathJaxLoaded=s
t.shouldLoadMathJax=d
t.reloadElement=function(e){MathJax&&MathJax.Hub.Queue(["Typeset",MathJax.Hub,e])}
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
var r={TeX:{extensions:["color.js"]}}
function s(){return!("undefined"==typeof MathJax)}function d(){return(0,o.default)(document.documentElement).find("img.equation_image").length<=0}},"2JPOf+YwLj":function(e,t,i){var n,a
n=[i("alZG/YCWY6"),i("uceVF1dIMW"),i("kY/Uc71Va8")],void 0!==(a=function(e){var t=(e=e.default).template,i=e.templates=e.templates||{},n="MediaComments"
i[n]=t(function(e,t,i,n,a){this.compilerInfo=[4,">= 1.0.0"]
i=this.merge(i,e.helpers)
a=a||{}
var o,r,s="",d=i.helperMissing,u=this.escapeExpression
return s+='<div id="media_record_tabs">\n  <ul>\n    <li><a href="#record_media_tab">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"record_media_6637ff19","Record Media",r):d.call(t,"t","record_media_6637ff19","Record Media",r)))+'</a></li>\n    <li><a href="#upload_media_tab">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"upload_media_ce31135a","Upload Media",r):d.call(t,"t","upload_media_ce31135a","Upload Media",r)))+'</a></li>\n  </ul>\n  <div id="record_media_tab" class="clearfix media_tab">\n    <span class="screenreader-only">\n      '+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"this_recorder_uses_flash_as_a_result_you_may_find__427d2ddb","This recorder uses Flash. As a result, you may find it easier to make a recording on your local machine, and then use the media uploader tab to upload it.",r):d.call(t,"t","this_recorder_uses_flash_as_a_result_you_may_find__427d2ddb","This recorder uses Flash. As a result, you may find it easier to make a recording on your local machine, and then use the media uploader tab to upload it.",r)))+'\n    </span>\n    <div id="media_record_option_holder">\n      <a id="video_record_option"\n         class="record_option tooltip"\n         href="#"\n         title="'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"record_with_webcam_af21e07c","Record with Webcam",r):d.call(t,"t","record_with_webcam_af21e07c","Record with Webcam",r)))+'">\n        <img src="/images/webcam.png" alt="'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"record_with_webcam_af21e07c","Record with Webcam",r):d.call(t,"t","record_with_webcam_af21e07c","Record with Webcam",r)))+'" />\n      </a>\n      <a id="audio_record_option"\n         class="record_option tooltip"\n         href="#"\n         title="'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"record_with_microphone_only_e4ee07aa","Record with Microphone Only",r):d.call(t,"t","record_with_microphone_only_e4ee07aa","Record with Microphone Only",r)))+'">\n        <img src="/images/microphone.png" alt="'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"record_with_microphone_only_e4ee07aa","Record with Microphone Only",r):d.call(t,"t","record_with_microphone_only_e4ee07aa","Record with Microphone Only",r)))+'" />\n      </a>\n    </div>\n    <div id="video_record_holder_holder">\n      <div id="video_record_holder_message">\n        <div class="recorder_message">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"saving_recording_e111cb05","Saving Recording...",r):d.call(t,"t","saving_recording_e111cb05","Saving Recording...",r)))+'</div>\n      </div>\n      <div style="margin-bottom: 1px; margin-left: 10px;">\n        <label for="video_record_title">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"title_52b8638d","Title:",r):d.call(t,"t","title_52b8638d","Title:",r)))+'</label>\n        <input id="video_record_title"\n               type="text"\n               style="width: 250px;"\n               maxlength="255" />\n      </div>\n      <div id="video_record_holder">\n        <div id="video_record_meter" class="volume_meter">\n          <img src="/images/blank.png" class="audio_level level_9" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_8" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_7" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_6" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_5" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_4" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_3" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_2" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_1" alt=""/>\n          <img src="/images/blank.png" class="audio_level level_0" alt=""/>\n        </div>\n        <div id="video_record">\n        </div>\n      </div>\n    </div>\n    <div id="audio_record_holder_holder">\n      <div id="audio_record_holder_message">\n        <div class="recorder_message">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"saving_recording_e111cb05","Saving Recording...",r):d.call(t,"t","saving_recording_e111cb05","Saving Recording...",r)))+'</div>\n      </div>\n      <div style="margin-bottom: 1px; margin-left: 10px;">\n        <label for="audio_record_title">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"title_52b8638d","Title:",r):d.call(t,"t","title_52b8638d","Title:",r)))+'</label>\n        <input id="audio_record_title"\n               type="text"\n               style="width: 250px;"\n               maxlength="255" />\n      </div>\n      <div id="audio_record_holder">\n        <div id="audio_record_meter" class="volume_meter">\n          <img src="/images/blank.png" class="audio_level level_9" alt="9"/>\n          <img src="/images/blank.png" class="audio_level level_8" alt="8"/>\n          <img src="/images/blank.png" class="audio_level level_7" alt="7"/>\n          <img src="/images/blank.png" class="audio_level level_6" alt="6"/>\n          <img src="/images/blank.png" class="audio_level level_5" alt="5"/>\n          <img src="/images/blank.png" class="audio_level level_4" alt="4"/>\n          <img src="/images/blank.png" class="audio_level level_3" alt="3"/>\n          <img src="/images/blank.png" class="audio_level level_2" alt="2"/>\n          <img src="/images/blank.png" class="audio_level level_1" alt="1"/>\n          <img src="/images/blank.png" class="audio_level level_0" alt="0"/>\n        </div>\n        <div id="audio_record">\n        </div>\n      </div>\n    </div>\n    <div class="clear"></div>\n  </div>\n  <div id="upload_media_tab" class="clearfix media_tab">\n    <div id="media_upload_holder">\n      <div id="audio_upload_holder" class="pull-left">\n        <div id="audio_upload">\n        </div>\n        <div id="audio_upload_under" style="margin-bottom: 20px;">\n          <button class="btn" type="button">\n            <img src="/images/audio.png" alt=""/>\n            '+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"select_audio_file_7d905cce","Select Audio File",r):d.call(t,"t","select_audio_file_7d905cce","Select Audio File",r)))+'\n          </button>\n        </div>\n      </div>\n      <div id="video_upload_holder" class="pull-left">\n        <div id="video_upload">\n        </div>\n        <div id="video_upload_under" style="margin-bottom: 20px;">\n          <button class="btn" type="button">\n            <img src="/images/video.png" alt=""/>\n            '+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"select_video_file_35b61d4e","Select Video File",r):d.call(t,"t","select_video_file_35b61d4e","Select Video File",r)))+'\n          </button>\n        </div>\n      </div>\n      <div class="clear"></div>\n      <div id="media_upload_settings" style="visibility: hidden;">\n        <label for="media_upload_title">'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"title_52b8638d","Title:",r):d.call(t,"t","title_52b8638d","Title:",r)))+'</label>\n        <input id="media_upload_title" type="text" />\n        <div class="content">\n          <img src="/images/file.png" alt="" class="icon"/>\n          <span id="media_upload_display_title">&nbsp;</span>\n          <span id="media_upload_file_size">&nbsp;</span>\n          <br />\n          <div id="media_upload_feedback" style="visibility: hidden; margin-top: 5px;">\n            <img src="/images/warning.png" alt="" />\n            <span id="media_upload_feedback_text"></span>\n          </div>\n        </div>\n        <div class="content" id="media_upload_progress" style="visibility: hidden; margin-top: 20px;"></div>\n        <div class="content" id="media_upload_errors" style="visibility: hidden; margin-top: 20px;"></div>\n        <div class="content">\n          <button class="btn disabled"\n                  disabled="true"\n                  type="button"\n                  id="media_upload_submit"\n          >'+u((r={hash:{i18n_inferred_key:!0},data:a},(o=i.t||t&&t.t)?o.call(t,"submit_media_file_f334c1ba","Submit Media File",r):d.call(t,"t","submit_media_file_f334c1ba","Submit Media File",r)))+"</button>\n        </div>\n      </div>\n    </div>\n  </div>\n</div>\n"})
return i[n]}.apply(t,n))&&(e.exports=a)},"2aUY+gHXYk":function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n};(0,o.default)(document).on("keydown",".ic-Super-toggle__input",function(e){13===e.which&&(0,o.default)(e.target).click()})},"3tzgL+C4wS":function(e,t,i){var n,a,o=function(e,t){return function(){return e.apply(t,arguments)}}
n=[i("mOY9BNujNR"),i("iBw8ZGM6v8"),i("YUas7KQMx2")],void 0!==(a=function(e,t){var i
i=function(){function i(e,t,i){this.mediaId=e
this.mediaElement=t
this.pluginSettings=i
this.addListeners=o(this.addListeners,this)
this.queueApiCall=o(this.queueApiCall,this)
this.setupApiIframes=o(this.setupApiIframes,this)
this.generateApiUrl=o(this.generateApiUrl,this)
this.ensureAnalyticSession=o(this.ensureAnalyticSession,this)
this.queueAnalyticEvent=o(this.queueAnalyticEvent,this)
this.ensureAnalyticSession()
this.generateApiUrl()
this.defaultData={service:"stats",action:"collect","event:entryId":this.mediaId,"event:sessionId":this.kaSession,"event:isFirstInSession":"false","event:objectType":"KalturaStatsEvent","event:partnerId":this.pluginSettings.partner_id,"event:uiconfId":this.pluginSettings.kcw_ui_conf,"event:queryStringReferrer":window.location.href}}i.prototype.queueAnalyticEvent=function(i){var n;(n=t.clone(this.defaultData))["event:eventType"]=i
n["event:duration"]=this.mediaElement.duration
n["event:currentPoint"]=parseInt(1e3*this.mediaElement.currentTime)
n["event:eventTimestamp"]=(new Date).getTime()
return this.queueApiCall(this.apiUrl+e.param(n))}
i.prototype.ensureAnalyticSession=function(){this.kaSession=e.cookie("kaltura_analytic_tracker",void 0,{path:"/"})
if(!this.kaSession){this.kaSession=(Math.random().toString(16)+Math.random().toString(16)+Math.random().toString(16)).replace(/\./g,"")
return e.cookie("kaltura_analytic_tracker",this.kaSession,{path:"/"})}}
i.prototype.generateApiUrl=function(){var e
e="http:"===window.location.protocol?"http://"+this.pluginSettings.domain:"https://"+this.pluginSettings.domain
return this.apiUrl=e+"/api_v3/index.php?"}
i.prototype.setupApiIframes=function(i){var n,a,o,r,s,d
this.qIndex=0
this.iframes=[]
for(a=r=0,d=i-1;0<=d?r<=d:r>=d;a=0<=d?++r:--r){o=document.createElement("iframe")
e(o).addClass("hidden kaltura-analytics")
e(document.body).append(e(o))
n=function(e,t){return function(){var i
if(i=t.shift())return e.src=i}}(o,s=[])
this.iframes[a]={iframe:o,queue:s,pinger:t.throttle(n,4e3)}}return this.iframes}
i.prototype.queueApiCall=function(e){this.iframes||this.setupApiIframes(this.pluginSettings.parallel_api_calls||3)
this.iframes[this.qIndex].queue.push(e)
this.iframes[this.qIndex].pinger()
this.qIndex=(this.qIndex+1)%this.iframes.length
return this.qIndex}
i.prototype.addListeners=function(){var e,t,i
this.queueAnalyticEvent(1)
this.mediaElement.addEventListener("play",(i=this,function(){i.mediaElement.pauseObserved=!1
i.mediaElement.endedObserved=!1
if(i.mediaElement.endedOnce){i.queueAnalyticEvent(mediaId,16)
i.mediaElement.endedOnce=!1}return i.queueAnalyticEvent(3)}))
this.mediaElement.addEventListener("canplay",function(e){return function(){return e.queueAnalyticEvent(2)}}(this))
this.mediaElement.addEventListener("seeked",function(e){return function(){if(!e.mediaElement.endedObserved)return e.queueAnalyticEvent(17)}}(this))
this.mediaElement.addEventListener("pause",function(e){return function(){if(!e.mediaElement.pauseObserved)return e.mediaElement.pauseObserved=!0}}(this))
this.mediaElement.addEventListener("progress",function(e){return function(){if(!e.mediaElement.endedOnce)return e.queueAnalyticEvent(12)}}(this))
t=0
e=!1
return this.mediaElement.addEventListener("playing",function(i){return function(n){if(!i.mediaElement.listeningToPlaying){setInterval(function(){var n,a,o,r
if(!i.mediaElement.paused&&!isNaN(i.mediaElement.duration)&&i.mediaElement.duration){if(i.mediaElement.isFullScreen!==e){e?i.queueAnalyticEvent(15):i.queueAnalyticEvent(14)
e=i.mediaElement.isFullScreen}r=[.25*i.mediaElement.duration,.5*i.mediaElement.duration,.75*i.mediaElement.duration,.98*i.mediaElement.duration]
a=i.mediaElement.currentTime
if(!isNaN(a)&&a>0){o=r.length-1
for(;o>=0;){(n=r[o])>t&&n<=a&&(0===o?i.queueAnalyticEvent(4):1===o?i.queueAnalyticEvent(5):2===o?i.queueAnalyticEvent(6):3===o&&i.queueAnalyticEvent(7));--o}return t=a}}},50)
return i.mediaElement.listeningToPlaying=!0}}}(this),!1)}
return i}()
return function(e,t,n){var a
if(n&&n.do_analytics){(a=new i(e,t,n)).addListeners()
return a}}}.apply(t,n))&&(e.exports=a)},"5iYkB5tAnT":function(e,t,i){var n,a
n=[i("SAJYeZn/X9")],void 0!==(a=function(e){function t(){this.ks=""
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
return t}.apply(t,n))&&(e.exports=a)},"6XcNbehSs1":function(e,t,i){var n,a
n=[i("6sqZ3sUkYG"),i("GTvFG2kez5")],void 0!==(a=function(e,t){return function(i){for(var n=i.find("limits"),a=new e({maxUploads:n.attr("maxUploads"),maxFileSize:n.attr("maxFileSize"),maxTotalSize:n.attr("maxTotalSize")}),o=i.find("fileFilters").children(),r=0,s=o.length;r<s;r++){var d=t(o[r])
a.addFileFilter(d)}return a}}.apply(t,n))&&(e.exports=a)},"6sqZ3sUkYG":function(e,t,i){var n
void 0!==(n=function(){function e(e){this.fileFilters=[]
this.maxUploads=e.maxUploads
this.maxFileSize=e.maxFileSize
this.maxTotalSize=e.maxTotalSize}e.prototype.addFileFilter=function(e){this.fileFilters.push(e)}
e.prototype.filterFor=function(e){for(var t,i,n=e.split(".").pop(),a=0,o=this.fileFilters.length;a<o;a++)if((i=this.fileFilters[a]).includesExtension(n)){t=i
break}return t}
e.prototype.asEntryParams=function(e){return this.filterFor(e).toParams()}
e.prototype.acceptableFileSize=function(e){return 1024*this.maxFileSize*1024>e}
e.prototype.acceptableFileType=function(e,t){var i=this.filterFor(e)
return!!i&&-1!==t.indexOf(i.id)}
e.prototype.acceptableFile=function(e,t){var i=this.acceptableFileType(e.name,t),n=this.acceptableFileSize(e.size)
return i&&n}
return e}.apply(t,[]))&&(e.exports=n)},"9vdLYFzxED":function(e,t,i){var n,a
n=[i("36QOWIB4+W"),i("f+YlSntt6E"),i("PyJFCi/UoU"),i("XDPawBHrta")],void 0!==(a=function(e){return e.scoped("broken_images")}.apply(t,n))&&(e.exports=a)},"BGpftgD7c/":function(e,t,i){var n,a,o=function(e,t){return function(){return e.apply(t,arguments)}}
n=[i("mOY9BNujNR")],void 0!==(a=function(e){return function(){function t(){this.resetFileInput=o(this.resetFileInput,this)}t.prototype.constructur=function(){return this.allowedMedia=["audio","video"]}
t.prototype.resetFileInput=function(t,i,n){var a
i||(i="file_upload")
n||(n="#media_upload_settings")
if(this.$fileInput){this.$fileInput.off("change",t)
this.$fileInput.remove()}a="<input id='"+i+"' type='file' style='display: none;'>"
e(n).append(a)
this.$fileInput=e("#"+i)
return this.$fileInput.on("change",t)}
t.prototype.setUpInputTrigger=function(t,i){return e(t).on("click",(n=this,function(e){n.allowedMedia=i
return n.$fileInput.click()}))
var n}
t.prototype.getSelectedFile=function(){return this.$fileInput.get()[0].files[0]}
return t}()}.apply(t,n))&&(e.exports=a)},BkaAgcBhey:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=i("36QOWIB4+W"),a=i.n(n),o=i("mOY9BNujNR")
i.n(o).a.extend(!0,a.a,{translations:{ar:{hide_account_navigation_menu_ccdf9480:"إخفاء قائمة التنقل بين الحسابات",hide_admin_navigation_menu_5cab9c9e:"إخفاء قائمة التنقل بين المسؤولين",hide_courses_navigation_menu_6f7c4cfd:"إخفاء قائمة التنقل بين المساقات",hide_groups_navigation_menu_62e8b3d0:"إخفاء قائمة التنقل بين المجموعات",hide_navigation_menu_f0b3e90:"إخفاء قائمة التنقل",show_account_navigation_menu_d97270a9:"إظهار قائمة التنقل بين الحسابات",show_admin_navigation_menu_92fb579f:"إظهار قائمة التنقل بين المسؤولين",show_courses_navigation_menu_7ad1a8d4:"إظهار قائمة التنقل بين المساقات",show_groups_navigation_menu_1521d38d:"إظهار قائمة التنقل بين المجموعات",show_navigation_menu_34e7f441:"إظهار قائمة التنقل"},cy:{hide_account_navigation_menu_ccdf9480:"Cuddio Dewislen Crwydro’r Cyfrif",hide_admin_navigation_menu_5cab9c9e:"Cuddio Dewislen Crwydro - Gweinyddwr",hide_courses_navigation_menu_6f7c4cfd:"Cuddio Dewislen Crwydro Cwrs",hide_groups_navigation_menu_62e8b3d0:"Cuddio Dewislen Crwydro - Grwpiau",hide_navigation_menu_f0b3e90:"Cuddio Dewislen Crwydro",show_account_navigation_menu_d97270a9:"Dangos Dewislen Crwydro’r Cyfrif",show_admin_navigation_menu_92fb579f:"Dangos Dewislen Crwydro Gweinyddwr",show_courses_navigation_menu_7ad1a8d4:"Dangos Dewislen Crwydro Cyrsiau",show_groups_navigation_menu_1521d38d:"Dangos Dewislen Crwydro Grwpiau",show_navigation_menu_34e7f441:"Dangos Dewislen Crwydro"},da:{hide_account_navigation_menu_ccdf9480:"Skjul kontonavigationsmenu",hide_admin_navigation_menu_5cab9c9e:"Skjul admin-navigationsmenu",hide_courses_navigation_menu_6f7c4cfd:"Skjul fag-navigationsmenu",hide_groups_navigation_menu_62e8b3d0:"Skjul gruppe-navigationsmenu",hide_navigation_menu_f0b3e90:"Skjul navigationsmenu",show_account_navigation_menu_d97270a9:"Vis kontonavigationsmenu",show_admin_navigation_menu_92fb579f:"Vis admin-navigationsmenu",show_courses_navigation_menu_7ad1a8d4:"Vis fag-navigationsmenu",show_groups_navigation_menu_1521d38d:"Vis gruppe-navigationsmenu",show_navigation_menu_34e7f441:"Vis navigationsmenu"},"da-x-k12":{hide_account_navigation_menu_ccdf9480:"Skjul kontonavigationsmenu",hide_admin_navigation_menu_5cab9c9e:"Skjul admin-navigationsmenu",hide_courses_navigation_menu_6f7c4cfd:"Skjul fag-navigationsmenu",hide_groups_navigation_menu_62e8b3d0:"Skjul gruppe-navigationsmenu",hide_navigation_menu_f0b3e90:"Skjul navigationsmenu",show_account_navigation_menu_d97270a9:"Vis kontonavigationsmenu",show_admin_navigation_menu_92fb579f:"Vis admin-navigationsmenu",show_courses_navigation_menu_7ad1a8d4:"Vis fag-navigationsmenu",show_groups_navigation_menu_1521d38d:"Vis gruppe-navigationsmenu",show_navigation_menu_34e7f441:"Vis navigationsmenu"},de:{hide_account_navigation_menu_ccdf9480:"Konto-Navigationsmenü ausblenden",hide_admin_navigation_menu_5cab9c9e:"Admin-Navigationsmenü ausblenden",hide_courses_navigation_menu_6f7c4cfd:"Kurs-Navigationsmenü ausblenden",hide_groups_navigation_menu_62e8b3d0:"Gruppen-Navigationsmenü ausblenden",hide_navigation_menu_f0b3e90:"Navigationsmenü ausblenden",show_account_navigation_menu_d97270a9:"Konto-Navigationsmenü einblenden",show_admin_navigation_menu_92fb579f:"Admin-Navigationsmenü einblenden",show_courses_navigation_menu_7ad1a8d4:"Kursnavigationsmenü einblenden",show_groups_navigation_menu_1521d38d:"Gruppen-Navigationsmenü einblenden",show_navigation_menu_34e7f441:"Navigationsmenü einblenden"},"en-AU":{hide_account_navigation_menu_ccdf9480:"Hide Account Navigation Menu",hide_admin_navigation_menu_5cab9c9e:"Hide Admin Navigation Menu",hide_courses_navigation_menu_6f7c4cfd:"Hide Courses Navigation Menu",hide_groups_navigation_menu_62e8b3d0:"Hide Groups Navigation Menu",hide_navigation_menu_f0b3e90:"Hide Navigation Menu",show_account_navigation_menu_d97270a9:"Show Account Navigation Menu",show_admin_navigation_menu_92fb579f:"Show Admin Navigation Menu",show_courses_navigation_menu_7ad1a8d4:"Show Courses Navigation Menu",show_groups_navigation_menu_1521d38d:"Show Groups Navigation Menu",show_navigation_menu_34e7f441:"Show Navigation Menu"},"en-CA":{hide_account_navigation_menu_ccdf9480:"Hide Account Navigation Menu",hide_admin_navigation_menu_5cab9c9e:"Hide Admin Navigation Menu",hide_courses_navigation_menu_6f7c4cfd:"Hide Courses Navigation Menu",hide_groups_navigation_menu_62e8b3d0:"Hide Groups Navigation Menu",hide_navigation_menu_f0b3e90:"Hide Navigation Menu",show_account_navigation_menu_d97270a9:"Show Account Navigation Menu",show_admin_navigation_menu_92fb579f:"Show Admin Navigation Menu",show_courses_navigation_menu_7ad1a8d4:"Show Courses Navigation Menu",show_groups_navigation_menu_1521d38d:"Show Groups Navigation Menu",show_navigation_menu_34e7f441:"Show Navigation Menu"},"en-GB":{hide_account_navigation_menu_ccdf9480:"Hide account navigation menu",hide_admin_navigation_menu_5cab9c9e:"Hide admin navigation menu",hide_courses_navigation_menu_6f7c4cfd:"Hide courses navigation menu",hide_groups_navigation_menu_62e8b3d0:"Hide groups navigation menu",hide_navigation_menu_f0b3e90:"Hide navigation menu",show_account_navigation_menu_d97270a9:"Show account navigation menu",show_admin_navigation_menu_92fb579f:"Show admin navigation menu",show_courses_navigation_menu_7ad1a8d4:"Show courses navigation menu",show_groups_navigation_menu_1521d38d:"Show groups navigation menu",show_navigation_menu_34e7f441:"Show navigation menu"},"en-GB-x-lbs":{hide_account_navigation_menu_ccdf9480:"Hide account navigation menu",hide_admin_navigation_menu_5cab9c9e:"Hide admin navigation menu",hide_courses_navigation_menu_6f7c4cfd:"Hide programmes navigation menu",hide_groups_navigation_menu_62e8b3d0:"Hide groups navigation menu",hide_navigation_menu_f0b3e90:"Hide navigation menu",show_account_navigation_menu_d97270a9:"Show account navigation menu",show_admin_navigation_menu_92fb579f:"Show admin navigation menu",show_courses_navigation_menu_7ad1a8d4:"Show programmes navigation menu",show_groups_navigation_menu_1521d38d:"Show groups navigation menu",show_navigation_menu_34e7f441:"Show navigation menu"},"en-GB-x-ukhe":{hide_account_navigation_menu_ccdf9480:"Hide account navigation menu",hide_admin_navigation_menu_5cab9c9e:"Hide admin navigation menu",hide_courses_navigation_menu_6f7c4cfd:"Hide modules navigation menu",hide_groups_navigation_menu_62e8b3d0:"Hide groups navigation menu",hide_navigation_menu_f0b3e90:"Hide navigation menu",show_account_navigation_menu_d97270a9:"Show account navigation menu",show_admin_navigation_menu_92fb579f:"Show admin navigation menu",show_courses_navigation_menu_7ad1a8d4:"Show modules navigation menu",show_groups_navigation_menu_1521d38d:"Show groups navigation menu",show_navigation_menu_34e7f441:"Show navigation menu"},es:{hide_account_navigation_menu_ccdf9480:"Ocultar menú de navegación de cuenta",hide_admin_navigation_menu_5cab9c9e:"Ocultar menú de navegación de administrador",hide_courses_navigation_menu_6f7c4cfd:"Ocultar menú de navegación de cursos",hide_groups_navigation_menu_62e8b3d0:"Ocultar menú de navegación de grupos",hide_navigation_menu_f0b3e90:"Ocultar menú de navegación",show_account_navigation_menu_d97270a9:"Mostrar menú de navegación de cuenta",show_admin_navigation_menu_92fb579f:"Mostrar menú de navegación de administrador",show_courses_navigation_menu_7ad1a8d4:"Mostrar menú de navegación de cursos",show_groups_navigation_menu_1521d38d:"Mostrar menú de navegación de grupos",show_navigation_menu_34e7f441:"Mostrar menú de navegación"},fa:{hide_account_navigation_menu_ccdf9480:"مخفی کردن منوی پیمایش کاربر",hide_admin_navigation_menu_5cab9c9e:"مخفی کردن منوی پیمایش مدیر",hide_courses_navigation_menu_6f7c4cfd:"مخفی کردن منوی پیمایش درس‌ها",hide_groups_navigation_menu_62e8b3d0:"مخفی کردن منوی پیمایش گروه‌ها",hide_navigation_menu_f0b3e90:"مخفی کردن منوی پیمایش ",show_account_navigation_menu_d97270a9:"نمایش منوی پیمایش حساب",show_admin_navigation_menu_92fb579f:"نمایش منوی پیمایش مدیر",show_courses_navigation_menu_7ad1a8d4:"نمایش منوی پیمایش درس ها",show_groups_navigation_menu_1521d38d:"نمایش منوی پیمایش گروه ها",show_navigation_menu_34e7f441:"نمایش منوی پیمایش"},fr:{hide_account_navigation_menu_ccdf9480:"Masquer le menu de navigation de comptes",hide_admin_navigation_menu_5cab9c9e:"Masquer le menu de navigation de l’administrateur",hide_courses_navigation_menu_6f7c4cfd:"Masquer le menu de navigation de cours",hide_groups_navigation_menu_62e8b3d0:"Masquer le menu de navigation de groupes",hide_navigation_menu_f0b3e90:"Masquer le menu de navigation",show_account_navigation_menu_d97270a9:"Afficher le menu de navigation de comptes",show_admin_navigation_menu_92fb579f:"Afficher le menu de navigation de l’administrateur",show_courses_navigation_menu_7ad1a8d4:"Afficher le menu de navigation de cours",show_groups_navigation_menu_1521d38d:"Afficher le menu de navigation de groupes",show_navigation_menu_34e7f441:"Afficher le menu de navigation"},"fr-CA":{hide_account_navigation_menu_ccdf9480:"Masquer le menu de navigation du compte",hide_admin_navigation_menu_5cab9c9e:"Masquer le menu de navigation de l’administrateur",hide_courses_navigation_menu_6f7c4cfd:"Masquer le menu de navigation des cours",hide_groups_navigation_menu_62e8b3d0:"Masquer le menu de navigation des groupes",hide_navigation_menu_f0b3e90:"Masquer le menu de navigation",show_account_navigation_menu_d97270a9:"Afficher le menu de navigation du compte",show_admin_navigation_menu_92fb579f:"Afficher le menu de navigation de l’administrateur",show_courses_navigation_menu_7ad1a8d4:"Afficher le menu de navigation des cours",show_groups_navigation_menu_1521d38d:"Afficher le menu de navigation des groupes",show_navigation_menu_34e7f441:"Afficher le menu de navigation"},he:{hide_account_navigation_menu_ccdf9480:"הסתרת תפריט ניווט חשבונות",hide_admin_navigation_menu_5cab9c9e:"הסתרת תפריט ניווט מנהלי מערכת",hide_courses_navigation_menu_6f7c4cfd:"הסתרת תפריט ניווט קורסים",hide_groups_navigation_menu_62e8b3d0:"הסתרת תפריט ניווט קבוצות",hide_navigation_menu_f0b3e90:"הסתרת תפריט ניווט",show_account_navigation_menu_d97270a9:"הצגת תפריט ניווט חשבונות",show_admin_navigation_menu_92fb579f:"הצגת תפריט ניווט של מנהלי מערכת",show_courses_navigation_menu_7ad1a8d4:"הצגת תפריט ניווט קורסים",show_groups_navigation_menu_1521d38d:"הצגת תפריט ניווט קבוצות",show_navigation_menu_34e7f441:"הצגת תפריט ניווט"},ht:{hide_account_navigation_menu_ccdf9480:"Kache Meni Navigasyon Kont",hide_admin_navigation_menu_5cab9c9e:"Kache Meni Navigasyon Admin",hide_courses_navigation_menu_6f7c4cfd:"Kache Meni Navigasyon Kou",hide_groups_navigation_menu_62e8b3d0:"Kache Meni Navigasyon Gwoup",hide_navigation_menu_f0b3e90:"Kache Meni Navigasyon",show_account_navigation_menu_d97270a9:"Afiche Meni Navigasyon Kont",show_admin_navigation_menu_92fb579f:"Afiche Meni Navigasyon Admin",show_courses_navigation_menu_7ad1a8d4:"Afiche Meni Navigasyon Kou",show_groups_navigation_menu_1521d38d:"Afiche Meni Navigasyon Gwoup",show_navigation_menu_34e7f441:"Afiche Meni Navigasyon"},is:{hide_account_navigation_menu_ccdf9480:"Fela leiðarstýringu valmyndar reiknings",hide_admin_navigation_menu_5cab9c9e:"Fela leiðarstýringarvalmynd kerfisstjórnanda",hide_courses_navigation_menu_6f7c4cfd:"Fela leiðarstýringarvalmynd námskeiða",hide_groups_navigation_menu_62e8b3d0:"Fela leiðarstýringarvalmynd hópa",hide_navigation_menu_f0b3e90:"Fela leiðarstýringarvalmynd",show_account_navigation_menu_d97270a9:"Sýna leiðarstýringarvalmynd reiknings",show_admin_navigation_menu_92fb579f:"Sýna leiðarstýringarvalmynd kerfisstjórnanda",show_courses_navigation_menu_7ad1a8d4:"Sýna leiðarstýringarvalmynd námskeiða",show_groups_navigation_menu_1521d38d:"Sýna leiðarstýringarvalmynd hópa",show_navigation_menu_34e7f441:"Sýna leiðarstýringarvalmynd"},it:{hide_account_navigation_menu_ccdf9480:"Nascondi menu di navigazione account",hide_admin_navigation_menu_5cab9c9e:"Nascondi menu di navigazione amministratore",hide_courses_navigation_menu_6f7c4cfd:"Nascondi menu di navigazione corsi",hide_groups_navigation_menu_62e8b3d0:"Nascondi meni di navigazione gruppi",hide_navigation_menu_f0b3e90:"Nascondi menu di navigazione",show_account_navigation_menu_d97270a9:"Mostra menu di navigazione account",show_admin_navigation_menu_92fb579f:"Mostra menu di navigazione amministratore",show_courses_navigation_menu_7ad1a8d4:"Mostra menu di esplorazione corsi",show_groups_navigation_menu_1521d38d:"Mostra menu di esplorazione gruppi",show_navigation_menu_34e7f441:"Mostra menu di navigazione"},ja:{hide_account_navigation_menu_ccdf9480:"アカウントのナビゲーションメニューを非表示にする",hide_admin_navigation_menu_5cab9c9e:"管理ナビゲーションメニューを非表示にする",hide_courses_navigation_menu_6f7c4cfd:"コースナビゲーションメニューを非表示にする",hide_groups_navigation_menu_62e8b3d0:"グループナビゲーションメニューを非表示にする",hide_navigation_menu_f0b3e90:"ナビゲーションメニューを非表示にする",show_account_navigation_menu_d97270a9:"アカウントナビゲーションメニューを表示する",show_admin_navigation_menu_92fb579f:"アドミニストレーションナビゲーションメニューを表示する",show_courses_navigation_menu_7ad1a8d4:"コースナビゲーションメニューを表示する",show_groups_navigation_menu_1521d38d:"グループナビゲーションメニューを表示する",show_navigation_menu_34e7f441:"ナビゲーションメニューを表示する"},mi:{hide_account_navigation_menu_ccdf9480:"Huna Tāhua Whakatere Pūkete",hide_admin_navigation_menu_5cab9c9e:"Huna Whakahaere Whakatere Tāhua",hide_courses_navigation_menu_6f7c4cfd:"Huna Ngā Akoranga Whakatere Tāhua",hide_groups_navigation_menu_62e8b3d0:"Huna Ngā Rōpū Whakatere Tāhua",hide_navigation_menu_f0b3e90:"Huna Whakatere Tāhua",show_account_navigation_menu_d97270a9:"Whakaatu Pūkete Whakatere Tāhua",show_admin_navigation_menu_92fb579f:"Whakaatu Whakahaere Whakatere Tāhua",show_courses_navigation_menu_7ad1a8d4:"Whakaatu Ngā Akoranga Whakatere Tāhua",show_groups_navigation_menu_1521d38d:"Whakaatu Ngā Rōpū Whakatere Tāhua",show_navigation_menu_34e7f441:"Whakaatu Whakatere Tāhua"},nb:{hide_account_navigation_menu_ccdf9480:"Skjul menyen for kontonavigering",hide_admin_navigation_menu_5cab9c9e:"Skjul menyen for administratornavigering",hide_courses_navigation_menu_6f7c4cfd:"Skjul menyen for emnernavigering",hide_groups_navigation_menu_62e8b3d0:"Skjul menyen for gruppenavigering",hide_navigation_menu_f0b3e90:"Skjul navigeringsmenyen",show_account_navigation_menu_d97270a9:"Vis menyen for kontonavigering",show_admin_navigation_menu_92fb579f:"Vis menyen for administratornavigering",show_courses_navigation_menu_7ad1a8d4:"Vis menyen for emnernavigering",show_groups_navigation_menu_1521d38d:"Vis menyen for gruppenavigering",show_navigation_menu_34e7f441:"Vis navigeringsmenyen"},"nb-x-k12":{hide_account_navigation_menu_ccdf9480:"Skjul menyen for kontonavigering",hide_admin_navigation_menu_5cab9c9e:"Skjul menyen for administratornavigering",hide_courses_navigation_menu_6f7c4cfd:"Skjul menyen for fagnavigering",hide_groups_navigation_menu_62e8b3d0:"Skjul menyen for gruppenavigering",hide_navigation_menu_f0b3e90:"Skjul navigeringsmenyen",show_account_navigation_menu_d97270a9:"Vis menyen for kontonavigering",show_admin_navigation_menu_92fb579f:"Vis menyen for administratornavigering",show_courses_navigation_menu_7ad1a8d4:"Vis menyen for fagnavigering",show_groups_navigation_menu_1521d38d:"Vis menyen for gruppenavigering",show_navigation_menu_34e7f441:"Vis navigeringsmenyen"},nl:{hide_account_navigation_menu_ccdf9480:"Menu Accountnavigatie verbergen",hide_admin_navigation_menu_5cab9c9e:"Menu Beheernavigatie verbergen",hide_courses_navigation_menu_6f7c4cfd:"Menu Cursusnavigatie verbergen",hide_groups_navigation_menu_62e8b3d0:"Menu Groepsnavigatie verbergen",hide_navigation_menu_f0b3e90:"Navigatiemenu verbergen",show_account_navigation_menu_d97270a9:"Menu Accountnavigatie weergeven",show_admin_navigation_menu_92fb579f:"Menu Beheernavigatie weergeven",show_courses_navigation_menu_7ad1a8d4:"Menu Cursusnavigatie weergeven",show_groups_navigation_menu_1521d38d:"Menu Groepsnavigatie weergeven",show_navigation_menu_34e7f441:"Navigatiemenu weergeven"},nn:{hide_account_navigation_menu_ccdf9480:"Skjul meny for kontonavigasjon",hide_admin_navigation_menu_5cab9c9e:"Skjul meny for kontonavigasjon",hide_courses_navigation_menu_6f7c4cfd:"Skjul meny for emnenavigasjon",hide_groups_navigation_menu_62e8b3d0:"Skjul meny for gruppenavigasjon",hide_navigation_menu_f0b3e90:"Skjul navigeringsmeny",show_account_navigation_menu_d97270a9:"Vis meny for kontonavigasjon",show_admin_navigation_menu_92fb579f:"Vis admin-navigeringsmeny ",show_courses_navigation_menu_7ad1a8d4:"Vis meny for emnenavigasjon",show_groups_navigation_menu_1521d38d:"Vis meny for gruppenavigasjon",show_navigation_menu_34e7f441:"Vis navigeringsmeny"},pl:{hide_account_navigation_menu_ccdf9480:"Ukryj menu nawigacji na koncie",hide_admin_navigation_menu_5cab9c9e:"Ukryj menu nawigacji administratora",hide_courses_navigation_menu_6f7c4cfd:"Ukryj menu nawigacji w kursie",hide_groups_navigation_menu_62e8b3d0:"Ukryj menu nawigacji w grupach",hide_navigation_menu_f0b3e90:"Ukryj menu nawigacji",show_account_navigation_menu_d97270a9:"Pokaż menu nawigacji na koncie",show_admin_navigation_menu_92fb579f:"Pokaż menu nawigacji administratora",show_courses_navigation_menu_7ad1a8d4:"Pokaż menu nawigacji w kursie",show_groups_navigation_menu_1521d38d:"Pokaż menu nawigacji w grupach",show_navigation_menu_34e7f441:"Pokaż menu nawigacji"},pt:{hide_account_navigation_menu_ccdf9480:"Ocultar menu de navegação da conta",hide_admin_navigation_menu_5cab9c9e:"Ocultar menu de navegação do administrador",hide_courses_navigation_menu_6f7c4cfd:"Ocultar Menu de navegação das disciplinas",hide_groups_navigation_menu_62e8b3d0:"Ocultar Menu de navegação de grupos",hide_navigation_menu_f0b3e90:"Ocultar Menu de navegação",show_account_navigation_menu_d97270a9:"Mostrar o Menu de Navegação da Conta",show_admin_navigation_menu_92fb579f:"Mostrar o Menu de navegação do administrador",show_courses_navigation_menu_7ad1a8d4:"Mostrar Menu de navegação de disciplinas",show_groups_navigation_menu_1521d38d:"Mostrar o Menu de navegação dos grupos",show_navigation_menu_34e7f441:"Mostrar o Menu de Navegação"},"pt-BR":{hide_account_navigation_menu_ccdf9480:"Ocultar Menu de Navegação da conta",hide_admin_navigation_menu_5cab9c9e:"Ocultar Menu de Navegação do Admin",hide_courses_navigation_menu_6f7c4cfd:"Ocultar Menu de Navegação dos cursos",hide_groups_navigation_menu_62e8b3d0:"Ocultar Menu de Navegação dos grupos",hide_navigation_menu_f0b3e90:"Ocultar Menu de Navegação",show_account_navigation_menu_d97270a9:"Mostrar Menu de Navegação da conta",show_admin_navigation_menu_92fb579f:"Mostrar Menu de Navegação do Admin",show_courses_navigation_menu_7ad1a8d4:"Mostrar Menu de Navegação dos cursos",show_groups_navigation_menu_1521d38d:"Mostrar Menu de Navegação dos grupos",show_navigation_menu_34e7f441:"Mostrar Menu de Navegação"},ru:{hide_account_navigation_menu_ccdf9480:"Скрыть меню навигации учетной записи",hide_admin_navigation_menu_5cab9c9e:"Скрыть меню навигации администратора",hide_courses_navigation_menu_6f7c4cfd:"Скрыть меню навигации курсов",hide_groups_navigation_menu_62e8b3d0:"Скрыть меню навигации групп",hide_navigation_menu_f0b3e90:"Скрыть меню навигации",show_account_navigation_menu_d97270a9:"Показать меню навигации учетной записи",show_admin_navigation_menu_92fb579f:"Показать меню навигации администратора",show_courses_navigation_menu_7ad1a8d4:"Показать меню навигации курсов",show_groups_navigation_menu_1521d38d:"Показать меню навигации групп",show_navigation_menu_34e7f441:"Показать меню навигации"},sv:{hide_account_navigation_menu_ccdf9480:"Dölj konto-navigeringsmeny",hide_admin_navigation_menu_5cab9c9e:"Dölj administrations-navigeringsmeny",hide_courses_navigation_menu_6f7c4cfd:"Dölj kurs-navigeringsmeny",hide_groups_navigation_menu_62e8b3d0:"Dölj grupp-navigeringsmeny",hide_navigation_menu_f0b3e90:"Dölj navigeringsmeny",show_account_navigation_menu_d97270a9:"Visa konto-navigeringsmeny",show_admin_navigation_menu_92fb579f:"Visa administratörs-navigeringsmeny",show_courses_navigation_menu_7ad1a8d4:"Visa kurs-navigeringsmeny",show_groups_navigation_menu_1521d38d:"Visa grupp-navigeringsmeny",show_navigation_menu_34e7f441:"Visa navigeringsmeny"},"sv-x-k12":{hide_account_navigation_menu_ccdf9480:"Dölj konto-navigeringsmeny",hide_admin_navigation_menu_5cab9c9e:"Dölj administrations-navigeringsmeny",hide_courses_navigation_menu_6f7c4cfd:"Dölj kurs-navigeringsmeny",hide_groups_navigation_menu_62e8b3d0:"Dölj grupp-navigeringsmeny",hide_navigation_menu_f0b3e90:"Dölj navigeringsmeny",show_account_navigation_menu_d97270a9:"Visa konto-navigeringsmeny",show_admin_navigation_menu_92fb579f:"Visa administratörs-navigeringsmeny",show_courses_navigation_menu_7ad1a8d4:"Visa kurs-navigeringsmeny",show_groups_navigation_menu_1521d38d:"Visa grupp-navigeringsmeny",show_navigation_menu_34e7f441:"Visa navigeringsmeny"},"zh-Hans":{hide_account_navigation_menu_ccdf9480:"隐藏帐户导航菜单",hide_admin_navigation_menu_5cab9c9e:"隐藏管理员导航菜单",hide_courses_navigation_menu_6f7c4cfd:"隐藏课程导航菜单",hide_groups_navigation_menu_62e8b3d0:"隐藏小组导航菜单",hide_navigation_menu_f0b3e90:"隐藏导航菜单",show_account_navigation_menu_d97270a9:"显示帐户导航菜单",show_admin_navigation_menu_92fb579f:"显示管理员导航菜单",show_courses_navigation_menu_7ad1a8d4:"显示课程导航菜单",show_groups_navigation_menu_1521d38d:"显示小组导航菜单",show_navigation_menu_34e7f441:"显示导航菜单"},"zh-Hant":{hide_account_navigation_menu_ccdf9480:"隱藏帳戶導航工具選單",hide_admin_navigation_menu_5cab9c9e:"隱藏管理員導航工具選單",hide_courses_navigation_menu_6f7c4cfd:"隱藏課程導航工具選單",hide_groups_navigation_menu_62e8b3d0:"隱藏小組導航工具選單",hide_navigation_menu_f0b3e90:"隱藏導航工具選單",show_account_navigation_menu_d97270a9:"顯示帳戶導航工具選單",show_admin_navigation_menu_92fb579f:"顯示管理員導航工具選單",show_courses_navigation_menu_7ad1a8d4:"顯示課程導航工具選單",show_groups_navigation_menu_1521d38d:"顯示小組導航工具選單",show_navigation_menu_34e7f441:"顯示導航工具選單"}}})},"CU+gNa7iD4":function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=s(i("uceVF1dIMW")),a=s(i("mOY9BNujNR")),o=s(i("ArN3I+GqU9")),r=s(i("eJBzaBDd6c"))
i("D2yEjZ1CP5")
function s(e){return e&&e.__esModule?e:{default:e}}var d={buildMinimizerLink:function(){return(0,a.default)('<a href="#" style="font-size: 0.8em;">\n      '+(0,r.default)(n.default.t("links.minimize_embedded_kaltura_content","Minimize embedded content"))+"\n    </a>")},buildCommentHolder:function(e){return(0,a.default)('<div><div class="innerholder" tabindex="-1" style="margin-bottom: 15px;"></div></div>')},getMediaCommentId:function(e){var t=void 0,i=e.data("media_comment_id")||e.find(".media_comment_id:first").text()
i||(t=e.attr("id"))
t&&t.match(/^media_comment_/)&&(i=t.substring(14))
return i},collapseComment:function(e){void 0!==(t=e.find("video,audio").data("mediaelementplayer"))&&null!==t&&function(e){return e.pause()}(t)
var t
e.remove()
a.default.trackEvent("hide_embedded_content","hide_media")}},u=function(e){(0,a.default)(e.target).find("div.mejs-audio").focus()};(0,a.default)(document).on("click","a.instructure_inline_media_comment",(0,o.default)(function(){if(INST.kalturaSettings){var e=(0,a.default)(this),t="video",i=d.getMediaCommentId(e),r=d.buildCommentHolder(e);(function(e){return function(e){return e.closest("td").length>0}(e)&&function(e){return e.closest("td").css("width").replace("px","")<300}(e)})(e)&&function(e){var t=e.closest("td"),i=t.css("width")
t.data("orig-width",i)
t.css("width","300px")}(e)
e.after(r)
e.hide();("audio"===e.data("media_comment_type")||e.is(".audio_playback, .audio_comment, .instructure_audio_link"))&&(t="audio")
r.children("div").mediaComment("show_inline",i,t,e.data("download")||e.attr("href"))
d.buildMinimizerLink().appendTo(r).click((0,o.default)(function(){var t=e.closest("td")
e.show().focus()
t.css("width",t.data("orig-width"))
d.collapseComment(r)}))
a.default.trackEvent("show_embedded_content","show_media")
r.find(".innerholder").css("outline","none")
r.find(".innerholder").on("focus",u)}else alert(n.default.t("alerts.kaltura_disabled","Kaltura has been disabled for this Canvas site"))}))
t.default=d
e.exports=t.default},D2yEjZ1CP5:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=c(i("uceVF1dIMW")),a=c(i("iBw8ZGM6v8")),o=c(i("yvh8ynczHv")),r=c(i("tnyJgcGuAs")),s=c(i("NDO/g0y6Bx")),d=c(i("mOY9BNujNR")),u=c(i("3tzgL+C4wS")),l=c(i("eJBzaBDd6c"))
function c(e){return e&&e.__esModule?e:{default:e}}var _={getElement:function(e,t,i,n){var a="<"+e+" "+("video"===e?' width="'+i+'" height="'+n+'"':"")+' preload="metadata" controls>'+t+"</"+e+">"
return(0,d.default)(a)}}
d.default.extend(r.default.MediaElementDefaults,{pluginPath:"/images/mediaelement/",defaultVideoWidth:550,defaultVideoHeight:448})
r.default.MepDefaults.success=function(e,t){(0,u.default)(this.mediaCommentId,e,INST.kalturaSettings)
return e.play()}
r.default.MepDefaults.features.push("googleanalytics")
var f=r.default.MepDefaults.features.indexOf("tracks")+1
r.default.MepDefaults.features.splice(f,0,"sourcechooser")
r.default.MepDefaults.features.splice(f,0,"speed")
function h(e){var t=new d.default.Deferred
d.default.getJSON("/media_objects/"+e+"/info",function(e){var i=e.media_sources.filter(function(e){return"audio/mp3"!==e.content_type}).map(function(e){return"<source\n        type='"+(0,l.default)(e.content_type)+"'\n        src='"+(0,l.default)(e.url)+"'\n        title='"+(0,l.default)(e.width)+"x"+(0,l.default)(e.height)+" "+(0,l.default)(Math.floor(e.bitrate/1024))+" kbps'\n      />"}),n=a.default.map(e.media_tracks,function(e){var t=r.default.language.codes[e.locale]||e.locale
return"<track kind='"+(0,l.default)(e.kind)+"' label='"+(0,l.default)(t)+"' src='"+(0,l.default)(e.url)+"' srclang='"+(0,l.default)(e.locale)+"' />"}),o=a.default.map(e.media_sources,function(e){return e.content_type})
return t.resolve({sources:i,tracks:n,types:o,can_add_captions:e.can_add_captions})})
return t}function m(e){var t,i,n=e.sourcesAndTracks,a=e.mediaType,o=e.height,s=e.width,u=e.mediaPlayerOptions,l="video"===a?"video":"audio",c=n.sources.concat(n.tracks).join("")
if("audio"===a&&n.types[0].match(/^video\//)&&(t=d.default.extend({mode:"auto"},r.default.MediaElementDefaults,r.default.MepDefaults,u),i=_.getElement("audio",c),"native"!==r.default.HtmlMediaElementShim.determinePlayback(i[0],t,r.default.MediaFeatures.supportsMediaTag,!0,null).method)){l="video"
u.mode="auto_plugin"
u.isVideo=!1
u.videoHeight=o=30}return _.getElement(l,c,s,o)}var p={create:function(e,t,i,n){(0,d.default)("#media_recorder_container").removeAttr("id")
this.attr("id","media_recorder_container")
o.default.unsubscribe("media_comment_created")
o.default.subscribe("media_comment_created",function(e){return t(e.id,e.mediaType,e.title)})
var a={modal:!1,defaultTitle:n}
d.default.isFunction(i)&&(a.close=i.bind(this))
return d.default.mediaComment.init(e,a)},show_inline:function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:"video",i=arguments[2],o=(0,d.default)(this).closest(".instructure_file_link_holder").andSelf().first()
o.text(n.default.t("loading","Loading media..."))
var u=function(e,i){var o=Math.min(i.closest("div,p,table").width()||550,550),d=Math.round(o/336*240)
return h(e).done(function(u){if(u.sources.length){var l={can_add_captions:u.can_add_captions,mediaCommentId:e,googleAnalyticsTitle:e,menuTimeoutMouseLeave:50,success:function(e){i.focus()
e.play()},keyActions:[{keys:a.default.values(s.default.keyCodes),action:function(e,t,i,n){if(e.isVideo){e.showControls()
e.startControlsTimer()}new s.default(r.default,e,t,n).dispatch()}}]},c=m({sourcesAndTracks:u,mediaPlayerOptions:l,mediaType:t,height:d,width:o})
c.appendTo(i.html(""))
var _=new MediaElementPlayer(c,l)
c.data("mediaelementplayer",_)}else i.text(n.default.t("media_still_converting","Media is currently being converted, please try again in a little bit."))})}
if("maybe"===e){var l=i.replace(/\/download.*/,""),c=function(){return o.text(n.default.t("Media has been queued for conversion, please try again in a little bit."))}
return d.default.ajaxJSON(l,"GET",{},function(e){if(e.attachment&&"maybe"!==e.attachment.media_entry_id){o.text("")
return u(e.attachment.media_entry_id,o)}return c()},c)}return u(e,o)},show:function(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:"video";(0,d.default)(".play_media_comment").find(".ui-dialog-titlebar-close").click()
var i=(0,d.default)(this),a=i.data("media_comment_dialog")
if(!a){var o=void 0,r=void 0
if("video"===t){o=426
r=550}else{o=180
r=400}var s=(0,d.default)('<div style="overflow: hidden; padding: 0;" />')
"audio"===t&&s.css("padding-top","120px")
s.dialog({dialogClass:"play_media_comment",title:n.default.t("titles.play_comment","Play Media Comment"),width:r,height:o+60,modal:!1,resizable:!1,close:function(){var e=i.data("mediaelementplayer")
e&&e.pause()},open:function(e){return(0,d.default)(e.currentTarget).parent().find(".ui-dialog-titlebar-close").focus()}})
return s.disableWhileLoading(h(e).done(function(a){if(a.sources.length){var d={can_add_captions:a.can_add_captions,mediaCommentId:e,googleAnalyticsTitle:e},u=m({sourcesAndTracks:a,mediaPlayerOptions:d,mediaType:t,height:o,width:r})
u.appendTo(s.html(""))
i.data({mediaelementplayer:new MediaElementPlayer(u,d),media_comment_dialog:s})}else s.text(n.default.t("media_still_converting","Media is currently being converted, please try again in a little bit."))}))}a.dialog("open")}}
d.default.fn.mediaComment=function(e){if(!INST.kalturaSettings)return console.log("Kaltura has not been enabled for this account")
for(var t=arguments.length,i=Array(t>1?t-1:0),n=1;n<t;n++)i[n-1]=arguments[n]
p[e].apply(this,i)
return this}
t.default=_
e.exports=t.default},DGHOX4S35d:function(e,t,i){var n,a
n=[i("EV7MgeIKLJ"),i("wsG6LCw0ui"),i("VcdxSyzxRH"),i("6sqZ3sUkYG"),i("6XcNbehSs1"),i("j1K+QE411H"),i("wmdTCqkKx2")],void 0!==(a=function(e,t,i,n,a,o,r){function s(){this.xmlParser=new i}s.prototype.load=function(i){var n=i.getSession()
n.kalsig=t(n)
this.xhr=new XMLHttpRequest
this.xhr.open("GET",r.uiconfUrl+e(n))
this.xhr.addEventListener("load",this.onXhrLoad.bind(this))
this.xhr.send(n)}
s.prototype.createUiConfig=function(e){this.config=a(e)}
s.prototype.onXhrLoad=function(e){this.xmlParser.parseXML(this.xhr.response)
var t=this.xmlParser.find("result").find("ui_conf").find("confFile").first().text()
if(t){this.xmlParser=new i
this.xmlParser.parseXML(t)
this.config=a(this.xmlParser)
o.dispatchEvent("UiConf.complete",this.config,this)}else o.dispatchEvent("UiConf.error",this.xhr.response,this)}
return s}.apply(t,n))&&(e.exports=a)},EKuPgEpL6b:function(e,t,i){"use strict"
var n=o(i("mOY9BNujNR")),a=o(i("zNOhtK+31x"))
function o(e){return e&&e.__esModule?e:{default:e}}(0,n.default)(document).on("mousedown click keydown",".al-trigger",function(e){var t=(0,n.default)(this)
if(!t.data("kyleMenu")){var i=n.default.extend({noButton:!0},t.data("kyleMenuOptions"))
t.data("append-to-body")&&(i.appendMenuTo="body")
i=n.default.extend(i,{popupOpts:{position:{my:t.data("popup-my"),at:t.data("popup-at"),within:t.data("popup-within")}}})
new a.default(t,i)
t.trigger(e)}})},EV7MgeIKLJ:function(e,t,i){var n
void 0!==(n=function(){return function(e){var t="?"
for(var i in e)t+=i+"="+encodeURIComponent(e[i])+"&"
return t=t.substring(0,t.length-1)}}.apply(t,[]))&&(e.exports=n)},Eq7qibUFi3:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=r(i("ZrlrdyRlgX")),a=r(i("wxAWXU5KIn")),o=r(i("mOY9BNujNR"))
function r(e){return e&&e.__esModule?e:{default:e}}var s=".lti-thumbnail-launch"
function d(e){e.preventDefault()
u.launch((0,o.default)(e.target).closest(s))}var u=new(function(){function e(){(0,n.default)(this,e);(0,o.default)(document.body).delegate(s,"click",d)}(0,a.default)(e,[{key:"launch",value:function(e){var t=JSON.parse(e.attr("target")),i=(0,o.default)("<iframe/>",{src:e.attr("href"),allowfullscreen:"",width:t.displayWidth||500,height:t.displayHeight||500})
e.replaceWith(i)}}])
return e}())(s)
t.default=u
e.exports=t.default},FMOK6cJcp3:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
i("t0oyyDFjk2")
function r(e,t,i){var n=void 0
null==t&&(t=e.is(":ui-dialog:hidden")||"true"!==e.attr("aria-expanded"))
var a,s=(0,o.default)("[aria-controls*="+e.attr("id")+"]")
s.filter(function(){return(0,o.default)(this).data("hideWhileTargetShown")}).toggle(!t)
if(i&&void 0!==i.attr("aria-expanded")){i.attr("aria-expanded",!("true"===i.attr("aria-expanded")))
e.toggle("true"===i.attr("aria-expanded"))}else e.attr("aria-expanded",""+t).toggle(t)
if(e.is(":ui-dialog")||(n=e.data("turnIntoDialog"))){if(n&&t){n=o.default.extend({autoOpen:!1,close:function(){r(e,!1)}},n)
e.dialog(n).fixDialogButtons()}if(t){e.dialog("open")
e.data("read-on-open")&&e.dialog("widget").attr("aria-live","assertive").attr("aria-atomic","true")}else e.dialog("isOpen")&&e.dialog("close")}s.each((a=t?"Shown":"Hidden",function(){var e,t=(0,o.default)(this)
if(e=t.data("htmlWhileTarget"+a)){var i="htmlWhileTarget"+("Hidden"===a?"Shown":"Hidden")
t.data(i)||t.data(i,t.html())
t.html(e)}}))}var s={bind:function(){(0,o.default)(document).on("click change keyclick",".element_toggler[aria-controls]",function(e){var t=void 0,i=(0,o.default)(this)
if(i.is('input[type="checkbox"]')){if("click"===e.type)return
t=i.prop("checked")}"click"===e.type&&e.preventDefault()
var n=i.closest(".user_content")
n.length||(n=(0,o.default)(document.body))
var a=n.find("#"+i.attr("aria-controls").replace(/\s/g,", #"))
a.length&&r(a,t,i)
var s=i.find('i[class*="icon-mini-arrow"].auto_rotate')
if(s.length){s.toggleClass("icon-mini-arrow-down")
s.toggleClass("icon-mini-arrow-right")}})}}
s.bind()
t.default=s
e.exports=t.default},FjPpBpSp8P:function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
i("r81G667jwg")
i("3pTo86YxQs");(0,o.default)(document).ready(function(){(0,o.default)("#floating_reminders").draggable();(0,o.default)(".show_reminders_link").click(function(e){e.preventDefault();(0,o.default)(this).blur()
var t=(0,o.default)("#floating_reminders"),i=t.clone()
i.children().css("visibility","hidden")
var n=(0,o.default)("#reminders_icon").offset(),a=(0,o.default)("#floating_reminders").offset().top
t.after(i)
i.css({width:20,height:20,left:n.left,top:n.top-a,opacity:0})
t.css("visibility","hidden").css("left","")
i.animate({top:t.css("top"),left:t.css("left"),width:t.width(),height:t.height(),opacity:1},"slow",function(){(0,o.default)(this).remove()
t.css("visibility","visible")
t.find("a:not(.hide_reminders_link):visible:first").focus();(0,o.default)("#reminders_icon").hide()})
t.find(".update_session_url").attr("href")});(0,o.default)(".hide_reminders_link").click(function(e){e.preventDefault()
var t=(0,o.default)(this).parents("#floating_reminders"),i=t.clone()
t.after(i).css("left",-2e3)
i.children().css("visibility","hidden")
var n=(0,o.default)("#reminders_icon").show().offset(),a=i.offset().top
i.animate({width:20,height:20,left:n.left,top:n.top-a,opacity:0},"slow",function(){(0,o.default)(this).remove()})
t.find(".update_session_url").attr("href")});(0,o.default)(".drop_held_context_link").click(function(e){e.preventDefault()
var t=(0,o.default)(this).parents(".reminder")
t.confirmDelete({url:(0,o.default)(this).attr("href"),message:"Are you sure you want to drop this "+t.find(".item_type").text()+"?",success:function(e){(0,o.default)(this).fadeOut("fast",function(){(0,o.default)(this).remove()
0===(0,o.default)("#floating_reminders .reminder").length&&(0,o.default)("#floating_reminders").fadeOut("fast",function(){(0,o.default)(this).remove();(0,o.default)("#reminders_icon").remove()})})}})})})},GTvFG2kez5:function(e,t,i){var n,a
n=[i("gbrphF+ACY"),i("mOY9BNujNR")],void 0!==(a=function(e,t){return function(i){i=t(i)
return new e({id:i.attr("id"),description:i.attr("description"),entryType:i.attr("entryType"),mediaType:i.attr("mediaType"),type:i.attr("type"),extensions:i.attr("extensions")})}}.apply(t,n))&&(e.exports=a)},KPRNYFd0CF:function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
function r(e){var t=o.default.Event("keyclick");(0,o.default)(e.target).trigger(t)
t.isDefaultPrevented()&&e.preventDefault()
t.isPropagationStopped()&&e.stopPropagation()}function s(e){switch(e.which){case 13:return r(e)
case 32:return e.preventDefault()}}function d(e){switch(e.which){case 32:return r(e)}}o.default.fn.activate_keyclick=function(){var e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:null
this.on("keydown",e,s)
return this.on("keyup",e,d)};(0,o.default)(document).activate_keyclick("[role=button], [role=checkbox]")},LShObMQJhT:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
t.attachErrorHandler=r
t.getImagesAndAttach=s
var n=o(i("mOY9BNujNR")),a=o(i("9vdLYFzxED"))
function o(e){return e&&e.__esModule?e:{default:e}}function r(e){(0,n.default)(e).on("error",function(e){e.currentTarget.src?n.default.get(e.currentTarget.src).fail(function(t){403===t.status?(0,n.default)(e.currentTarget).attr({src:"/images/svg-icons/icon_lock.svg",alt:a.default.t("Locked image"),width:100,height:100}):(0,n.default)(e.currentTarget).addClass("broken-image")}):(0,n.default)(e.currentTarget).addClass("broken-image")})}function s(){(0,n.default)('img[src!=""]').toArray().forEach(r)}(0,n.default)(document).ready(function(){return s()})},MJc1meCUnj:function(e,t,i){var n,a,o=function(e,t){return function(){return e.apply(t,arguments)}}
n=[i("uceVF1dIMW"),i("mOY9BNujNR"),i("pmU8As9kkw")],void 0!==(a=function(e,t){return function(){function i(){this.setCloseOption=o(this.setCloseOption,this)
this.hide=o(this.hide,this)}i.prototype.initialize=function(){this.dialog=t("#media_comment_dialog")
return this.createLoadingWindow()}
i.prototype.hide=function(){return t("#media_comment_dialog").dialog("close")}
i.prototype.createLoadingWindow=function(){0===this.dialog.length&&(this.dialog=t("<div/>").attr("id","media_comment_dialog"))
this.dialog.text(e.t("messages.loading","Loading..."))
this.dialog.dialog({title:e.t("titles.record_upload_media_comment","Record/Upload Media Comment"),resizable:!1,width:470,height:300,modal:!0})
return this.dialog=t("#media_comment_dialog")}
i.prototype.displayContent=function(e){return this.dialog.html(e)}
i.prototype.mediaReady=function(e,t){this.showUpdateDialog()
this.setCloseOption(t)
this.resetRecordHolders()
return this.setupTypes(e)}
i.prototype.showUpdateDialog=function(){return this.dialog.dialog({title:e.t("titles.record_upload_media_comment","Record/Upload Media Comment"),width:560,height:475,modal:!0})}
i.prototype.setCloseOption=function(e){return this.dialog.dialog("option","close",(i=this,function(){t("#audio_record").before("<div id='audio_record'/>").remove()
t("#video_record").before("<div id='video_record'/>").remove()
if(e&&e.close&&t.isFunction(e.close))return e.close.call(i.$dialog)}))
var i}
i.prototype.setupTypes=function(e){if("video"===e){t("#video_record_option").click()
t("#media_record_option_holder").hide()
t("#audio_upload_holder").hide()
return t("#video_upload_holder").show()}if("audio"===e){t("#audio_record_option").click()
t("#media_record_option_holder").hide()
t("#audio_upload_holder").show()
return t("#video_upload_holder").hide()}t("#video_record_option").click()
t("#audio_upload_holder").show()
return t("#video_upload_holder").show()}
i.prototype.resetRecordHolders=function(){t("#audio_record").before("<div id='audio_record'/>").remove()
return t("#video_record").before("<div id='video_record'/>").remove()}
i.prototype.activateTabs=function(){return this.dialog.find("#media_record_tabs").tabs()}
return i}()}.apply(t,n))&&(e.exports=a)},"NDO/g0y6Bx":function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n},r=i("M4fFHvVeAA")
var s={ENTER:13,ESC:27,SPACE:32,LEFT:37,UP:38,RIGHT:39,DOWN:40,PAGE_UP:33,PAGE_DOWN:34,M:77,F:70,G_REWIND:227,G_FORWARD:228},d={captions:".mejs-captions-button",fullscreen:".mejs-fullscreen-button",playpause:".mejs-playpause-button",progress:".mejs-time-rail",source:".mejs-sourcechooser-button",speed:".mejs-speed-button",volume:".mejs-volume-button"}
function u(e,t){var i=e.filter(t).first(),n=e.index(i)
return n<0?0:n}function l(e,t,i,n){this.player=t
this.media=i
this.event=n
this.keyCode=n.keyCode
this.isFullScreen=e.MediaFeatures.hasTrueNativeFullScreen&&e.MediaFeatures.isFullScreen()||t.isFullScreen
this.isFirefox=e.MediaFeatures.isFirefox}l.keyCodes=s
l.prototype._targetControl=function(e){return(0,o.default)(this.event.target).closest(e)}
l.prototype.handlerKey=function(){var e=this
return(0,r.findKey)(d,function(t){return e._targetControl(t).length})||"player"}
l.prototype.dispatch=function(){this.event.preventDefault()
this[this.handlerKey()+"Handler"]()}
l.prototype.captionsHandler=function(){var e=void 0,t=this.player,i=this.event,n=(0,o.default)(t.captionsButton).find(".mejs-captions-selector input[type=radio]"),a=u(n,function(e,i){return"none"===i.value&&null==t.selectedTrack||t.selectedTrack&&i.value===t.selectedTrack.srclang})
switch(this.keyCode){case s.DOWN:e=Math.min(a+1,n.length-1)
n.slice(e).first().focus().click()
break
case s.UP:e=Math.max(a-1,0)
n.slice(e).first().focus().click()
break
case s.ENTER:"a"===i.target.tagName.toLowerCase()&&(0,o.default)(i.target)[0].click()}}
l.prototype.fullscreenHandler=function(){var e=this.player,t=this.event
switch(this.keyCode){case s.SPACE:if(this.isFirefox)break
case s.ENTER:(0,o.default)(t.target)[0].click()
break
case s.ESC:this.isFullScreen&&e.exitFullScreen()}}
l.prototype.playpauseHandler=function(){var e=this.player,t=this.media,i=void 0
switch(this.keyCode){case s.LEFT:case s.DOWN:case s.G_REWIND:i=Math.max(t.currentTime-e.options.defaultSeekBackwardInterval(t),0)
t.setCurrentTime(i)
break
case s.RIGHT:case s.UP:case s.G_FORWARD:i=Math.min(t.currentTime+e.options.defaultSeekForwardInterval(t),t.duration)
t.setCurrentTime(i)
break
case s.PAGE_DOWN:i=Math.max(t.currentTime-e.options.defaultJumpBackwardInterval(t),0)
t.setCurrentTime(i)
break
case s.PAGE_UP:i=Math.min(t.currentTime+e.options.defaultJumpForwardInterval(t),t.duration)
t.setCurrentTime(i)
break
case s.SPACE:if(this.isFirefox)break
case s.ENTER:t.paused?t.play():t.pause()}}
l.prototype.progressHandler=function(){}
l.prototype.sourceHandler=function(){var e=void 0,t=this.player,i=(0,o.default)(t.sourcechooserButton).find(".mejs-sourcechooser-selector input[type=radio]"),n=u(i,function(e,i){return i.value===t.media.src})
switch(this.keyCode){case s.DOWN:e=Math.min(n+1,i.length-1)
i.slice(e).first().focus().click()
break
case s.UP:e=Math.max(n-1,0)
i.slice(e).first().focus().click()}}
l.prototype.speedHandler=function(){var e=void 0,t=this.player,i=(0,o.default)(t.speedButton).find(".mejs-speed-selector input[type=radio]"),n=u(i,function(e,i){return parseFloat(i.value)===t.media.playbackRate})
switch(this.keyCode){case s.DOWN:e=Math.min(n+1,i.length-1)
i.slice(e).first().focus().click()
break
case s.UP:e=Math.max(n-1,0)
i.slice(e).first().focus().click()}}
l.prototype.volumeHandler=function(){var e=this.player,t=this.media,i=void 0
switch(this.keyCode){case s.SPACE:if(this.isFirefox)break
case s.ENTER:e.setMuted(!e.media.muted)
break
case s.LEFT:i=Math.max(0,t.volume-.1)
t.setVolume(i)
break
case s.RIGHT:i=Math.min(t.volume+.1,1)
t.setVolume(i)
break
case s.PAGE_DOWN:i=Math.max(0,t.volume-.5)
t.setVolume(i)
break
case s.PAGE_UP:i=Math.min(t.volume+.5,1)
t.setVolume(i)}}
l.prototype.playerHandler=function(){var e=this.player,t=this.media,i=this.event,n=void 0,a=void 0
switch(this.keyCode){case s.LEFT:case s.G_REWIND:n=Math.max(t.currentTime-e.options.defaultSeekBackwardInterval(t),0)
t.setCurrentTime(n)
break
case s.RIGHT:case s.G_FORWARD:n=Math.min(t.currentTime+e.options.defaultSeekForwardInterval(t),t.duration)
t.setCurrentTime(n)
break
case s.PAGE_DOWN:n=Math.max(t.currentTime-e.options.defaultJumpBackwardInterval(t),0)
t.setCurrentTime(n)
break
case s.PAGE_UP:n=Math.min(t.currentTime+e.options.defaultJumpForwardInterval(t),t.duration)
t.setCurrentTime(n)
break
case s.F:(0,o.default)(i.target).find(".mejs-fullscreen-button > button")[0].click()
break
case s.UP:a=t.volume
t.setVolume(Math.min(a+.1,1))
break
case s.DOWN:a=t.volume
t.setVolume(Math.max(0,a-.1))
break
case s.M:e.setMuted(!e.media.muted)
break
case s.SPACE:if(this.isFirefox)break
case s.ENTER:t.paused?t.play():t.pause()}}
t.default=l
e.exports=t.default},OGUJHwbmJb:function(e,t,i){"use strict"
var n,a=u(i("uceVF1dIMW")),o=u(i("iBw8ZGM6v8")),r=u(i("yvh8ynczHv")),s=u(i("mOY9BNujNR")),d=u(i("eJBzaBDd6c"))
u(i("2JPOf+YwLj")),u(i("uJvXVpBkfw"))
i("D2yEjZ1CP5")
i("Q4xR9Iqymk")
i("pmU8As9kkw")
i("kzdUuF07HD")
i("3pTo86YxQs")
i("11DZr9oB9c")
i("oxTDiksfqi")
function u(e){return e&&e.__esModule?e:{default:e}}s.default.mediaComment=function(e,t,i){var n=(0,s.default)("<div/>");(0,s.default)("body").append(n.hide())
s.default.fn.mediaComment.apply(n,arguments)}
s.default.mediaComment.partnerData=function(e){var t={context_code:s.default.mediaComment.contextCode(),root_account_id:ENV.DOMAIN_ROOT_ACCOUNT_ID,context_source:ENV.CONTEXT_ACTION_SOURCE}
ENV.SIS_SOURCE_ID&&(t.sis_source_id=ENV.SIS_SOURCE_ID)
ENV.SIS_USER_ID&&(t.sis_user_id=ENV.SIS_USER_ID)
return JSON.stringify(t)}
s.default.mediaComment.contextCode=function(){return ENV.context_asset_string||"user_"+ENV.current_user_id}
function l(e){var t=s.default.mediaComment.contextCode(),i={2:"image",5:"audio"}[e.mediaType]||"video"
t&&s.default.ajaxJSON("/media_objects","POST",{id:e.entryId,type:i,context_code:t,title:e.title,user_entered_title:e.userTitle},function(e){r.default.publish("media_object_created",e)},s.default.noop)
r.default.publish("media_comment_created",{id:e.entryId,mediaType:i,title:e.userTitle})}var c={}
s.default.mediaComment.entryAdded=function(e,t,i,n){if(e&&!c[e]){c[e]=!0
l({mediaType:t,entryId:e,title:i,userTitle:n})}}
s.default.mediaComment.audio_delegate={readyHandler:function(){try{(0,s.default)("#audio_upload")[0].setMediaType("audio")}catch(e){s.default.mediaComment.upload_delegate.setupErrorHandler()}},selectHandler:function(){s.default.mediaComment.upload_delegate.selectHandler("audio")},singleUploadCompleteHandler:function(e){s.default.mediaComment.upload_delegate.singleUploadCompleteHandler("audio",e)},allUploadsCompleteHandler:function(){s.default.mediaComment.upload_delegate.allUploadsCompleteHandler("audio")},entriesAddedHandler:function(e){s.default.mediaComment.upload_delegate.entriesAddedHandler("audio",e)},progressHandler:function(e){s.default.mediaComment.upload_delegate.progressHandler("audio",e[0],e[1],e[2])},uploadErrorHandler:function(){s.default.mediaComment.upload_delegate.uploadErrorHandler("audio")}}
s.default.mediaComment.video_delegate={readyWatcher:null,expectReady:function(){s.default.mediaComment.video_delegate.readyWatcher||(s.default.mediaComment.video_delegate.readyWatcher=setTimeout(s.default.mediaComment.upload_delegate.setupErrorHandler,2e3))},readyHandler:function(){try{(0,s.default)("#video_upload")[0].setMediaType("video")}catch(e){s.default.mediaComment.upload_delegate.setupErrorHandler()}clearTimeout(s.default.mediaComment.video_delegate.readyWatcher)
s.default.mediaComment.video_delegate.readyWatcher=!0},selectHandler:function(){s.default.mediaComment.upload_delegate.selectHandler("video")},singleUploadCompleteHandler:function(e){s.default.mediaComment.upload_delegate.singleUploadCompleteHandler("video",e)},allUploadsCompleteHandler:function(){s.default.mediaComment.upload_delegate.allUploadsCompleteHandler("video")},entriesAddedHandler:function(e){s.default.mediaComment.upload_delegate.entriesAddedHandler("video",e)},progressHandler:function(e){s.default.mediaComment.upload_delegate.progressHandler("video",e[0],e[1],e[2])},uploadErrorHandler:function(){s.default.mediaComment.upload_delegate.uploadErrorHandler("video")}}
s.default.mediaComment.upload_delegate={currentType:"audio",submit:function(){var e=s.default.mediaComment.upload_delegate.currentType,t=(0,s.default)("#"+e+"_upload")[0].getFiles()
t.length>1&&(0,s.default)("#"+e+"_upload")[0].removeFiles(0,t.length-2)
if(0!=(t=(0,s.default)("#"+e+"_upload")[0].getFiles()).length){(0,s.default)("#media_upload_progress").css("visibility","visible").progressbar({value:1});(0,s.default)("#media_upload_submit").attr("disabled",!0).text(a.default.t("messages.submitting","Submitting Media File..."));(0,s.default)("#"+e+"_upload")[0].upload()}},selectHandler:function(e){s.default.mediaComment.upload_delegate.currentType=e
try{var t=(0,s.default)("#"+e+"_upload")[0].getFiles()}catch(e){s.default.mediaComment.upload_delegate.setupErrorHandler()
return}t.length>1&&(0,s.default)("#"+e+"_upload")[0].removeFiles(0,t.length-2)
var i=(0,s.default)("#"+e+"_upload")[0].getFiles()[0];(0,s.default)("#media_upload_settings .icon").attr("src","/images/file-"+e+".png");(0,s.default)("#media_upload_submit").show();(0,s.default)("#media_upload_submit").attr("disabled",!i);(0,s.default)("#media_upload_settings").css("visibility",i?"visible":"hidden");(0,s.default)("#media_upload_title").val(i.title);(0,s.default)("#media_upload_display_title").text(i.title);(0,s.default)("#media_upload_file_size").text(s.default.fileSize(i.bytesTotal));(0,s.default)("#media_upload_feedback_text").html("");(0,s.default)("#media_upload_feedback").css("visibility","hidden")
if(i.bytesTotal>INST.kalturaSettings.max_file_size_bytes){(0,s.default)("#media_upload_feedback_text").html(a.default.t("errors.file_too_large","*This file is too large.* The maximum size is %{size}MB.",{size:INST.kalturaSettings.max_file_size_bytes/1048576,wrapper:"<b>$1</b>"}));(0,s.default)("#media_upload_feedback").css("visibility","visible");(0,s.default)("#media_upload_submit").hide()}else(0,s.default)("#media_upload_submit").click()},singleUploadCompleteHandler:function(e,t){(0,s.default)("#media_upload_progress").progressbar("option","value",100)},allUploadsCompleteHandler:function(e){(0,s.default)("#media_upload_progress").progressbar("option","value",100);(0,s.default)("#"+e+"_upload")[0].addEntries()},entriesAddedHandler:function(e,t){(0,s.default)("#media_upload_progress").progressbar("option","value",100)
var i=t[0];(0,s.default)("#media_upload_submit").text(a.default.t("messages.submitted","Submitted Media File!"))
setTimeout(function(){(0,s.default)("#media_comment_dialog").dialog("close")},1500)
"audio"==e?i.entryType=5:"video"==e&&(i.entryType=1)
s.default.mediaComment.entryAdded(i.entryId,i.entryType,i.title)},progressHandler:function(e,t,i,n){var a=100*t/i;(0,s.default)("#media_upload_progress").progressbar("option","value",a)},uploadErrorHandler:function(e){var t=(0,s.default)("#"+e+"_upload")[0].getError();(0,s.default)("#media_upload_errors").text(a.default.t("errors.upload_failed","Upload failed with error:")+" "+t);(0,s.default)("#media_upload_progress").hide()},setupErrorHandler:function(){(0,s.default)("#media_upload_feedback_text").text(a.default.t("errors.media_comment_installation_broken","Media comment uploading has not been set up properly. Please contact your administrator."));(0,s.default)("#media_upload_feedback").css("visibility","visible");(0,s.default)("#audio_upload_holder").css("visibility","hidden");(0,s.default)("#video_upload_holder").css("visibility","hidden")}}
var _=!1,f=null
s.default.mediaComment.init=function(e,t){i.e(7).then(function(){var o=i("LeFjTU1mPL")
f=f||new Date
e=e||"any"
t=t||{}
var r=s.default.trim((0,s.default)("#identity .user_name").text()||"")
r&&(r=r+": "+(new Date).toString("ddd MMM d, yyyy"))
var d=t.defaultTitle||r||a.default.t("titles.media_contribution","Media Contribution"),u=function(){var i,r
if(INST.kalturaSettings.js_uploader){i=n.getKs()
r=n.getUid()}else{i=m.data("ks")
r=m.data("uid")||"ANONYMOUS"}(0,s.default)("#video_record_title,#audio_record_title").val(d)
m.dialog({title:a.default.t("titles.record_upload_media_comment","Record/Upload Media Comment"),width:560,height:475,modal:!0})
m.dialog("option","close",function(){(0,s.default)("#audio_record").before("<div id='audio_record'/>").remove();(0,s.default)("#video_record").before("<div id='video_record'/>").remove()
t&&t.close&&s.default.isFunction(t.close)&&t.close.call(m)});(0,s.default)("#audio_record").before("<div id='audio_record'/>").remove();(0,s.default)("#video_record").before("<div id='video_record'/>").remove()
if("video"==e){(0,s.default)("#video_record_option").click();(0,s.default)("#media_record_option_holder").hide();(0,s.default)("#audio_upload_holder").hide();(0,s.default)("#video_upload_holder").show()}else if("audio"==e){(0,s.default)("#audio_record_option").click();(0,s.default)("#media_record_option_holder").hide();(0,s.default)("#audio_upload_holder").show();(0,s.default)("#video_upload_holder").hide()}else{(0,s.default)("#video_record_option").click();(0,s.default)("#audio_upload_holder").show();(0,s.default)("#video_upload_holder").show()}(0,s.default)(document).triggerHandler("reset_media_comment_forms")
var u=s.default.trim((0,s.default)("#identity .user_name").text())+" "+(new Date).toISOString()
setTimeout(function(){var e={host:location.protocol+"//"+INST.kalturaSettings.domain,rtmpHost:"rtmp://"+(INST.kalturaSettings.rtmp_domain||INST.kalturaSettings.domain),kshowId:"-1",pid:INST.kalturaSettings.partner_id,subpid:INST.kalturaSettings.subpartner_id,uid:r,ks:i,themeUrl:"/media_record/skin.swf",localeUrl:"/media_record/locale.xml",thumbOffset:"1",licenseType:"CC-0.1",showUi:"true",useCamera:"0",maxFileSize:INST.kalturaSettings.max_file_size_bytes/1048576,maxUploads:1,partnerData:s.default.mediaComment.partnerData(),partner_data:s.default.mediaComment.partnerData(),entryName:u,soundcodec:"Speex"},t={align:"middle",quality:"high",bgcolor:"#ffffff",name:"KRecordAudio",allowScriptAccess:"sameDomain",type:"application/x-shockwave-flash",pluginspage:"http://www.adobe.com/go/getflashplayer",wmode:"opaque"};(0,s.default)("#audio_record").text(a.default.t("messages.flash_required_record_audio","Flash required for recording audio."))
o.embedSWF("/media_record/KRecord.swf","audio_record","400","300","9.0.0",!1,e,t)
t=s.default.extend({},t,{name:"KRecordVideo"}),e=s.default.extend({},e,{useCamera:"1"});(0,s.default)("#video_record").html("Flash required for recording video.")
o.embedSWF("/media_record/KRecord.swf","video_record","400","300","9.0.0",!1,e,t)},INST.browser.ie?500:10)
var l={host:location.protocol+"//"+INST.kalturaSettings.domain,partnerId:INST.kalturaSettings.partner_id,subPId:INST.kalturaSettings.subpartner_id,uid:r,entryId:"-1",ks:i,thumbOffset:"1",licenseType:"CC-0.1",maxFileSize:INST.kalturaSettings.max_file_size_bytes/1048576,maxUploads:1,partnerData:s.default.mediaComment.partnerData(),partner_data:s.default.mediaComment.partnerData(),uiConfId:INST.kalturaSettings.upload_ui_conf,jsDelegate:"$.mediaComment.audio_delegate"},c={align:"middle",quality:"high",bgcolor:"#ffffff",name:"KUpload",allowScriptAccess:"always",type:"application/x-shockwave-flash",pluginspage:"http://www.adobe.com/go/getflashplayer",wmode:"transparent"};(0,s.default)("#audio_upload").text(a.default.t("messages.flash_required_upload_audio","Flash required for uploading audio."))
var f="180",h="50"
o.embedSWF("//"+INST.kalturaSettings.domain+"/kupload/ui_conf_id/"+INST.kalturaSettings.upload_ui_conf,"audio_upload",f,h,"9.0.0",!1,l,c)
l=s.default.extend({},l,{jsDelegate:"$.mediaComment.video_delegate"});(0,s.default)("#video_upload").text(a.default.t("messages.flash_required_upload_video","Flash required for uploading video."))
var p,g,v,y,b,k,w,x
f="180",h="50"
o.embedSWF("//"+INST.kalturaSettings.domain+"/kupload/ui_conf_id/"+INST.kalturaSettings.upload_ui_conf,"video_upload",f,h,"9.0.0",!1,l,c)
var C,E
_=!0
setInterval(function(){if(_){p=(0,s.default)("#audio_record_holder")
g=(0,s.default)("#audio_record")
v=(0,s.default)("#audio_record_meter")
y=0
b=0
k=(0,s.default)("#video_record_holder")
w=(0,s.default)("#video_record")
x=(0,s.default)("#video_record_meter")
C=0
E=0
_=!1}y++
C++
var e=null,t=null
g&&g[0]&&g[0].getMicophoneActivityLevel&&g.parent().length?e=g[0].getMicophoneActivityLevel():g=(0,s.default)("#audio_record")
w&&w[0]&&w[0].getMicophoneActivityLevel&&w.parent().length?t=w[0].getMicophoneActivityLevel():w=(0,s.default)("#video_record")
if(null!=e){if((e=Math.max(e,b))>-1&&!p.hasClass("with_volume")){v.css("display","none");(0,s.default)("#audio_record_holder").addClass("with_volume").animate({width:420},function(){v.css("display","")})}if(y>4){b=0
y=0
var i=(e-e%10)/10
v.attr("class","volume_meter band_"+i)}else b=e}if(null!=t){if((t=Math.max(t,E))>-1&&!k.hasClass("with_volume")){x.css("display","none");(0,s.default)("#video_record_holder").addClass("with_volume").animate({width:420},function(){x.css("display","")})}if(C>4){E=0
C=0
i=(t-t%10)/10
x.attr("class","volume_meter band_"+i)}else E=t}},20)}
if(INST.kalturaSettings.js_uploader){var c=i("uJvXVpBkfw");(n=new c(e,t)).onReady=u
n.addEntry=l}var h=new Date
h-f>3e5&&(0,s.default)("#media_comment_dialog").dialog("close").remove()
f=h
var m=(0,s.default)("#media_comment_dialog")
if(0!=m.length||INST.kalturaSettings.js_uploader)INST.kalturaSettings.js_uploader||u()
else{var p=(0,s.default)("<div/>").attr("id","media_comment_dialog")
p.text(a.default.t("messages.loading","Loading..."))
p.dialog({title:a.default.t("titles.record_upload_media_comment","Record/Upload Media Comment"),resizable:!1,width:470,height:300,modal:!0})
s.default.ajaxJSON("/api/v1/services/kaltura_session","POST",{},function(e){p.data("ks",e.ks)
p.data("uid",e.uid)},function(e){0==e.logged_in?p.data("ks-error",a.default.t("errors.must_be_logged_in","You must be logged in to record media.")):p.data("ks-error",a.default.t("errors.load_failed","Media Comment Application failed to load.  Please try again."))})
!function e(){if(p.data("ks")){var t=i("2JPOf+YwLj")
p.html(t())
p.find("#media_record_tabs").tabs({activate:s.default.mediaComment.video_delegate.expectReady})
u()}else p.data("ks-error")?p.html(p.data("ks-error")):setTimeout(e,500)}()
m=(0,s.default)("#media_comment_dialog")
m=p}}.bind(null,i)).catch(i.oe)};(0,s.default)(document).ready(function(){(0,s.default)(document).bind("reset_media_comment_forms",function(){(0,s.default)("#audio_record_holder_message,#video_record_holder_message").removeClass("saving").find(".recorder_message").html("Saving Recording...<img src='/images/media-saving.gif'/>");(0,s.default)("#audio_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume");(0,s.default)("#video_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume");(0,s.default)("#media_upload_submit").text(a.default.t("buttons.submit","Submit Media File")).attr("disabled",!0);(0,s.default)("#media_upload_settings").css("visibility","hidden");(0,s.default)("#media_upload_progress").css("visibility","hidden").progressbar().progressbar("option","value",1);(0,s.default)("#media_upload_title").val("")
var e=(0,s.default)("#audio_upload")[0]&&(0,s.default)("#audio_upload")[0].getFiles&&(0,s.default)("#audio_upload")[0].getFiles()
e&&(0,s.default)("#audio_upload")[0].removeFiles&&e.length>0&&(0,s.default)("#audio_upload")[0].removeFiles(0,e.length-1);(e=(0,s.default)("#video_upload")[0]&&(0,s.default)("#video_upload")[0].getFiles&&(0,s.default)("#video_upload")[0].getFiles())&&(0,s.default)("#video_upload")[0].removeFiles&&e.length>0&&(0,s.default)("#video_upload")[0].removeFiles(0,e.length-1)});(0,s.default)("#media_upload_submit").live("click",function(e){s.default.mediaComment.upload_delegate.submit()});(0,s.default)("#video_record_option,#audio_record_option").live("click",function(e){e.preventDefault();(0,s.default)("#video_record_option,#audio_record_option").removeClass("selected_option");(0,s.default)(this).addClass("selected_option");(0,s.default)("#audio_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume");(0,s.default)("#video_record_holder").stop(!0,!0).clearQueue().css("width","").removeClass("with_volume")
if("audio_record_option"==(0,s.default)(this).attr("id")){(0,s.default)("#video_record_holder_holder").hide();(0,s.default)("#audio_record_holder_holder").show()}else{(0,s.default)("#video_record_holder_holder").show();(0,s.default)("#audio_record_holder_holder").hide()}})});(0,s.default)(document).bind("media_recording_error",function(){(0,s.default)("#audio_record_holder_message,#video_record_holder_message").find(".recorder_message").html((0,d.default)(a.default.t("errors.save_failed","Saving appears to have failed.  Please close this popup to try again."))+"<div style='font-size: 0.8em; margin-top: 20px;'>"+(0,d.default)(a.default.t("errors.persistent_problem","If this problem keeps happening, you may want to try recording your media locally and then uploading the saved file instead."))+"</div>")})
window.mediaCommentCallback=function(e){o.default.each(e,l);(0,s.default)("#media_comment_create_dialog").empty().dialog("close")}
window.beforeAddEntry=function(){var e=Math.random()
s.default.mediaComment.lastAddAttemptId=e
setTimeout(function(){s.default.mediaComment.lastAddAttemptId==e&&(0,s.default)(document).triggerHandler("media_recording_error")},3e4);(0,s.default)("#audio_record_holder_message,#video_record_holder_message").addClass("saving")}
window.addEntryFail=function(){(0,s.default)(document).triggerHandler("media_recording_error")}
window.addEntryFailed=function(){(0,s.default)(document).triggerHandler("media_recording_error")}
window.addEntryComplete=function(e){s.default.mediaComment.lastAddAttemptId=null;(0,s.default)("#audio_record_holder_message,#video_record_holder_message").removeClass("saving")
try{var t=null
s.default.isArray(e)||(e=[e])
for(var i=0;i<e.length;i++){var n=e[i]
0==(0,s.default)("#media_record_tabs").tabs("option","selected")?t=(0,s.default)("#video_record_title,#audio_record_title").filter(":visible:first").val():(0,s.default)("#media_record_tabs").tabs("option","selected")
1==n.entryType&&(0,s.default)("#audio_record_option").hasClass("selected_option")&&(n.entryType=5)
s.default.mediaComment.entryAdded(n.entryId,n.entryType,n.entryName,t);(0,s.default)("#media_comment_dialog").dialog("close")}}catch(e){console.log(e)
alert(a.default.t("errors.save_failed_try_again","Entry failed to save.  Please try again."))}}},OmVUS6ALVM:function(e,t,i){var n,a
n=[i("wsG6LCw0ui"),i("EV7MgeIKLJ"),i("wmdTCqkKx2")],void 0!==(a=function(e,t,i){function n(){this.settings,this.file
this.xhr}n.id=1
n.prototype.createRequest=function(){var e=new XMLHttpRequest
e.open("POST",this.createUrl())
e.responseType="xml"
return e}
n.prototype.createFormData=function(){var e=new FormData
e.append("Filename",this.file.name)
e.append("Filedata",this.file)
e.append("Upload","Submit Query")
return e}
n.prototype.createFileId=function(){n.id+=1
return Date.now().toString()+n.id.toString()}
n.prototype.createUrl=function(){var e=this.settings.getSession()
e.filename=this.createFileId()
e.kalsig=this.createSignature()
return i.uploadUrl+t(e)}
n.prototype.createSignature=function(){return e(this.settings.getSession())}
n.prototype.buildRequest=function(e,t){this.settings=e
this.file=t
return this.createRequest()}
n.prototype.getFile=function(){return this.file}
n.prototype.getSettings=function(){return this.settings}
return n}.apply(t,n))&&(e.exports=a)},"PO6ncFtsF/":function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=i("36QOWIB4+W"),a=i.n(n),o=i("mOY9BNujNR")
i.n(o).a.extend(!0,a.a,{translations:{ar:{ajax_errors:{error_heading:"خطأ Ajax: %{status_code}",errors:{connection_lost:"تم فقد الاتصال بـ %{host}.  يُرجى التأكد من اتصالك بالإنترنت وحاول من جديد.",logged_out:"أنت غير مسجل الدخول حاليًا، قد يكون السبب في هذا هو فترة عدم النشاط الطويلة.",unhandled:"للأسف! لم يعمل الطلب الأخير."},links:{details:"تفاصيل...",login:"تسجيل الدخول"},no_text:"بدون نص"}},cy:{ajax_errors:{error_heading:"Gwall Ajax: %{status_code}",errors:{connection_lost:"Wedi colli’r cysylltiad â %{host}.  Gwnewch yn siŵr bod gennych chi gysylltiad â’r rhyngrwyd, a rhoi cynnig arall arni.",logged_out:"Dydych chi ddim wedi mewngofnodi ar hyn o bryd, oherwydd nad ydych chi wedi gwneud dim byd ers tro o bosib.",unhandled:"Wps! Dydy’r cais diwethaf ddim wedi gweithio’n iawn."},links:{details:"manylion...",login:"Mewngofnodi"},no_text:"Dim testun"}},da:{ajax_errors:{error_heading:"Ajax-fejl: %{status_code}",errors:{connection_lost:"Forbindelse til %{host} blev tabt.  Sørg for, at du er koblet til nettet og prøv igen.",logged_out:"Du er ikke logget på lige nu, muligvis grundet en længerevarende periode uden aktivitet",unhandled:"Hovsa! Den sidste anmodning mislykkedes."},links:{details:"nærmere oplysninger ...",login:"Login"},no_text:"Ingen tekst"}},"da-x-k12":{ajax_errors:{error_heading:"Ajax-fejl: %{status_code}",errors:{connection_lost:"Forbindelse til %{host} blev tabt.  Sørg for, at du er koblet til nettet og prøv igen.",logged_out:"Du er ikke logget på lige nu, muligvis grundet en længerevarende periode uden aktivitet",unhandled:"Hovsa! Den sidste anmodning mislykkedes."},links:{details:"nærmere oplysninger ...",login:"Login"},no_text:"Ingen tekst"}},de:{ajax_errors:{error_heading:"Ajax-Fehler: %{status_code}",errors:{connection_lost:"Die Verbindung mit %{host} ist abgebrochen. Stellen Sie die Internetverbindung wieder her, und versuchen Sie es erneut.",logged_out:"Sie sind derzeit nicht angemeldet. Der Grund hierfür ist möglicherweise längere Inaktivität.",unhandled:"Hoppla! Die letzte Anfrage war nicht erfolgreich."},links:{details:"Details ...",login:"Anmelden"},no_text:"Kein Text"}},"en-AU":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the Internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-CA":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the Internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-GB":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-GB-x-lbs":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},"en-GB-x-ukhe":{ajax_errors:{error_heading:"Ajax Error: %{status_code}",errors:{connection_lost:"Connection to %{host} was lost.  Please make sure you're connected to the internet and try again.",logged_out:"You are not currently logged in, possibly due to a long period of inactivity.",unhandled:"Oops! The last request didn't work out."},links:{details:"details...",login:"Login"},no_text:"No text"}},es:{ajax_errors:{error_heading:"Error Ajax: %{status_code}",errors:{connection_lost:"La conexión a %{host} se perdió. Por favor asegúrese que está conectado a Internet e intente de nuevo.",logged_out:"Esta sesión no está iniciada actualmente. La causa podría ser un largo período de inactividad.",unhandled:"¡Oops! La última solicitud no funcionó."},links:{details:"detalles...",login:"Iniciar sesión"},no_text:"Sin texto"}},fa:{ajax_errors:{error_heading:"خطای Ajax: %{status_code}",errors:{connection_lost:"اتصال به %{host} از دست رفت. لطفا مطمئن شوید به اینترنت متصل هستید  و دوباره سعی کنید.",logged_out:"احتمالا به دلیل عدم فعالیت به مدت طولانی، در حال حاضر در حالت ورود به سامانه قرار ندارید.",unhandled:"اوه! آخرین درخواست مؤثر نبود."},links:{details:"اطلاعات بیشتر...",login:"ورود"},no_text:"متن موجود نیست"}},fr:{ajax_errors:{error_heading:"Erreur Ajax : %{status_code}",errors:{connection_lost:"La connexion à %{host} a été perdue. Assurez-vous que vous êtes connecté à l’Internet puis réessayez.",logged_out:"Vous n’êtes pas connecté actuellement, probablement en raison d’une trop longue période d’inactivité.",unhandled:"Erreur. Votre dernière demande n’a pas fonctionné."},links:{details:"informations...",login:"Connexion"},no_text:"Aucun texte"}},"fr-CA":{ajax_errors:{error_heading:"Erreur Ajax : %{status_code}",errors:{connection_lost:"La connexion à %{host} a été perdue. Assurez-vous que vous êtes connecté à l’Internet puis réessayez.",logged_out:"Vous n’êtes pas connecté actuellement, probablement en raison d’une trop longue période d’inactivité.",unhandled:"Erreur. Votre dernière demande n’a pas fonctionné."},links:{details:"informations...",login:"Connexion"},no_text:"Aucun texte"}},he:{ajax_errors:{error_heading:"שגיאת AJAX: (תוכנה)  %{status_code}",errors:{connection_lost:"התקשורת ל %{host}  נפסקה. יש לוודא חיבור לאינטרנט ולנסות שוב.",logged_out:"אינך מחובר/ת למערכת, הדבר יכול לקרות עקב אי פעילות לפרק זמן ארוך.",unhandled:"אופס! הבקשה האחרונה לא התבצעה."},links:{details:"פרטים...",login:"התחברות"},no_text:"אין תוכן"}},ht:{ajax_errors:{error_heading:"Erè Ajax: %{status_code}",errors:{connection_lost:"Koneksyon a %{host} te pèdi. Tanpri asire w ke ou konekte sou entènèt epi eseye ankò.",logged_out:"Ou pa konekte pou kounye a, petèt se akòz yon peryòd tan san aktivite.",unhandled:"Oops! Dènye demann lan pa fonksyone."},links:{details:"detay",login:"Koneksyon"},no_text:"San tèks"}},hy:{ajax_errors:{error_heading:"Ajax սխալ՝ %{status_code}",errors:{connection_lost:"%{host}-ի հետ միացումը կորավ: Համոզվեք, որ միացել եք Ինտերնետին և կրկին փորձեք:",logged_out:"Ներկայումս դուք համակարգում չեք, հնարավոր է, երկար ժամանակ գործողությունների բացակայության պատճառով:",unhandled:"Օյ, վերջին հարցումը անհաջող էր:"},links:{details:"մանրամասներ...",login:"Մուտք համակարգ"},no_text:"Տեքստ չկա"}},is:{ajax_errors:{error_heading:"Ajax-villa: %{status_code}",errors:{connection_lost:"Tenging við %{host} rofnaði. Gættu þess að hafa nettengingu og reyndu aftur.",logged_out:"Þú ert ekki með innskráningu, sennilega vegna langs tímabils óvirkni.",unhandled:"Þessi síðasta beiðni tókst ekki."},links:{details:"upplýsingar...",login:"Innskráning"},no_text:"Enginn texti"}},it:{ajax_errors:{error_heading:"Errore Ajax: %{status_code}",errors:{connection_lost:"Connessione a %{host} persa.  Assicurati di essere connesso a Internet e riprova.",logged_out:"Attualmente non sei connesso, probabilmente a causa di un lungo periodo di inattività.",unhandled:"Spiacenti. L'ultima richiesta non ha funzionato."},links:{details:"dettagli...",login:"Accedi"},no_text:"Nessun testo"}},ja:{ajax_errors:{error_heading:"Ajax エラー: %{status_code}",errors:{connection_lost:"%{host} への接続が失われました。インターネットに接続していることを確認してから、もう一度試してください。",logged_out:"現在ログインしていません。おそらく非アクティブの期間が長く続いたためと思われます。",unhandled:"問題が発生しました!前回の要求は失敗しています。"},links:{details:"詳細...",login:"ログイン"},no_text:"テキストはありません"}},ko:{ajax_errors:{error_heading:"Ajax 오류: %{status_code}",errors:{connection_lost:"%{host}와의 연결이 끊어졌습니다. 인터넷에 연결되어 있는지 확인하고 다시 시도하시기 바랍니다.",unhandled:"마지막 요청이 동작하지 않았습니다."},links:{details:"세부 정보",login:"로그인"},no_text:"텍스트 없음"}},mi:{ajax_errors:{error_heading:"Hapa Ajax: %{status_code}",errors:{connection_lost:"I ngaro hononga ki %{host}. Tēnā kia tūhono koe ki te Ipurangi, me te ngana anō.",logged_out:"E kore Kua takiuru koe i roto i, pea e tika ana ki te hohekore te wā roa.",unhandled:"Oops! Kihai i mahi i roto i te tono whakamutunga."},links:{details:"taipitopito ...",login:"Kuhunga"},no_text:"Kāore he kuputuhi"}},nb:{ajax_errors:{error_heading:"Ajax avvik: %{status_code}",errors:{connection_lost:"Tilkobling til %{host} ble brutt.  Sjekk at du er tilkoblet Internett og forsøk igjen.",logged_out:"Du er ikke logget inn, eventuelt på grunn av en lang periode av inaktivitet.",unhandled:"Oops! Den siste forespørselen fungerte ikke."},links:{details:"detaljer...",login:"Logg inn"},no_text:"Ingen tekst"}},"nb-x-k12":{ajax_errors:{error_heading:"Ajax avvik: %{status_code}",errors:{connection_lost:"Tilkobling til %{host} ble brutt.  Sjekk at du er tilkoblet Internett og forsøk igjen.",logged_out:"Du er ikke logget inn, eventuelt på grunn av en lang periode av inaktivitet.",unhandled:"Oops! Den siste forespørselen fungerte ikke."},links:{details:"detaljer...",login:"Logg inn"},no_text:"Ingen tekst"}},nl:{ajax_errors:{error_heading:"Ajax-fout: %{status_code}",errors:{connection_lost:"Verbinding met %{host} is verbroken. Controleer of er verbinding is met internet en probeer het opnieuw.",logged_out:"Je bent momenteel niet aangemeld, mogelijk als gevolg van een lange periode van inactiviteit.",unhandled:"Oeps! Het laatste verzoek is mislukt."},links:{details:"details...",login:"Aanmelden"},no_text:"Geen tekst"}},nn:{ajax_errors:{error_heading:"AJAX-feil: %{status_code}",errors:{connection_lost:"Tilkopling til %{host} er tapt.  Kontroller om du er tilkopla Internett og prøv på nytt.",logged_out:"Du er ikkje pålogga akkurat no, kanskje på grunn av ei lang periode utan aktivitet.",unhandled:"Ops! Den siste førespurnaden fungerte ikkje."},links:{details:"detaljar...",login:"Pålogging"},no_text:"Ingen tekst"}},pl:{ajax_errors:{error_heading:"Błąd programu Ajax: %{status_code}",errors:{connection_lost:"Utracono połączenie z %{host}.  Sprawdź połączenie z Internetem i spróbuj ponownie.",logged_out:"Uczestnik nie jest teraz zalogowany, prawdopodobnie z powodu długiego okresu nieaktywności.",unhandled:"Niestety! Ostatnie żądanie nie zostało zrealizowane."},links:{details:"informacje szczegółowe...",login:"Zaloguj"},no_text:"Brak tekstu"}},pt:{ajax_errors:{error_heading:"Erro Ajax: %{status_code}",errors:{connection_lost:"A ligação a %{host} foi perdida.  Verifique se está ligado à Internet e tente novamente.",logged_out:"Não tem sessão iniciada de momento, possivelmente devido a um longo período de inatividade.",unhandled:"Oops! A última solicitação não funcionou."},links:{details:"detalhes...",login:"Iniciar sessão"},no_text:"Nenhum texto"}},"pt-BR":{ajax_errors:{error_heading:"Erro Ajax: %{status_code}",errors:{connection_lost:"A conexão com %{host} foi perdida. Verifique se você está conectado com a Internet e tente novamente.",logged_out:"Você não está registrado atualmente, talvez por um período grande de inatividade.",unhandled:"Oops! A última solicitação não funcionou."},links:{details:"detalhes...",login:"Login"},no_text:"Nenhum texto"}},ru:{ajax_errors:{error_heading:"Ошибка Ajax: %{status_code}",errors:{connection_lost:"Подключение к %{host} было потеряно.  Убедитесь, что вы подключены к Интернету, и повторите попытку.",logged_out:"В настоящее время вы не находитесь в системе, возможно, из-за отсутствия действий в течение длительного времени.",unhandled:"Ой! Последний запрос не сработал."},links:{details:"сведения...",login:"Вход в систему"},no_text:"Нет текста"}},sv:{ajax_errors:{error_heading:"Ajax fel: %{status_code}",errors:{connection_lost:"Anslutningen till %{host} förlorades. Vänligen kontrollera att du är ansluten till Internet och försök igen.",logged_out:"Du är för närvarande inte inloggad, förmodligen på grund av en lång period av inaktivitet.",unhandled:"Oj! Den senaste förfrågan fungerade inte."},links:{details:"detaljer...",login:"Logga in"},no_text:"Ingen text"}},"sv-x-k12":{ajax_errors:{error_heading:"Ajax fel: %{status_code}",errors:{connection_lost:"Anslutningen till %{host} förlorades. Vänligen kontrollera att du är ansluten till Internet och försök igen.",logged_out:"Du är för närvarande inte inloggad, förmodligen på grund av en lång period av inaktivitet.",unhandled:"Oj! Den senaste förfrågan fungerade inte."},links:{details:"detaljer...",login:"Logga in"},no_text:"Ingen text"}},tr:{ajax_errors:{error_heading:"Ajax Hatası: %{status_code}",errors:{connection_lost:"%{host} sunucusuna bağlantı kayboldu. İnternet'e bağlı olduğunuzdan emin olun ve tekrar deneyin.",logged_out:"Şu anda oturumunuz açık değil. Muhtemelen uzun süre hiçbir şey yapmadınız.",unhandled:"Oops! Son istek çalıştırılamadı."},links:{details:"ayrıntılar...",login:"Oturum Aç"},no_text:"Metin yok"}},"zh-Hans":{ajax_errors:{error_heading:"Ajax 错误: %{status_code}",errors:{connection_lost:"到 %{host} 的连接丢失。请确保已连接到 Internet，然后重试。",logged_out:"您当前尚未登录，可能是非活动时间太长所致。",unhandled:"噢！上一个请求未解决。"},links:{details:"详细信息...",login:"登录"},no_text:"无文本"}},"zh-Hant":{ajax_errors:{error_heading:"Ajax 錯誤：%{status_code}",errors:{connection_lost:"至 %{host} 的連接失敗。請確保已連接至 Internet，然後再試一次。",logged_out:"您當前未登入，可能是因為您長時間沒有操作。",unhandled:"哎呀！最後一個要求沒有成功。"},links:{details:"詳細資料…",login:"登入"},no_text:"無文字"}}}})},PYCyImFiAC:function(e,t,i){"use strict"
var n=o(i("whMk0QU2To")),a=o(i("mOY9BNujNR"))
i("Q4xR9Iqymk")
function o(e){return e&&e.__esModule?e:{default:e}}(0,a.default)(document).ready(function(){var e=0,t=window.ENV.page_view_update_url
d=!1
n.default.interaction_contexts={}
if(document.cookie&&document.cookie.match(/last_page_view/)){var i=document.cookie.match(/last_page_view=([^;]+)/)
if(i&&i[1])try{var o=a.default.parseJSON(unescape(i[1]))
o&&o.url&&o.seconds&&setTimeout(function(){a.default.ajaxJSON(o.url,"PUT",{interaction_seconds:o.seconds},function(){},function(){},3e3)})}catch(e){}document.cookie="last_page_view=; Path=/; expires=Thu, 01-Jan-1970 00:00:01 GMT"}if(t){var r,s=0;(0,a.default)(document).bind("page_view_update_url_received",function(e,i){t=i});(0,a.default)(document).bind("page_view_update",function(i,n){var o={}
if(n||e>10&&s<300){o.interaction_seconds=e
a.default.ajaxJSON(t,"PUT",o,null,function(e,t){422===t.status&&clearInterval(r)})
e=0}})
r=setInterval(function(){(0,a.default)(document).triggerHandler("page_view_update")},3e5)
window.addEventListener("beforeunload",function(i){if(e>30){var n=JSON.stringify({url:t,seconds:e})
document.cookie="last_page_view="+escape(n)+"; Path=/;"}})
var d=!1;(0,a.default)(document).bind("mousemove keypress mousedown focus",function(){d=!0})
setInterval(function(){if(d){e++
n.default&&n.default.interaction_context&&n.default.interaction_contexts&&(n.default.interaction_contexts[n.default.interaction_context]=(n.default.interaction_contexts[n.default.interaction_context]||0)+1)
d=!1
if(s>=300){s=0;(0,a.default)(document).triggerHandler("page_view_update")}s=0}else s++},1e3)}})},"QE/xL6drvs":function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
if(ENV.ping_url)var r=setInterval(function(){document.hidden||o.default.post(ENV.ping_url).fail(function(e){401===e.status&&clearInterval(r)})},18e4)},QfIG3OPdTK:function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
i("O9QjtziI9Q")
i("1YHB9uvbU1")
i("Nf4R7G01V5")
var r=i("i8I74pbaWm")
var s,d,u,l=(s={"left+":"right-","left-":"right+",left:"right","right+":"left-","right-":"left+",right:"left"},d=new RegExp(Object.keys(s).map(function(e){return e.replace(/[\-\+]/g,"\\$&")}).join("|")),u=function(e){return e.replace(d,function(e){return s[e]||e})},function(e,t){if((0,r.isRTL)(e)){t.my=u(t.my)
t.at=u(t.at)}}),c=0
o.default.widget("ui.tooltip",{version:"@VERSION",options:{content:function(){return(0,o.default)(this).attr("title")},hide:!0,items:"[title]",position:{my:"left+15 center",at:"right center",collision:"flipfit flipfit"},show:!0,tooltipClass:null,track:!1,close:null,open:null},_create:function(){l(this.element[0],this.options.position)
this._on({mouseover:"open",focusin:"open"})
this.tooltips={}},_setOption:function(e,t){if("disabled"!==e)this._super(e,t)
else{this[t?"_disable":"_enable"]()
this.options[e]=t}},_disable:function(){var e=this
o.default.each(this.tooltips,function(t,i){var n=o.default.Event("blur")
n.target=n.currentTarget=i[0]
e.close(n,!0)})
this.element.find(this.options.items).andSelf().each(function(){var e=(0,o.default)(this)
e.is("[title]")&&e.data("ui-tooltip-title",e.attr("title")).attr("title","")})},_enable:function(){this.element.find(this.options.items).andSelf().each(function(){var e=(0,o.default)(this)
e.data("ui-tooltip-title")&&e.attr("title",e.data("ui-tooltip-title"))})},open:function(e){var t,i=this,n=(0,o.default)(e?e.target:this.element).closest(this.options.items)
if(n.length)if(this.options.track&&n.data("ui-tooltip-id"))this._find(n).position(o.default.extend({of:n},this.options.position))
else{n.attr("title")&&n.data("ui-tooltip-title",n.attr("title"))
n.data("tooltip-open",!0);(t=this.options.content.call(n[0],function(t){n.data("tooltip-open")&&setTimeout(function(){i._open(e,n,t)},1)}))&&i._open(e,n,t)}},_open:function(e,t,i){var n,a
if(i)if((n=this._find(t)).length)n.find(".ui-tooltip-content").html(i)
else{t.is("[title]")&&(e&&"mouseover"===e.type?t.attr("title",""):t.removeAttr("title"))
n=this._tooltip(t)
!function(e,t){var i=(e.attr("aria-describedby")||"").split(/\s+/)
i.push(t)
e.data("ui-tooltip-id",t).attr("aria-describedby",o.default.trim(i.join(" ")))}(t,n.attr("id"))
n.find(".ui-tooltip-content").html(i)
if(this.options.track&&e&&/^mouse/.test(e.originalEvent.type)){a=o.default.extend({},this.options.position)
this._on(this.document,{mousemove:r})
r(e)}else n.position(o.default.extend({of:t},this.options.position))
n.hide()
this._show(n,this.options.show)
this._trigger("open",e,{tooltip:n})
this._on(t,{mouseleave:"close",focusout:"close",keyup:function(e){if(e.keyCode===o.default.ui.keyCode.ESCAPE){var i=o.default.Event(e)
i.currentTarget=t[0]
this.close(i,!0)}}})}function r(e){a.of=e
n.position(a)}},close:function(e,t){var i=this,n=(0,o.default)(e?e.currentTarget:this.element),a=this._find(n)
if(!this.closing&&(t||!e||"focusout"===e.type||this.document[0].activeElement!==n[0])){n.data("ui-tooltip-title")&&n.attr("title",n.data("ui-tooltip-title"))
!function(e){var t=e.data("ui-tooltip-id"),i=(e.attr("aria-describedby")||"").split(/\s+/),n=o.default.inArray(t,i);-1!==n&&i.splice(n,1)
e.removeData("ui-tooltip-id");(i=o.default.trim(i.join(" ")))?e.attr("aria-describedby",i):e.removeAttr("aria-describedby")}(n)
a.stop(!0)
this._hide(a,this.options.hide,function(){(0,o.default)(this).remove()
delete i.tooltips[this.id]})
n.removeData("tooltip-open")
this._off(n,"mouseleave focusout keyup")
this._off(this.document,"mousemove")
this.closing=!0
this._trigger("close",e,{tooltip:a})
this.closing=!1}},_tooltip:function(e){var t="ui-tooltip-"+c++,i=(0,o.default)("<div>").attr({id:t,role:"tooltip"}).addClass("ui-tooltip ui-widget ui-corner-all ui-widget-content "+(this.options.tooltipClass||""));(0,o.default)("<div>").addClass("ui-tooltip-content").appendTo(i)
i.appendTo(this.document[0].body)
o.default.fn.bgiframe&&i.bgiframe()
this.tooltips[t]=e
return i},_find:function(e){var t=e.data("ui-tooltip-id")
return t?(0,o.default)("#"+t):(0,o.default)()},_destroy:function(){o.default.each(this.tooltips,function(e){(0,o.default)("#"+e).remove()})}})},"SAJYeZn/X9":function(e,t,i){var n
void 0!==(n=function(){return function(e,t,i){(function(e,t){return e&&void 0!==e[t]})(i,e)&&(t[e]=i[e])}}.apply(t,[]))&&(e.exports=n)},Swn6SeDoYc:function(e,t,i){var n,a,o=function(e,t){return function(){return e.apply(t,arguments)}}
n=[i("mOY9BNujNR")],void 0!==(a=function(e){return function(){function t(){this.loadSession=o(this.loadSession,this)}t.prototype.loadSession=function(t,i,n){var a
i
n
e.ajaxJSON(t,"POST",{},(a=this,function(e){if(e.ks){e.ui_conf_id=INST.kalturaSettings.upload_ui_conf
a.kalturaSession=e
return i.call()}return n.call()}))
return!0}
t.prototype.generateUploadOptions=function(t){return{kaltura_session:this.kalturaSession,allowedMediaTypes:t,uploadUrl:this.kalturaUrl("/index.php/partnerservices2/upload"),entryUrl:this.kalturaUrl("/index.php/partnerservices2/addEntry"),uiconfUrl:this.kalturaUrl("/index.php/partnerservices2/getuiconf"),entryDefaults:{partnerData:e.mediaComment.partnerData()}}}
t.prototype.kalturaUrl=function(e){return location.protocol+"//"+INST.kalturaSettings.domain+e}
return t}()}.apply(t,n))&&(e.exports=a)},TEJtO8kTF9:function(e,t,i){var n,a
n=[i("mOY9BNujNR"),i("2JPOf+YwLj")],void 0!==(a=function(e,t){return function(){function i(){}i.prototype.loadTabs=function(i){i(t())
return e("#media_comment_dialog")}
return i}()}.apply(t,n))&&(e.exports=a)},TYNg0f0fQv:function(e,t,i){var n
void 0!==(n=function(){var e=0
function t(e){return n(i(a(e)))}function i(e){return r(s(o(e),8*e.length))}function n(t){for(var i,n=e?"0123456789ABCDEF":"0123456789abcdef",a="",o=0;o<t.length;o++){i=t.charCodeAt(o)
a+=n.charAt(i>>>4&15)+n.charAt(15&i)}return a}function a(e){for(var t,i,n="",a=-1;++a<e.length;){t=e.charCodeAt(a)
i=a+1<e.length?e.charCodeAt(a+1):0
if(55296<=t&&t<=56319&&56320<=i&&i<=57343){t=65536+((1023&t)<<10)+(1023&i)
a++}t<=127?n+=String.fromCharCode(t):t<=2047?n+=String.fromCharCode(192|t>>>6&31,128|63&t):t<=65535?n+=String.fromCharCode(224|t>>>12&15,128|t>>>6&63,128|63&t):t<=2097151&&(n+=String.fromCharCode(240|t>>>18&7,128|t>>>12&63,128|t>>>6&63,128|63&t))}return n}function o(e){for(var t=Array(e.length>>2),i=0;i<t.length;i++)t[i]=0
for(i=0;i<8*e.length;i+=8)t[i>>5]|=(255&e.charCodeAt(i/8))<<i%32
return t}function r(e){for(var t="",i=0;i<32*e.length;i+=8)t+=String.fromCharCode(e[i>>5]>>>i%32&255)
return t}function s(e,t){e[t>>5]|=128<<t%32
e[14+(t+64>>>9<<4)]=t
for(var i=1732584193,n=-271733879,a=-1732584194,o=271733878,r=0;r<e.length;r+=16){var s=i,d=n,h=a,m=o
n=_(n=_(n=_(n=_(n=c(n=c(n=c(n=c(n=l(n=l(n=l(n=l(n=u(n=u(n=u(n=u(n,a=u(a,o=u(o,i=u(i,n,a,o,e[r+0],7,-680876936),n,a,e[r+1],12,-389564586),i,n,e[r+2],17,606105819),o,i,e[r+3],22,-1044525330),a=u(a,o=u(o,i=u(i,n,a,o,e[r+4],7,-176418897),n,a,e[r+5],12,1200080426),i,n,e[r+6],17,-1473231341),o,i,e[r+7],22,-45705983),a=u(a,o=u(o,i=u(i,n,a,o,e[r+8],7,1770035416),n,a,e[r+9],12,-1958414417),i,n,e[r+10],17,-42063),o,i,e[r+11],22,-1990404162),a=u(a,o=u(o,i=u(i,n,a,o,e[r+12],7,1804603682),n,a,e[r+13],12,-40341101),i,n,e[r+14],17,-1502002290),o,i,e[r+15],22,1236535329),a=l(a,o=l(o,i=l(i,n,a,o,e[r+1],5,-165796510),n,a,e[r+6],9,-1069501632),i,n,e[r+11],14,643717713),o,i,e[r+0],20,-373897302),a=l(a,o=l(o,i=l(i,n,a,o,e[r+5],5,-701558691),n,a,e[r+10],9,38016083),i,n,e[r+15],14,-660478335),o,i,e[r+4],20,-405537848),a=l(a,o=l(o,i=l(i,n,a,o,e[r+9],5,568446438),n,a,e[r+14],9,-1019803690),i,n,e[r+3],14,-187363961),o,i,e[r+8],20,1163531501),a=l(a,o=l(o,i=l(i,n,a,o,e[r+13],5,-1444681467),n,a,e[r+2],9,-51403784),i,n,e[r+7],14,1735328473),o,i,e[r+12],20,-1926607734),a=c(a,o=c(o,i=c(i,n,a,o,e[r+5],4,-378558),n,a,e[r+8],11,-2022574463),i,n,e[r+11],16,1839030562),o,i,e[r+14],23,-35309556),a=c(a,o=c(o,i=c(i,n,a,o,e[r+1],4,-1530992060),n,a,e[r+4],11,1272893353),i,n,e[r+7],16,-155497632),o,i,e[r+10],23,-1094730640),a=c(a,o=c(o,i=c(i,n,a,o,e[r+13],4,681279174),n,a,e[r+0],11,-358537222),i,n,e[r+3],16,-722521979),o,i,e[r+6],23,76029189),a=c(a,o=c(o,i=c(i,n,a,o,e[r+9],4,-640364487),n,a,e[r+12],11,-421815835),i,n,e[r+15],16,530742520),o,i,e[r+2],23,-995338651),a=_(a,o=_(o,i=_(i,n,a,o,e[r+0],6,-198630844),n,a,e[r+7],10,1126891415),i,n,e[r+14],15,-1416354905),o,i,e[r+5],21,-57434055),a=_(a,o=_(o,i=_(i,n,a,o,e[r+12],6,1700485571),n,a,e[r+3],10,-1894986606),i,n,e[r+10],15,-1051523),o,i,e[r+1],21,-2054922799),a=_(a,o=_(o,i=_(i,n,a,o,e[r+8],6,1873313359),n,a,e[r+15],10,-30611744),i,n,e[r+6],15,-1560198380),o,i,e[r+13],21,1309151649),a=_(a,o=_(o,i=_(i,n,a,o,e[r+4],6,-145523070),n,a,e[r+11],10,-1120210379),i,n,e[r+2],15,718787259),o,i,e[r+9],21,-343485551)
i=f(i,s)
n=f(n,d)
a=f(a,h)
o=f(o,m)}return Array(i,n,a,o)}function d(e,t,i,n,a,o){return f((r=f(f(t,e),f(n,o)))<<(s=a)|r>>>32-s,i)
var r,s}function u(e,t,i,n,a,o,r){return d(t&i|~t&n,e,t,a,o,r)}function l(e,t,i,n,a,o,r){return d(t&n|i&~n,e,t,a,o,r)}function c(e,t,i,n,a,o,r){return d(t^i^n,e,t,a,o,r)}function _(e,t,i,n,a,o,r){return d(i^(t|~n),e,t,a,o,r)}function f(e,t){var i=(65535&e)+(65535&t)
return(e>>16)+(t>>16)+(i>>16)<<16|65535&i}return{encrypt:t}}.apply(t,[]))&&(e.exports=n)},UFR79ninI6:function(e,t,i){var n,a
n=[i("j1K+QE411H"),i("wmdTCqkKx2"),i("5iYkB5tAnT")],void 0!==(a=function(e,t,i){function n(){this.sessionData=new i}n.prototype.loadSession=function(){var e=new XMLHttpRequest
e.open("POST",t.sessionUrl,!0)
e.responseType="json"
e.onload=this.onSessionLoaded.bind(this)
e.send()}
n.prototype.onSessionLoaded=function(t){var i=t.target
if(200==i.status){this.sessionData.setSession(i.response)
e.dispatchEvent("SessionManager.complete",this.sessionData,this)}else e.dispatchEvent("SessionManager.error")}
n.prototype.getSession=function(){return this.sessionData}
return n}.apply(t,n))&&(e.exports=a)},V0DFOiAOkw:function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
i("VHZX6oywWS")
var r=o.default.ui.menu.prototype,s=r.refresh
o.default.extend(r,{refresh:function(){s.call(this)
var e=this,t=this.element.find("li.ui-menu-item"),i=!1
this.element.bind("click.menu",function(e){new RegExp(/^a$/i).test(e.target.tagName)||e.preventDefault()})
var n=0
this.element.find("input[type='checkbox'], input[type='radio']").each(function(){var e=(0,o.default)(this).closest("label")
if(e.length){(0,o.default)(this).insertBefore(e);(0,o.default)(this).attr("id")||(0,o.default)(this).attr("id","ui-input-"+n++)
e.attr("for",(0,o.default)(this).attr("id"))}})
this.element.bind("menufocus",function(e){var t=(0,o.default)(e.target).find("a.ui-state-focus").children("input[type='text']")
t.length&&t[0].focus()})
this.element.bind("popupopen",function(t){var i=(0,o.default)(t.target).find("input[type=radio][checked]").closest(".ui-menu-item")
i.length&&setTimeout(function(){e.focus(t,i)},0)}).bind("menublur",function(e){var t=(0,o.default)(e.target).find("input[type='text']:focus")
t.length&&t[0].blur()})
t.children("a").each(function(e,t){var n=(0,o.default)(t),a=n.parent()
if(n.children().is("input[type='checkbox'], input[type='radio']")){n.closest("ul").addClass("ui-menu-icons")
if(n.children("input[type='checkbox']").is(":checked")){n.prepend('<span class="ui-icon ui-icon-check"></span>')
a.attr({role:"menuitemcheckbox","aria-checked":"true"})}else if(n.children("input[type='radio']").is(":checked")){n.prepend('<span class="ui-icon ui-icon-radio-on"></span>')
a.attr({role:"menuitemradio","aria-checked":"true"})}else if(n.children("input[type='radio']").length){n.prepend('<span class="ui-icon ui-icon-radio-off"></span>')
a.attr({role:"menuitemradio","aria-checked":"false"})}else a.attr({role:"menuitemcheckbox","aria-checked":"false"})
n.children().is("input[type='radio']")&&a.attr("radio-group",n.children("input[type='radio']").attr("name"))
if(a.prev().length&&!a.prev().children("a").length){a.prev().addClass("ui-state-disabled").html("<span class='ui-menu-input-group'>"+a.prev().html()+"</span>").bind("click.menu",function(e){return!1}).after("<li><hr /></li>")
i=!0}else a.prev().length&&!a.prev().children("a").children().is("input[type='checkbox'], input[type='radio']")&&a.before("<li><hr /></li>")
if(i&&a.next().length&&!a.next().children("a").children().is("input[type='checkbox'], input[type='radio']")){a.after("<li><hr /></li>")
i=!1}else a.next().length&&!a.next().children("a").children().is("input[type='checkbox'], input[type='radio']")&&a.after("<li><hr /></li>")
n.children("input[type='checkbox'], input[type='radio']").hide()}})
t.bind("keydown.menu",function(t){if(t.keyCode===o.default.ui.keyCode.SPACE){if(e.active.children("a").children().is("input[type='checkbox'], input[type='radio']")){e.select(t)
t.stopImmediatePropagation()}t.preventDefault()}})
t.find("input[type='text']").bind("keydown",function(t){t.stopPropagation()
if(t.keyCode===o.default.ui.keyCode.UP){e.element.trigger("focus")
this.blur()
e.focus(t,(0,o.default)(this).closest(".ui-menu-item").prev())}if(t.keyCode===o.default.ui.keyCode.DOWN){e.element.trigger("focus")
this.blur()
e.focus(t,(0,o.default)(this).closest(".ui-menu-item").next())}}).bind("click",function(e){e.stopPropagation()})},select:function(e){var t={item:this.active||(0,o.default)(e.target).closest(".ui-menu-item")}
if(t.item.children("a").children().is("input[type='checkbox']"))if("false"===t.item.attr("aria-checked")){t.item.children("a").prepend('<span class="ui-icon ui-icon-check"></span>')
t.item.attr("aria-checked","true")
t.item.children("a").children("input[type='checkbox']").prop("checked","checked").trigger("change")}else if("true"===t.item.attr("aria-checked")){t.item.children("a").children("span.ui-icon-check").remove()
t.item.attr("aria-checked","false")
t.item.children("a").children("input[type='checkbox']").removeAttr("checked").trigger("change")}if(t.item.children("a").children().is("input[type='radio']")&&"false"===t.item.attr("aria-checked")){t.item.children("a").children("span.ui-icon-radio-off").toggleClass("ui-icon-radio-on ui-icon-radio-off")
t.item.attr("aria-checked","true")
t.item.children("a").children("input[type='radio']").prop("checked","checked").trigger("change")
t.item.siblings("[radio-group="+(0,o.default)(t.item).attr("radio-group")+"]").each(function(){(0,o.default)(this).attr("aria-checked","false");(0,o.default)(this).children("a").children("span.ui-icon-radio-on").toggleClass("ui-icon-radio-on ui-icon-radio-off");(0,o.default)(this).children("a").children("input[type='radio']").removeAttr("checked")})}t.item.children("a").children().is("input[type='checkbox'], input[type='radio']")||this.collapseAll()
this._trigger("select",e,t)}})},VDPlEqaRwD:function(e,t,i){"use strict"
var n=u(i("mOY9BNujNR")),a=u(i("iBw8ZGM6v8")),o=u(i("klGFYzYm7x")),r=u(i("cyMNwMhBvy")),s=u(i("ir8pL/Ro1S")),d=i("/rriEg1pXh")
i("XDPawBHrta")
i("Q4xR9Iqymk")
i("Q/pI8WL7wG")
i("FjPpBpSp8P")
i("pwv1UBr9wT")
i("BIYSGtzGjH")
i("WskX5tno7F")
i("PYCyImFiAC")
i("OHJtctF3NN")
i("zr2HOwddfD")
i("EKuPgEpL6b")
i("KPRNYFd0CF")
i("FMOK6cJcp3")
i("q97HwXzRnE")
i("2aUY+gHXYk")
i("CU+gNa7iD4")
i("QE/xL6drvs")
i("LShObMQJhT")
i("Eq7qibUFi3")
i("50cA3losjn")
i("OGUJHwbmJb")
i("K/mYXqZAKq")
i("11DZr9oB9c")
i("oxTDiksfqi")
i("a+Os3Kvywv")
i("PJh52PO9+b")
function u(e){return e&&e.__esModule?e:{default:e}}(0,n.default)("html").removeClass("scripts-not-loaded");(0,n.default)(".help_dialog_trigger").click(function(e){e.preventDefault()
i.e(17).then(function(e){i("il47VCngrj").open()}.bind(null,i)).catch(i.oe)});(0,n.default)("#skip_navigation_link").on("click",function(e){e.preventDefault();(0,n.default)((0,n.default)(this).attr("href")).attr("tabindex",-1).focus()})
var l=1200
function c(){var e=(0,n.default)("body").hasClass("course-menu-expanded")||(0,n.default)(document).width()>=l-15?0:-1;(0,n.default)("#section-tabs li a").attr("tabIndex",e)}(0,n.default)(c);(0,n.default)(window).on("resize",a.default.debounce(c,50));(0,n.default)("body").on("click","#courseMenuToggle",function(){(0,n.default)("body").toggleClass("course-menu-expanded");(0,r.default)();(0,n.default)("#left-side").css({display:(0,n.default)("body").hasClass("course-menu-expanded")?"block":"none"})
c()});(0,n.default)("body").on("click","[data-pushstate]",function(e){e.preventDefault()
o.default.history.navigate((0,n.default)(this).attr("href"),!0)})
window.ENV.NEW_USER_TUTORIALS&&window.ENV.NEW_USER_TUTORIALS.is_enabled&&window.ENV.context_asset_string&&"courses"===(0,s.default)(window.ENV.context_asset_string)[0]&&i.e(10).then(function(e){i("72sEc2o3li")()}.bind(null,i)).catch(i.oe)
!(window.navigator.userAgent.indexOf("Edge")>-1)&&window.CSS&&window.CSS.supports&&window.CSS.supports("(--foo: red)")||i.e(19).then(function(e){window.canvasCssVariablesPolyfill=i("yLhLh4Z3xO")}.bind(null,i)).catch(i.oe);(0,n.default)(function(){(0,d.isMathMLOnPage)()&&(0,d.loadMathJax)("MML_HTMLorMML.js")})},VHZX6oywWS:function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
i("O9QjtziI9Q")
i("1YHB9uvbU1")
function r(){return[].some.call((0,o.default)(this).parents().andSelf(),function(e){return"none"==o.default.css(e,"display")})}var s=!1
o.default.widget("ui.menu",{version:"@VERSION",defaultElement:"<ul>",delay:300,options:{icons:{submenu:"ui-icon-carat-1-e"},menus:"ul",position:{my:"left top",at:"right top"},role:"menu",blur:null,focus:null,select:null},_create:function(){this.activeMenu=this.element
this.element.uniqueId().addClass("ui-menu ui-widget ui-widget-content ui-corner-all").toggleClass("ui-menu-icons",!!this.element.find(".ui-icon").length).attr({role:this.options.role,tabIndex:0}).bind("click"+this.eventNamespace,o.default.proxy(function(e){this.options.disabled&&e.preventDefault()},this))
this.options.disabled&&this.element.addClass("ui-state-disabled").attr("aria-disabled","true")
this._on({"mousedown .ui-menu-item > a":function(e){e.preventDefault()},"click .ui-state-disabled > a":function(e){e.preventDefault()},"click .ui-menu-item:has(a)":function(e){var t=(0,o.default)(e.target)
if(!s&&t.closest(".ui-menu-item").not(".ui-state-disabled").length){s=!0
this.select(e)
this.element.has(".ui-menu").length?this.expand(e):this.element.is(":focus")||this.element.focus()}},"mouseenter .ui-menu-item":function(e){var t=(0,o.default)(e.currentTarget)
t.siblings().children(".ui-state-active").removeClass("ui-state-active")
this.focus(e,t)},mouseleave:"collapseAll","mouseleave .ui-menu":"collapseAll",focus:function(e){var t=this.active||this.element.children(".ui-menu-item").not(r).eq(0)
t.length&&this.focus(e,t)},blur:function(e){this._delay(function(){o.default.contains(this.element[0],this.document[0].activeElement)||this.collapseAll(e)})},keydown:"_keydown"})
this.refresh()
this._on(this.document,{click:function(e){(0,o.default)(e.target).closest(".ui-menu").length||this.collapseAll(e)
s=!1}})},_destroy:function(){this.element.removeAttr("aria-activedescendant").find(".ui-menu").andSelf().removeClass("ui-menu ui-widget ui-widget-content ui-corner-all ui-menu-icons").removeAttr("role").removeAttr("tabIndex").removeAttr("aria-labelledby").removeAttr("aria-expanded").removeAttr("aria-hidden").removeAttr("aria-disabled").removeUniqueId().show()
this.element.find(".ui-menu-item").removeClass("ui-menu-item").removeAttr("role").removeAttr("aria-disabled").children("a").removeUniqueId().removeClass("ui-corner-all ui-state-hover").removeAttr("tabIndex").removeAttr("role").removeAttr("aria-haspopup").children().each(function(){var e=(0,o.default)(this)
e.data("ui-menu-submenu-carat")&&e.remove()})
this.element.find(".ui-menu-divider").removeClass("ui-menu-divider ui-widget-content")},_keydown:function(e){var t,i,n,a,s,d=!0
function u(e){return e.replace(/[\-\[\]{}()*+?.,\\\^$|#\s]/g,"\\$&")}switch(e.keyCode){case o.default.ui.keyCode.PAGE_UP:this.previousPage(e)
break
case o.default.ui.keyCode.PAGE_DOWN:this.nextPage(e)
break
case o.default.ui.keyCode.HOME:this._move("first","first",e)
break
case o.default.ui.keyCode.END:this._move("last","last",e)
break
case o.default.ui.keyCode.UP:this.previous(e)
break
case o.default.ui.keyCode.DOWN:this.next(e)
break
case o.default.ui.keyCode.LEFT:this.collapse(e)
break
case o.default.ui.keyCode.RIGHT:this.active.is(".ui-state-disabled")||this.expand(e)
break
case o.default.ui.keyCode.ENTER:case o.default.ui.keyCode.SPACE:this._activate(e)
break
case o.default.ui.keyCode.ESCAPE:this.collapse(e)
break
default:d=!1
i=this.previousFilter||""
n=String.fromCharCode(e.keyCode)
a=!1
clearTimeout(this.filterTimer)
n===i?a=!0:n=i+n
s=new RegExp("^"+u(n),"i")
t=this.activeMenu.children(".ui-menu-item").filter(function(){return s.test((0,o.default)(this).children("a").not(r).text())})
if(!(t=a&&-1!==t.index(this.active.next())?this.active.nextAll(".ui-menu-item"):t).length){n=String.fromCharCode(e.keyCode)
s=new RegExp("^"+u(n),"i")
t=this.activeMenu.children(".ui-menu-item").filter(function(){return s.test((0,o.default)(this).children("a").not(r).text())})}if(t.length){this.focus(e,t)
if(t.length>1){this.previousFilter=n
this.filterTimer=this._delay(function(){delete this.previousFilter},1e3)}else delete this.previousFilter}else delete this.previousFilter}if(d){e.stopPropagation()
e.preventDefault()}},_activate:function(e){this.active.is(".ui-state-disabled")||(this.active.children("a[aria-haspopup='true']").length?this.expand(e):this.select(e))},refresh:function(){var e,t=this.options.icons.submenu,i=this.element.find(this.options.menus+":not(.ui-menu)").addClass("ui-menu ui-widget ui-widget-content ui-corner-all").hide().attr({role:this.options.role,"aria-hidden":"true","aria-expanded":"false"});(e=i.add(this.element)).children(":not(.ui-menu-item):has(a)").addClass("ui-menu-item").attr("role","presentation").children("a").uniqueId().addClass("ui-corner-all").attr({tabIndex:-1,role:this._itemRole()})
e.children(":not(.ui-menu-item)").each(function(){var e=(0,o.default)(this);/[^\-—–\s]/.test(e.text())||e.addClass("ui-widget-content ui-menu-divider")})
e.children(".ui-state-disabled").attr("aria-disabled","true")
i.each(function(){var e=(0,o.default)(this),i=e.prev("a"),n=(0,o.default)("<span>").addClass("ui-menu-icon ui-icon "+t).data("ui-menu-submenu-carat",!0)
i.attr("aria-haspopup","true").prepend(n)
e.attr("aria-labelledby",i.attr("id"))})},_itemRole:function(){return{menu:"menuitem",listbox:"option"}[this.options.role]},focus:function(e,t){var i,n
this.blur(e,e&&"focus"===e.type)
this._scrollIntoView(t)
this.active=t.first()
n=this.active.children("a:visible").addClass("ui-state-focus")
this.options.role&&this.element.attr("aria-activedescendant",n.attr("id"))
this.active.parent().closest(".ui-menu-item").children("a:first").addClass("ui-state-active")
e&&"keydown"===e.type?this._close():this.timer=this._delay(function(){this._close()},this.delay);(i=t.children(".ui-menu")).length&&/^mouse/.test(e.type)&&this._startOpening(i)
this.activeMenu=t.parent()
this._trigger("focus",e,{item:t})},_scrollIntoView:function(e){var t,i,n,a,r,s
if(this._hasScroll()){t=parseFloat(o.default.css(this.activeMenu[0],"borderTopWidth"))||0
i=parseFloat(o.default.css(this.activeMenu[0],"paddingTop"))||0
n=e.offset().top-this.activeMenu.offset().top-t-i
a=this.activeMenu.scrollTop()
r=this.activeMenu.height()
s=e.height()
n<0?this.activeMenu.scrollTop(a+n):n+s>r&&this.activeMenu.scrollTop(a+n-r+s)}},blur:function(e,t){t||clearTimeout(this.timer)
if(this.active){this.active.children("a").removeClass("ui-state-focus")
this.active=null
this._trigger("blur",e,{item:this.active})}},_startOpening:function(e){clearTimeout(this.timer)
"true"===e.attr("aria-hidden")&&(this.timer=this._delay(function(){this._close()
this._open(e)},this.delay))},_open:function(e){var t=o.default.extend({of:this.active},this.options.position)
clearTimeout(this.timer)
this.element.find(".ui-menu").not(e.parents(".ui-menu")).hide().attr("aria-hidden","true")
e.show().removeAttr("aria-hidden").attr("aria-expanded","true").position(t)},collapseAll:function(e,t){clearTimeout(this.timer)
this.timer=this._delay(function(){var i=t?this.element:(0,o.default)(e&&e.target).closest(this.element.find(".ui-menu"))
i.length||(i=this.element)
this._close(i)
this.blur(e)
this.activeMenu=i},this.delay)},_close:function(e){e||(e=this.active?this.active.parent():this.element)
e.find(".ui-menu").hide().attr("aria-hidden","true").attr("aria-expanded","false").end().find("a.ui-state-active").removeClass("ui-state-active")},collapse:function(e){var t=this.active&&this.active.parent().closest(".ui-menu-item",this.element)
if(t&&t.length){this._close()
this.focus(e,t)}},expand:function(e){var t=this.active&&this.active.children(".ui-menu ").children(".ui-menu-item").not(r).first()
if(t&&t.length){this._open(t.parent())
this._delay(function(){this.focus(e,t)})}},next:function(e){this._move("next","first",e)},previous:function(e){this._move("prev","last",e)},isFirstItem:function(){return this.active&&!this.active.prevAll(".ui-menu-item").not(r).length},isLastItem:function(){return this.active&&!this.active.nextAll(".ui-menu-item").not(r).length},_move:function(e,t,i){var n
this.active&&(n="first"===e||"last"===e?this.active["first"===e?"prevAll":"nextAll"](".ui-menu-item").not(r).eq(-1):this.active[e+"All"](".ui-menu-item").not(r).eq(0))
n&&n.length&&this.active||(n=this.activeMenu.children(".ui-menu-item").not(r)[t]())
this.focus(i,n)},nextPage:function(e){var t,i,n
if(this.active){if(!this.isLastItem())if(this._hasScroll()){i=this.active.offset().top
n=this.element.height()
this.active.nextAll(".ui-menu-item").not(r).each(function(){return(t=(0,o.default)(this)).offset().top-i-n<0})
this.focus(e,t)}else this.focus(e,this.activeMenu.children(".ui-menu-item").not(r)[this.active?"last":"first"]())}else this.next(e)},previousPage:function(e){var t,i,n
if(this.active){if(!this.isFirstItem())if(this._hasScroll()){i=this.active.offset().top
n=this.element.height()
this.active.prevAll(".ui-menu-item").not(r).each(function(){return(t=(0,o.default)(this)).offset().top-i+n>0})
this.focus(e,t)}else this.focus(e,this.activeMenu.children(".ui-menu-item").not(r).first())}else this.next(e)},_hasScroll:function(){return this.element.outerHeight()<this.element.prop("scrollHeight")},select:function(e){var t={item:this.active||(0,o.default)(e.target).closest(".ui-menu-item")}
t.item.has(".ui-menu").length||this.collapseAll(e,!0)
this._trigger("select",e,t)}})},VcdxSyzxRH:function(e,t,i){var n,a
n=[i("mOY9BNujNR")],void 0!==(a=function(e){function t(){}t.prototype.parseXML=function(t){this.$xml=e(t)
this.determineError()
return this.$xml}
t.prototype.determineError=function(){this.isError=!!this.find("error").children().length}
t.prototype.find=function(e){return this.$xml.find(e)}
t.prototype.findRecursive=function(t){t=t.split(":")
for(var i,n=this.$xml,a=0,o=t.length;a<o;a++){if(!(i=n.find(t[a])[0])){n=void 0
break}n=e(i)}return n}
t.prototype.nodeText=function(e,t,i){var n=void 0
if(""!=t.find(e).text()){n=t.find(e).text()
!0===i&&(n=parseFloat(n))}return n}
return t}.apply(t,n))&&(e.exports=a)},WskX5tno7F:function(e,t,i){"use strict"
var n=s(i("whMk0QU2To")),a=s(i("+fL4qvKaPd")),o=s(i("mOY9BNujNR")),r=s(i("eJBzaBDd6c"))
i("Q4xR9Iqymk")
i("yR513+6+ip")
i("K/mYXqZAKq")
function s(e){return e&&e.__esModule?e:{default:e}}n.default.errorCount=0
window.onerror=function(e,t,i,a,o){n.default.errorCount+=1};(0,o.default)(document).ready(function(){(0,o.default)("#instructure_ajax_error_result").defaultAjaxError(function(e,t,i,s,d){if("abort"!==s){var u="0",l=a.default.t("no_text","No text")
try{u=t.status
l=t.responseText}catch(e){}o.default.ajaxJSON(location.protocol+"//"+location.host+"/simple_response.json?rnd="+Math.round(9999999*Math.random()),"GET",{},function(){if(o.default.ajaxJSON.isUnauthenticated(t)){var e=(0,r.default)(a.default.t("errors.logged_out","You are not currently logged in, possibly due to a long period of inactivity."))
e+="<br/><a href='/login' target='_new'>"+(0,r.default)(a.default.t("links.login","Login"))+"</a>"
o.default.flashError({html:e},3e4)}else 409!=u&&_(a.default.t("errors.unhandled","Oops! The last request didn't work out."),t)},function(){_(a.default.t("errors.connection_lost","Connection to %{host} was lost.  Please make sure you're connected to the Internet and try again.",{host:location.host}),t)},{skipDefaultError:!0})
var c=(0,o.default)(this),_=function(e,t){var i=c[0]
if(i){var s=i.contentDocument||i.contentWindow&&i.contentWindow.document||window.frames[c.attr("id")].document,_=(0,o.default)(s).find("body")
_.html((0,o.default)("<h1 />").text(a.default.t("error_heading","Ajax Error: %{status_code}",{status_code:u})))
_.append((0,r.default)(l));(0,o.default)("#instructure_ajax_error_box").hide()
e=(0,r.default)(e)
d&&(e+="<br/><span style='font-size: 0.7em;'>(Development Only)</span>");(d||"production"!=n.default.environment)&&(e+="<br/><a href='#' class='last_error_details_link'>"+(0,r.default)(a.default.t("links.details","details..."))+"</a>")
o.default.flashError({html:e})}}
window.ajaxErrorFlash=_
var f=o.default.ajaxJSON.findRequest(t)
if((f=f||{}).data){f.params=""
for(var h in f.data)f.params+="&"+h+"="+f.data[h]}var m=""
try{m=(0,o.default)("#identity .user_name").text()}catch(e){}if(n.default.ajaxErrorURL){var p="&Msg="+escape(l)+"&StatusCode="+escape(u)+"&URL="+escape(f.url||"unknown")+"&Page="+escape(location.href)+"&Method="+escape(f.submit_type||"unknown")+"&UserName="+escape(m)+"&Platform="+escape(navigator.platform)+"&UserAgent="+escape(navigator.userAgent)+"&Params="+escape(f.params||"unknown");(0,o.default)("body").append("<img style='position: absolute; left: -1000px; top: 0;' src='"+(0,r.default)(n.default.ajaxErrorURL+p.substring(0,2e3))+"' />")}}});(0,o.default)(".last_error_details_link").live("click",function(e){e.preventDefault()
e.stopPropagation();(0,o.default)("#instructure_ajax_error_box").show()});(0,o.default)(".close_instructure_ajax_error_box_link").click(function(e){e.preventDefault();(0,o.default)("#instructure_ajax_error_box").hide()})})},YAsrg8Hfzh:function(e,t,i){var n,a,o=function(e,t){return function(){return e.apply(t,arguments)}}
n=[i("mOY9BNujNR"),i("uceVF1dIMW"),i("11DZr9oB9c"),i("kzdUuF07HD")],void 0!==(a=function(e,t){return function(){function i(){this.showConfigError=o(this.showConfigError,this)
this.onFileTypeError=o(this.onFileTypeError,this)}i.prototype.monitorUpload=function(e,t,i){this.uploader&&this.uploader!==e&&this.resetListeners()
this.uploader=e
this.allowedMedia=t
this.showProgBar()
this.showFileDetails(i)
this.uploader.addEventListener("K5.uiconfError",this.showConfigError)
this.uploader.addEventListener("K5.error",this.showConfigError)
this.uploader.addEventListener("K5.fileError",this.onFileTypeError)
return this.uploader.addEventListener("K5.progress",this.updateProgBar)}
i.prototype.resetListeners=function(){this.uploader.removeEventListener("K5.uiconfError",this.showConfigError)
this.uploader.removeEventListener("K5.error",this.showConfigError)
this.uploader.removeEventListener("K5.fileError",this.onFileTypeError)
return this.uploader.removeEventListener("K5.progress",this.updateProgBar)}
i.prototype.onFileTypeError=function(e){var i
i=e.file.size>1024*e.maxFileSize*1024?t.t("file_size_error","Size of %{file} is greater than the maximum %{max} MB allowed file size.",{file:e.file.name,max:e.maxFileSize}):t.t("file_type_error","%{file} is not an acceptable %{type} file.",{file:e.file.name,type:e.allowedMediaTypes[0]})
this.resetFileDetails()
return this.showErrorMessage(i)}
i.prototype.showConfigError=function(){var i
i=t.t("errors.media_comment_installation_broken","Media comment uploading has not been set up properly. Please contact your administrator.")
this.showErrorMessage(i)
e("#media_upload_feedback").css("visibility","visible")
e("#audio_upload_holder").css("visibility","hidden")
e("#video_upload_holder").css("visibility","hidden")
return e("#media_upload_settings").css("visibility","hidden")}
i.prototype.resetFileDetails=function(){e("#media_upload_settings").css("visibility","hidden")
e("#media_upload_title").val("")
e("#media_upload_display_title").text("")
e("#media_upload_file_size").text(e.fileSize(0))
return e("#media_upload_settings .icon").attr("src","/images/file.png")}
i.prototype.showFileDetails=function(i){if(i){e("#media_upload_feedback").css("visibility","hidden")
e("#media_upload_settings").css("visibility","visible")
e("#media_upload_title").val(i.name)
e("#media_upload_display_title").text(i.name)
e("#media_upload_file_size").text(e.fileSize(i.size))
e("#media_upload_settings .icon").attr("src","/images/file-"+this.allowedMedia[0]+".png")
return e("#media_upload_submit").attr("disabled",!0).text(t.t("messages.submitting","Submitting Media File..."))}this.resetFileDetails()}
i.prototype.showErrorMessage=function(t){this.hideProgBar()
e("#media_upload_feedback").css("visibility","visible")
return e("#media_upload_feedback_text").text(t)}
i.prototype.showProgBar=function(){return e("#media_upload_progress").css("visibility","visible").progressbar()}
i.prototype.hideProgBar=function(){return e("#media_upload_progress").css("visibility","hidden")}
i.prototype.updateProgBar=function(t){var i
i=t.loaded/t.total*100
return e("#media_upload_progress").progressbar("option","value",i)}
return i}()}.apply(t,n))&&(e.exports=a)},"a+Os3Kvywv":function(e,t,i){ENV.INCOMPLETE_REGISTRATION&&i.e(16).then(function(){var e=[i("mOY9BNujNR"),i("0sxI/h3fdS"),i("mqFaHUZWhf")];(function(e,t,i){return e(i({email:ENV.USER_EMAIL})).appendTo(e("body")).dialog({title:t.t("welcome_to_canvas","Welcome to Canvas!"),width:400,resizable:!1,buttons:[{text:t.t("get_started","Get Started"),click:function(){return e(this).dialog("close")},class:"btn-primary"}]})}).apply(null,e)}).catch(i.oe)},cyMNwMhBvy:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n,a=i("+JpRIS14Qm"),o=(n=a)&&n.__esModule?n:{default:n}
t.default=function(){var e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:window.location.pathname,t={hide:{default:o.default.t("Hide Navigation Menu"),account:o.default.t("Hide Account Navigation Menu"),admin:o.default.t("Hide Admin Navigation Menu"),courses:o.default.t("Hide Courses Navigation Menu"),groups:o.default.t("Hide Groups Navigation Menu")},show:{default:o.default.t("Show Navigation Menu"),account:o.default.t("Show Account Navigation Menu"),admin:o.default.t("Show Admin Navigation Menu"),courses:o.default.t("Show Courses Navigation Menu"),groups:o.default.t("Show Groups Navigation Menu")}},i=document.body.classList.contains("course-menu-expanded")?"hide":"show",n=t[i].default
e.match(/^\/profile/)?n=t[i].account:e.match(/^\/accounts/)?n=t[i].admin:e.match(/^\/courses/)?n=t[i].courses:e.match(/^\/groups/)&&(n=t[i].groups)
var a=document.getElementById("courseMenuToggle")
a.setAttribute("aria-label",n)
a.setAttribute("title",n)}
e.exports=t.default},"f+YlSntt6E":function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=i("36QOWIB4+W"),a=i.n(n),o=i("mOY9BNujNR")
i.n(o).a.extend(!0,a.a,{translations:{ar:{locked_image_24f37a16:"صورة مؤمّنة"},cy:{locked_image_24f37a16:"Delwedd wedi’i chloi"},da:{locked_image_24f37a16:"Låst billede"},"da-x-k12":{locked_image_24f37a16:"Låst billede"},de:{locked_image_24f37a16:"Gesperrtes Bild"},"en-AU":{locked_image_24f37a16:"Locked image"},"en-CA":{locked_image_24f37a16:"Locked image"},"en-GB":{locked_image_24f37a16:"Locked image"},"en-GB-x-lbs":{locked_image_24f37a16:"Locked image"},"en-GB-x-ukhe":{locked_image_24f37a16:"Locked image"},es:{locked_image_24f37a16:"Imagen bloqueada"},fr:{locked_image_24f37a16:"Image verrouillée"},"fr-CA":{locked_image_24f37a16:"Image verrouillée"},ht:{locked_image_24f37a16:"Imaj Bloke"},is:{locked_image_24f37a16:"Læst mynd"},it:{locked_image_24f37a16:"Immagine bloccata"},ja:{locked_image_24f37a16:"ロックされた画像"},mi:{locked_image_24f37a16:"Āhua kua rakaina"},nb:{locked_image_24f37a16:"Låst bilde"},"nb-x-k12":{locked_image_24f37a16:"Låst bilde"},nl:{locked_image_24f37a16:"Vergrendelde afbeelding"},pl:{locked_image_24f37a16:"Zablokowany obraz"},pt:{locked_image_24f37a16:"Imagem bloqueada"},"pt-BR":{locked_image_24f37a16:"Imagem bloqueada"},ru:{locked_image_24f37a16:"Заблокированное изображение"},sv:{locked_image_24f37a16:"Låst bild"},"sv-x-k12":{locked_image_24f37a16:"Låst bild"},"zh-Hans":{locked_image_24f37a16:"锁定图片"},"zh-Hant":{locked_image_24f37a16:"鎖定圖像"}}})},"gbrphF+ACY":function(e,t,i){var n
void 0!==(n=function(){function e(e){this.extensions=this.parseExtensions(e.extensions)
this.id=e.id
this.description=e.description
this.entryType=e.entryType
this.mediaType=e.mediaType
this.type=e.type}e.prototype.parseExtensions=function(e){return e.split(";").map(function(e){return e.substring(2)})}
e.prototype.includesExtension=function(e){return-1!==this.extensions.indexOf(e.toLowerCase())}
e.prototype.toParams=function(){return{entry1_type:this.entryType,entry1_mediaType:this.mediaType}}
return e}.apply(t,[]))&&(e.exports=n)},"j1K+QE411H":function(e,t,i){var n,a
n=[i("vCQJ/Q6HMW")],void 0!==(a=function(e){return new e}.apply(t,n))&&(e.exports=a)},jksFm8iyi3:function(e,t,i){var n,a
n=[i("vs40FT3DsF"),i("UFR79ninI6"),i("5iYkB5tAnT"),i("j1K+QE411H"),i("vCQJ/Q6HMW"),i("jmveEUdviC"),i("DGHOX4S35d"),i("wmdTCqkKx2")],void 0!==(a=function(e,t,i,n,a,o,r,s){function d(e){a.decorate(this)
s.setOptions(e)
this.buildDependencies()
this.addListeners()
this.session.setSession(e.kaltura_session)
this.loadUiConf()}d.prototype.destroy=function(){n.destroy()
this.session=void 0
this.entryService=void 0
this.uiconfService=void 0}
d.prototype.buildDependencies=function(){this.session=new i
this.entryService=new o
this.uiconfService=new r}
d.prototype.addListeners=function(){n.addEventListener("UiConf.error",this.onUiConfError.bind(this))
n.addEventListener("UiConf.complete",this.onUiConfComplete.bind(this))
n.addEventListener("Uploader.error",this.onUploadError.bind(this))
n.addEventListener("Uploader.success",this.onUploadSuccess.bind(this))
n.addEventListener("Uploader.progress",this.onProgress.bind(this))
n.addEventListener("Entry.success",this.onEntrySuccess.bind(this))
n.addEventListener("Entry.fail",this.onEntryFail.bind(this))}
d.prototype.onSessionLoaded=function(e){this.session=e
this.loadUiConf()}
d.prototype.loadUiConf=function(){this.uiconfService.load(this.session)}
d.prototype.onUiConfComplete=function(e){this.uiconfig=e
this.dispatchEvent("K5.ready",{},this)}
d.prototype.uploadFile=function(t){this.file=t
if(t)if(this.uiconfig.acceptableFile(t,s.allowedMediaTypes)){this.uploader=new e
this.uploader.send(this.session,t)}else{var i={maxFileSize:this.uiconfig.maxFileSize,file:t,allowedMediaTypes:s.allowedMediaTypes}
this.dispatchEvent("K5.fileError",i,this)}}
d.prototype.onUploadSuccess=function(e){var t=[this.uiconfig.asEntryParams(this.file.name),this.session.asEntryParams(),e.asEntryParams(),s.asEntryParams()]
this.entryService.addEntry(t)}
d.prototype.onProgress=function(e){this.dispatchEvent("K5.progress",e,this)}
d.prototype.onUploadError=function(e){this.dispatchEvent("K5.error",e,this)}
d.prototype.onEntrySuccess=function(e){this.dispatchEvent("K5.complete",e,this)}
d.prototype.onEntryFail=function(e){this.dispatchEvent("K5.error",e,this)}
d.prototype.onUiConfError=function(e){this.dispatchEvent("K5.uiconfError",e,this)}
return d}.apply(t,n))&&(e.exports=a)},jmveEUdviC:function(e,t,i){var n,a
n=[i("wsG6LCw0ui"),i("EV7MgeIKLJ"),i("j1K+QE411H"),i("VcdxSyzxRH"),i("yHYOFS5JEZ"),i("wmdTCqkKx2")],void 0!==(a=function(e,t,i,n,a,o){function r(){this.xmlParser=new n}r.prototype.addEntry=function(e){this.formData=a(e)
this.createEntryRequest()}
r.prototype.createEntryRequest=function(){var i=this.formData
i.kalsig=e(i)
this.xhr=new XMLHttpRequest
this.xhr.open("GET",o.entryUrl+t(i))
this.xhr.requestType="xml"
this.xhr.onload=this.onEntryRequestLoaded.bind(this)
this.xhr.send(i)}
r.prototype.onEntryRequestLoaded=function(e){this.xmlParser.parseXML(this.xhr.response)
if(t=this.xmlParser.findRecursive("result:entries:entry1_")){var t={id:t.find("id").text(),type:t.find("type").text(),title:t.find("name").text(),context_code:t.find("partnerData").text(),mediaType:t.find("mediatype").text(),entryId:t.find("id").text(),userTitle:void 0}
i.dispatchEvent("Entry.success",t,this)}else i.dispatchEvent("Entry.fail",this.xhr.response,this)}
return r}.apply(t,n))&&(e.exports=a)},"nwUwKBv/gu":function(e,t,i){"use strict"
var n,a=i("mOY9BNujNR"),o=(n=a)&&n.__esModule?n:{default:n}
i("O9QjtziI9Q")
i("1YHB9uvbU1")
i("Nf4R7G01V5")
var r=0,s=!1
o.default.widget("ui.popup",{version:"@VERSION",options:{position:{my:"left top",at:"left bottom"},managed:!1,expandOnFocus:!1,show:{effect:"slideDown",duration:0},hide:{effect:"fadeOut",duration:0}},_create:function(){this.options.trigger||(this.options.trigger=this.element.prev())
if(!this.element.attr("id")){this.element.attr("id","ui-popup-"+r++)
this.generatedId=!0}if(!this.element.attr("role")&&!this.options.managed){this.element.attr("role","dialog")
this.generatedRole=!0}this.options.trigger.attr("aria-haspopup","true").attr("aria-owns",this.element.attr("id"))
this.element.addClass("ui-popup")
this._beforeClose()
this.element.hide()
var e=function(e){var t=!1;(0,o.default)(e.target).is("input")&&(t=!0)
if(this.isOpen){s=!0
this.close()}else{this.open(e)
clearTimeout(this.closeTimer)
this._delay(function(){t||this.focusPopup()},1)}}
this._on(this.options.trigger,{keydown:function(e){switch(e.keyCode){case o.default.ui.keyCode.TAB:this.element.hide()
this.close(e)
break
case o.default.ui.keyCode.ESCAPE:this.isOpen&&this.close(e)
break
case o.default.ui.keyCode.SPACE:case o.default.ui.keyCode.DOWN:case o.default.ui.keyCode.UP:e.preventDefault()
clearTimeout(this.closeTimer)
this._delay(function(){this.open(e)
this.focusPopup(e)},1)}},mouseup:function(e){this.mouseClickTimer=window.setTimeout(function(){delete this.mouseClickTimer}.bind(this),0)},click:function(t){t.stopPropagation()
t.preventDefault()
this.mouseClickTimer||e.call(this,t)},mousedown:e})
this.options.expandOnFocus&&this._on(this.options.trigger,{focus:function(e){s||this._delay(function(){this.isOpen||this.open(e)},1)
this._delay(function(){s=!1},100)},blur:function(e){s=!1}})
this.options.managed||this._on({keydown:function(e){if(e.keyCode===o.default.ui.keyCode.TAB){var t=(0,o.default)(":tabbable",this.element),i=t.first(),n=t.last()
if(e.target!==n[0]||e.shiftKey){if(e.target===i[0]&&e.shiftKey){n.focus(1)
e.preventDefault()}}else{i.focus(1)
e.preventDefault()}}}})
this._on({focusout:function(e){this.closeTimer=this._delay(function(){this.close(e)},150)},focusin:function(e){clearTimeout(this.closeTimer)},mouseup:function(e){clearTimeout(this.closeTimer)}})
this._on({keyup:function(e){if(e.keyCode===o.default.ui.keyCode.ESCAPE&&this.element.is(":visible")){this.close(e)
this.focusTrigger()}}})
this._on(this.document,{click:function(e){this.isOpen&&!(0,o.default)(e.target).closest(this.element.add(this.options.trigger)).length&&this.close(e)}})},_destroy:function(){this.element.show().removeClass("ui-popup").removeAttr("aria-hidden").removeAttr("aria-expanded").unbind("keypress.ui-popup")
this.options.trigger.removeAttr("aria-haspopup").removeAttr("aria-owns")
this.generatedId&&this.element.removeAttr("id")
this.generatedRole&&this.element.removeAttr("role")},open:function(e){var t=o.default.extend({},{of:this.options.trigger},this.options.position)
this._show(this.element,this.options.show)
this.element.attr("aria-hidden","false").attr("aria-expanded","true").position(t)
this.options.trigger.attr("tabindex",-1)
this.isOpen=!0
this._trigger("open",e)},focusPopup:function(e){if(!this.options.managed){var t=this.element.find(":tabbable")
this.removeTabIndex=!1
if(!t.length){if(!this.element.is(":tabbable")){this.element.attr("tabindex","0")
this.removeTabIndex=!0}t=t.add(this.element[0])}t.first().focus(1)}this._trigger("focusPopup",e)},focusTrigger:function(e){s=!0
this.options.trigger.focus()
this._trigger("focusTrigger",e)},close:function(e){this._beforeClose()
this._hide(this.element,this.options.hide)
this.options.trigger.attr("tabindex",0)
this.removeTabIndex&&this.element.removeAttr("tabindex")
this.isOpen=!1
this._trigger("close",e)},_beforeClose:function(){this.element.attr("aria-hidden","true").attr("aria-expanded","false")}})},om1wIkvxJX:function(e,t,i){var n,a
n=[i("jksFm8iyi3")],void 0!==(a=function(e){return e}.apply(t,n))&&(e.exports=a)},q97HwXzRnE:function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
o(i("iBw8ZGM6v8"))
var n=o(i("mOY9BNujNR")),a=o(i("eJBzaBDd6c"))
i("QfIG3OPdTK")
function o(e){return e&&e.__esModule?e:{default:e}}var r={},s={setPosition:function(e){function t(){return(e.tooltipClass||"").match("popover")?30:5}var i="true"===e.force_position?"none":"flipfit",n={right:{my:"left center",at:"right+"+t()+" center",collision:i},left:{my:"right center",at:"left-"+t()+" center",collision:i},top:{my:"center bottom",at:"center top-"+t(),collision:i},bottom:{my:"center top",at:"center bottom+"+t(),collision:i}}
e.position in n&&(e.position=n[e.position])}}
n.default.widget("custom.timeoutTooltip",n.default.ui.tooltip,{_open:function(e,t,i){var o=this
if(function(e){return r[e]||r[e[0]]}(t))return null
var s=Array.prototype.slice.call(arguments,0)
s.splice(2,1,(0,a.default)(i).toString())
if(!this.timeout){var d=this._superApply.bind(this,s)
this.timeout=setTimeout(function(){delete o.timeout
o._off(t,"mouseleave focusout keyup")
d()},20)
return this._on(t,{mouseleave:"close",focusout:"close",keyup:function(e){if(e.keyCode===n.default.ui.keyCode.ESCAPE){var i=n.default.Event(e)
i.currentTarget=t[0]
return this.close(i,!0)}}})}},close:function(e){if(!this.timeout)return this._superApply(arguments)
clearTimeout(this.timeout)
delete this.timeout}})
function d(e,t){return(0,n.default)(this).css(e).removeClass("left right top bottom center middle vertical horizontal").addClass([t.horizontal,t.vertical,t.important].join(" "))}(0,n.default)("body").on("mouseenter focusin","[data-tooltip]",function(e){var t=(0,n.default)(this),i=t.data("tooltip");["right","left","top","bottom"].includes(i)&&(i={position:i})
i||(i={})
i.position||(i.position="top")
s.setPosition(i)
i.collision&&(i.position.collision=i.collision)
i.position.using||(i.position.using=d)
if(t.data("html-tooltip-title")){i.content=function(){return n.default.raw((0,n.default)(this).data("html-tooltip-title"))}
i.items="[data-html-tooltip-title]"}t.data("tooltip-class")&&(i.tooltipClass=t.data("tooltip-class"))
t.removeAttr("data-tooltip").timeoutTooltip(i).timeoutTooltip("open").click(function(){return t.timeoutTooltip("close")})});(0,n.default)(window).bind("detachTooltip",function(e){return r[e.target]=!0});(0,n.default)(window).bind("reattachTooltip",function(e){return r[e.target]=!1})
t.default=s
e.exports=t.default},uJvXVpBkfw:function(e,t,i){var n,a,o=function(e,t){return function(){return e.apply(t,arguments)}}
n=[i("mOY9BNujNR"),i("MJc1meCUnj"),i("TEJtO8kTF9"),i("om1wIkvxJX"),i("YAsrg8Hfzh"),i("Swn6SeDoYc"),i("BGpftgD7c/")],void 0!==(a=function(e,t,i,n,a,r,s){return function(){function e(){this.resetUploader=o(this.resetUploader,this)
this.onUploaderReady=o(this.onUploaderReady,this)
this.onUploadComplete=o(this.onUploadComplete,this)
this.onFileError=o(this.onFileError,this)
this.doUpload=o(this.doUpload,this)
this.initialize=o(this.initialize,this)
this.dialogManager=new t
this.commentUiLoader=new i
this.kSession=new r
this.uploadViewManager=new a
this.fileInputManager=new s
this.dialogManager.initialize()
this.loadSession()}e.prototype.loadSession=function(){return this.kSession.loadSession("/api/v1/services/kaltura_session",this.initialize,this.uploadViewManager.showConfigError)}
e.prototype.onReady=function(){}
e.prototype.initialize=function(e,t){return this.commentUiLoader.loadTabs((i=this,function(n){i.onReady()
i.dialogManager.displayContent(n)
i.dialogManager.activateTabs()
i.dialogManager.mediaReady(e,t)
i.createNeededFields()
return i.bindEvents()}))
var i}
e.prototype.getKs=function(){return this.kSession.kalturaSession.ks}
e.prototype.getUid=function(){return this.kSession.kalturaSession.uid}
e.prototype.bindEvents=function(){this.fileInputManager.setUpInputTrigger("#audio_upload_holder",["audio"])
return this.fileInputManager.setUpInputTrigger("#video_upload_holder",["video"])}
e.prototype.createNeededFields=function(){return this.fileInputManager.resetFileInput(this.doUpload)}
e.prototype.doUpload=function(){var e
this.file=this.fileInputManager.getSelectedFile()
this.uploader&&this.resetUploader()
e=this.kSession.generateUploadOptions(this.fileInputManager.allowedMedia)
this.uploader=new n(e)
this.uploader.addEventListener("K5.fileError",this.onFileError)
this.uploader.addEventListener("K5.complete",this.onUploadComplete)
this.uploader.addEventListener("K5.ready",this.onUploaderReady)
this.uploadViewManager=new a
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
return e}()}.apply(t,n))&&(e.exports=a)},"vCQJ/Q6HMW":function(e,t,i){var n
void 0!==(n=function(){e.decorate=function(t){t.messenger=new e
t.addEventListener=function(e,i){t.messenger.addEventListener(e,i)}
t.dispatchEvent=function(e,i,n){t.messenger.dispatchEvent(e,i,n)}
t.removeEventListener=function(e,i){t.messenger.removeEventListener(e,i)}}
function e(){this.events={}}e.prototype.killAllListeners=function(e){if(!this.events[e])return!1
this.events[e]=[]}
e.prototype.destroy=function(){this.events={}}
e.prototype.dispatchEvent=function(e,t,i){this.events[e]&&this.events[e].forEach(function(e){e.call(i,t)})}
e.prototype.addEventListener=function(e,t){if(!t)return!1
this.events[e]||(this.events[e]=[])
this.events[e].push(t)
return t}
e.prototype.removeEventListener=function(e,t){if(this.events[e]){var i=this.events[e],n=[]
this.events[e].forEach(function(e,i){e===t&&n.push(i)})
n.length>0&&n.forEach(function(e){i.splice(e,1)})}}
return e}.apply(t,[]))&&(e.exports=n)},vs40FT3DsF:function(e,t,i){var n,a
n=[i("j1K+QE411H"),i("zuMcCJCnxl"),i("OmVUS6ALVM")],void 0!==(a=function(e,t,i){function n(){this.xhr=new XMLHttpRequest
this.uploadResult=new t}n.prototype.isAvailable=function(){return!!this.xhr.upload}
n.prototype.send=function(e,t){var n=new i
this.xhr=n.buildRequest(e,t)
this.addEventListeners()
this.xhr.send(n.createFormData())}
n.prototype.addEventListeners=function(){this.xhr.upload.addEventListener("progress",this.eventProxy.bind(this.xhr))
this.xhr.upload.addEventListener("load",this.eventProxy.bind(this.xhr))
this.xhr.upload.addEventListener("error",this.eventProxy.bind(this.xhr))
this.xhr.upload.addEventListener("abort",this.eventProxy.bind(this.xhr))
this.xhr.onload=this.onload.bind(this)}
n.prototype.onload=function(t){this.uploadResult.parseXML(this.xhr.response)
var i=this.uploadResult.isError?"error":"success"
e.dispatchEvent("Uploader."+i,this.uploadResult)}
n.prototype.eventProxy=function(t){var i="Uploader."+t.type
e.dispatchEvent(i,t,this)}
return n}.apply(t,n))&&(e.exports=a)},wmdTCqkKx2:function(e,t,i){var n,a
n=[i("SAJYeZn/X9")],void 0!==(a=function(e){function t(){}t.prototype.setOptions=function(e){this.mergeDefaults(e)}
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
return new t}.apply(t,n))&&(e.exports=a)},wsG6LCw0ui:function(e,t,i){var n,a
n=[i("TYNg0f0fQv")],void 0!==(a=function(e){return function(t){var i=[]
for(var n in t)i.push(n)
var a="";(i=i.sort()).forEach(function(e){a+=e
a+=t[e]})
return e.encrypt(a)}}.apply(t,n))&&(e.exports=a)},yHYOFS5JEZ:function(e,t,i){var n
void 0!==(n=function(){return function(e){if(!e)return e
var t={};(e=e.reverse()).forEach(function(e){for(var i in e)t[i]=e[i]})
return t}}.apply(t,[]))&&(e.exports=n)},"zNOhtK+31x":function(e,t,i){"use strict"
Object.defineProperty(t,"__esModule",{value:!0})
var n=r(i("ZrlrdyRlgX")),a=r(i("wxAWXU5KIn")),o=r(i("mOY9BNujNR"))
i("V0DFOiAOkw")
i("kWQsjZQaF4")
i("nwUwKBv/gu")
function r(e){return e&&e.__esModule?e:{default:e}}var s=function(){function e(t,i){var a=this;(0,n.default)(this,e);["onOpen","select","onClose","close","keepButtonActive"].forEach(function(e){return a[e]=a[e].bind(a)})
this.$trigger=(0,o.default)(t).data("kyleMenu",this)
this.$ariaMenuWrapper=this.$trigger.parent()
this.opts=o.default.extend(!0,{},e.defaults,i)
if(!this.opts.noButton){this.opts.buttonOpts.addDropArrow&&this.$trigger.append('<i class="icon-mini-arrow-down"></i>')
this.$trigger.button(this.opts.buttonOpts)
this.$trigger.bind("mouseleave.button",this.keepButtonActive)}this.$menu=this.$trigger.next().menu(this.opts.menuOpts).popup(this.opts.popupOpts).addClass("ui-kyle-menu use-css-transitions-for-show-hide")
if(this.opts.appendMenuTo){this.$menu.on({keydown:function(e){if(e.keyCode===o.default.ui.keyCode.TAB){var t=void 0
t=e.shiftKey?{which:o.default.ui.keyCode.TAB,shiftKey:!0}:{which:o.default.ui.keyCode.TAB}
var i=o.default.Event("keydown",t)
a.$trigger.focus().trigger(i)}}})
var r=this.$menu.data("popup"),s=r.open,d=this
r.open=function(){d.$menu.appendTo(d.opts.appendMenuTo)
return s.apply(this,arguments)}
this.$placeholder=(0,o.default)('<span style="display:none;">').insertAfter(this.$menu)
this.$menu.bind("click",function(){var e
return(e=a.$placeholder).trigger.apply(e,arguments)})}this.opts.notifyMenuActiveOnParent&&(this.$notifyParent=this.$trigger.closest(this.opts.notifyMenuActiveOnParent))
this.$menu.on({menuselect:this.select,popupopen:this.onOpen,popupclose:this.onClose})}(0,a.default)(e,[{key:"onOpen",value:function(e){this.$ariaMenuWrapper.attr("role","application")
this.adjustCarat(e)
this.$menu.addClass("ui-state-open")
this.opts.notifyMenuActiveOnParent&&this.$notifyParent.addClass("menu_active")}},{key:"open",value:function(){this.$menu.popup("open")}},{key:"select",value:function(e,t){var i=void 0
if("click"!==(e.originalEvent&&e.originalEvent.type)&&(i=(0,o.default)(t.item).find("a"))){e.preventDefault()
var n=i[0],a=document.createEvent("MouseEvent")
a.initEvent("click",!0,!0)
n.dispatchEvent(a)}this.close()}},{key:"onClose",value:function(){this.opts.appendMenuTo&&this.$menu.insertBefore(this.$placeholder)
this.$trigger.removeClass("ui-state-active")
this.$ariaMenuWrapper.removeAttr("role")
this.$menu.removeClass("ui-state-open")
this.opts.notifyMenuActiveOnParent&&this.$notifyParent.removeClass("menu_active")
this.opts.returnFocusTo&&!this.opts.returnFocusTo.prop("disabled")&&this.opts.returnFocusTo.focus()}},{key:"close",value:function(){this.$menu.hasClass("ui-state-open")&&this.$menu.popup("close").removeClass("ui-state-open")}},{key:"keepButtonActive",value:function(){this.$menu.is(".ui-state-open")&&this.$trigger.is(".btn, .ui-button")&&this.$trigger.addClass("ui-state-active")}},{key:"adjustCarat",value:function(e){this.$carat&&this.$carat.remove()
this.$trigger.is(".btn, .ui-button")&&this.$trigger.addClass("ui-state-active")
var t=this.$trigger.outerWidth(),i=this.$trigger.offset().left,n=this.$menu[0].getBoundingClientRect(),a=this.$trigger[0].getBoundingClientRect(),r=n.top+n.height<a.top,s=n.height-2,d=e.pageX||i+t/2,u=i-this.$menu.offset().left,l=d-this.$trigger.offset().left,c=Math.min(Math.max(6,l),t-6)+u
this.$carat=(0,o.default)('<span class="ui-menu-carat"><span /></span>').css("left",c)
r&&this.$carat.css("top",s).css("transform","rotateX(180deg)")
this.$carat.prependTo(this.$menu)}}])
return e}()
s.defaults={popupOpts:{position:{my:"center top",at:"center bottom",offset:"0 10px",within:"#main",collision:"flipfit"}},buttonOpts:{addDropArrow:!0}}
t.default=s
o.default.fn.kyleMenu=function(e){return this.each(function(){(0,o.default)(this).data().kyleMenu||new s(this,e)})}
e.exports=t.default},zr2HOwddfD:function(e,t,i){"use strict"
var n=o(i("mOY9BNujNR")),a=o(i("eJBzaBDd6c"))
function o(e){return e&&e.__esModule?e:{default:e}}(0,n.default)(document).delegate("a[data-confirm], a[data-method], a[data-remove]","click",function(e){var t,i,o=(0,n.default)(this)
if(o.data("handled")||!(t=o,i=t.data("confirm"),!i||confirm(i)))return!1
if(o.data("remove")){!function(e){var t=e.data("remove"),i=e,a=e.data("url"),o=e.closest(":ui-popup").popup("option","trigger").data("KyleMenu")
o&&o.opts.appendMenuTo&&(i=o.$placeholder)
var r=i.closest(t)
r.bind({beforeremove:function(){r.hide()},remove:function(){r.remove()}})
r.trigger("beforeremove")
var s=function(){return r.trigger("remove")}
a?n.default.ajaxJSON(a,"DELETE",{},s,function(){return r.show()}):s()}(o)
return!1}if(o.data("method")){!function(e){e.data("handled",!0)
var t=e.data("url")||e.attr("href"),i=e.data("method"),o=e.attr("target"),r=(0,n.default)('<form method="post" action="'+(0,a.default)(t)+'"></form>'),s='\n    <input name="_method" value="'+(0,a.default)(i)+'" type="hidden" />\n    <input name="authenticity_token" type="hidden" />\n  '
o&&r.attr("target",o)
r.hide().append(s).appendTo("body").submit()}(o)
return!1}})},zuMcCJCnxl:function(e,t,i){var n,a
n=[i("VcdxSyzxRH")],void 0!==(a=function(e){function t(){this.xml=void 0
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
return t}.apply(t,n))&&(e.exports=a)}},["VDPlEqaRwD"])

//# sourceMappingURL=common.bundle-f89441110c.js.75-f89441110c.sourcemap