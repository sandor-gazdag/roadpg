source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '7.0'

inhibit_all_warnings!

link_with 'roadpg'


target :roadpg do
    xcodeproj 'roadpg.xcodeproj'

    pod 'ROADFramework', '1.4.2'
end

target :roadpgTests do
    xcodeproj 'roadpg.xcodeproj'

    pod 'ROADFramework', '1.4.2'
end


post_install do |installer|

    require File.expand_path('ROADConfigurator.rb', './Pods/libObjCAttr/libObjCAttr/Resources/')
    ROADConfigurator::post_install(installer)

end
