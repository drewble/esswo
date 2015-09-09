;****************************************
; D7 Base CS Platform
;****************************************

 api  = 2
 core = 7.x

;****************************************
; Features
;****************************************

 projects[d7_basic_page][type]                  		 = module
 projects[d7_basic_page][download][type]        		 = git
 projects[d7_basic_page][download][url]         		 = git@github.com:centresource/d7_basic_page.git

 projects[d7_base_feature][type]            				 = module
 projects[d7_base_feature][download][type]  				 = git
 projects[d7_base_feature][download][url]   				 = git@github.com:centresource/d7_base_feature.git

 projects[d7_base_wysiwyg][type]                 	 	 = module
 projects[d7_base_wysiwyg][download][type]       	 	 = git
 projects[d7_base_wysiwyg][download][url]        	 	 = git@github.com:centresource/d7_base_wysiwyg.git

 projects[d7_news][type]                        		 = module
 projects[d7_news][download][type]              		 = git
 projects[d7_news][download][url]               		 = git@github.com:centresource/d7_news.git

 projects[d7_views_feature][type]               		 = module
 projects[d7_views_feature][download][type]     		 = git
 projects[d7_views_feature][download][url]      		 = git@github.com:centresource/d7_views_feature.git

 projects[d7_csbase][type]               						 = module
 projects[d7_csbase][download][type]     						 = git
 projects[d7_csbase][download][url]      						 = git@github.com:centresource/d7_csbase.git

 projects[d7_tpl_base][type]               					 = module
 projects[d7_tpl_base][download][type]     					 = git
 projects[d7_tpl_base][download][url]      					 = git@github.com:centresource/d7_tpl_base.git

 projects[d7_tpl_hero][type]               					 = module
 projects[d7_tpl_hero][download][type]     					 = git
 projects[d7_tpl_hero][download][url]      					 = git@github.com:centresource/d7_tpl_hero.git

 projects[d7_tpl_featurettes][type]               	 = module
 projects[d7_tpl_featurettes][download][type]     	 = git
 projects[d7_tpl_featurettes][download][url]      	 = git@github.com:centresource/d7_tpl_featurettes.git

;****************************************
; Modules
;****************************************

; contrib
;
 projects[]																= admin_menu
 projects[]																= adminimal_admin_menu
 projects[]																= better_formats
 projects[]																= ckeditor
 projects[]																= ckeditor_link
 projects[]																= context
 projects[]																= ctools
 projects[]																= devel
 projects[]																= diff
 projects[eva][version]										= 1.x-dev
 projects[]																= features
 projects[]																= file_entity
 projects[]																= field_group
 projects[]																= globalredirect
 projects[]																= google_analytics
 projects[]																= jquery_update
 projects[]																= libraries
 projects[]																= link
 projects[media][version]									= 2.0-alpha4
 projects[]																= metatag
 projects[]																= module_filter
 projects[]																= multiform
 projects[]																= pathauto
 projects[]																= references
 projects[]																= search_krumo
 projects[]																= scheduler
 projects[]																= security_review
 projects[]																= speedy
 projects[]																= strongarm
 projects[]																= themekey
 projects[]																= token
 projects[]																= transliteration
 projects[]																= views
 projects[]																= xmlsitemap

;****************************************
; Themes
;****************************************

 projects[mothership][patch][]	= http://drupal.org/files/mothership-contextual-links-fix-2061657-4.patch
 projects[]= adminimal_theme

;****************************************
; Libraries in sites/all/libraries
;****************************************

; CKEditor library for modules CKEditor (ckeditor) and Wysiwyg API (wysiwyg).
 libraries[ckeditor][directory_name]         = ckeditor
 libraries[ckeditor][download][type]         = file
 libraries[ckeditor][download][url]          = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.0.2/ckeditor_4.0.2_full.zip
