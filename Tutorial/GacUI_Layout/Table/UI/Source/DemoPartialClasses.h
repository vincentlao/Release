/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::demo::MainWindow* __vwsn_precompile_0 = static_cast<::demo::MainWindow*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_2 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_4 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_5 = static_cast<::vl::presentation::controls::GuiLabel*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_6 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiSinglelineTextBox* __vwsn_precompile_7 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_8 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_9 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_10 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_11 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_12 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_13 = static_cast<::vl::presentation::controls::GuiLabel*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_14 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiSinglelineTextBox* __vwsn_precompile_15 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_16 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_17 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_18 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_19 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_20 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_21 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_22 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_23 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_24 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_25 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_26 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_27 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_28 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiButton* __vwsn_precompile_29 = static_cast<::vl::presentation::controls::GuiButton*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_30 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_31 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		MainWindow();
		~MainWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
