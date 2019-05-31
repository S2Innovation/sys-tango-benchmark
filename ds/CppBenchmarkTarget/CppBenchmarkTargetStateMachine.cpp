/*----- PROTECTED REGION ID(CppBenchmarkTargetStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        CppBenchmarkTargetStateMachine.cpp
//
// description : State machine file for the CppBenchmarkTarget class
//
// project :     Benchmark device
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <CppBenchmarkTarget.h>

/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::CppBenchmarkTargetStateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  ON       |  state on
//  RUNNING  |  Thread running


namespace CppBenchmarkTarget_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_BenchmarkScalarAttribute_allowed()
 *	Description : Execution allowed for BenchmarkScalarAttribute attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_BenchmarkScalarAttribute_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for BenchmarkScalarAttribute attribute in Write access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkScalarAttributeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkScalarAttributeStateAllowed_WRITE

	//	Not any excluded states for BenchmarkScalarAttribute attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkScalarAttributeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkScalarAttributeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_AlwaysExecutedHookCount_allowed()
 *	Description : Execution allowed for AlwaysExecutedHookCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_AlwaysExecutedHookCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AlwaysExecutedHookCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::AlwaysExecutedHookCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::AlwaysExecutedHookCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ReadAttributeHardwareCount_allowed()
 *	Description : Execution allowed for ReadAttributeHardwareCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ReadAttributeHardwareCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ReadAttributeHardwareCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ReadAttributeHardwareCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ReadAttributeHardwareCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_WriteAttributeCounterCount_allowed()
 *	Description : Execution allowed for WriteAttributeCounterCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_WriteAttributeCounterCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for WriteAttributeCounterCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::WriteAttributeCounterCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::WriteAttributeCounterCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ScalarReadsCount_allowed()
 *	Description : Execution allowed for ScalarReadsCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ScalarReadsCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ScalarReadsCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ScalarReadsCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ScalarReadsCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_SpectrumReadsCount_allowed()
 *	Description : Execution allowed for SpectrumReadsCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_SpectrumReadsCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for SpectrumReadsCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::SpectrumReadsCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::SpectrumReadsCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ImageReadsCount_allowed()
 *	Description : Execution allowed for ImageReadsCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ImageReadsCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ImageReadsCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ImageReadsCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ImageReadsCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ScalarWritesCount_allowed()
 *	Description : Execution allowed for ScalarWritesCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ScalarWritesCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ScalarWritesCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ScalarWritesCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ScalarWritesCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_SpectrumWritesCount_allowed()
 *	Description : Execution allowed for SpectrumWritesCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_SpectrumWritesCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for SpectrumWritesCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::SpectrumWritesCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::SpectrumWritesCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ImageWritesCount_allowed()
 *	Description : Execution allowed for ImageWritesCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ImageWritesCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ImageWritesCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ImageWritesCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ImageWritesCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_CommandCallsCount_allowed()
 *	Description : Execution allowed for CommandCallsCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_CommandCallsCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for CommandCallsCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::CommandCallsCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::CommandCallsCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_TimeSinceReset_allowed()
 *	Description : Execution allowed for TimeSinceReset attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_TimeSinceReset_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for TimeSinceReset attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::TimeSinceResetStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::TimeSinceResetStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_PipeReadsCount_allowed()
 *	Description : Execution allowed for PipeReadsCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_PipeReadsCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for PipeReadsCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::PipeReadsCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::PipeReadsCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_PipeWritesCount_allowed()
 *	Description : Execution allowed for PipeWritesCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_PipeWritesCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for PipeWritesCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::PipeWritesCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::PipeWritesCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_EventSleepPeriod_allowed()
 *	Description : Execution allowed for EventSleepPeriod attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_EventSleepPeriod_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check access type.
	if ( type!=Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for WRITE 
		if (get_state()==Tango::RUNNING)
		{
		/*----- PROTECTED REGION ID(CppBenchmarkTarget::EventSleepPeriodStateAllowed_WRITE) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::EventSleepPeriodStateAllowed_WRITE
			return false;
		}
		return true;
	}
	else

	//	Not any excluded states for EventSleepPeriod attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::EventSleepPeriodStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::EventSleepPeriodStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_EventsCount_allowed()
 *	Description : Execution allowed for EventsCount attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_EventsCount_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for EventsCount attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::EventsCountStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::EventsCountStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_EventAttribute_allowed()
 *	Description : Execution allowed for EventAttribute attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_EventAttribute_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for EventAttribute attribute in Write access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::EventAttributeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::EventAttributeStateAllowed_WRITE

	//	Not any excluded states for EventAttribute attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::EventAttributeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::EventAttributeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_BenchmarkSpectrumAttribute_allowed()
 *	Description : Execution allowed for BenchmarkSpectrumAttribute attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_BenchmarkSpectrumAttribute_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for BenchmarkSpectrumAttribute attribute in Write access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkSpectrumAttributeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkSpectrumAttributeStateAllowed_WRITE

	//	Not any excluded states for BenchmarkSpectrumAttribute attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkSpectrumAttributeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkSpectrumAttributeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_BenchmarkImageAttribute_allowed()
 *	Description : Execution allowed for BenchmarkImageAttribute attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_BenchmarkImageAttribute_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for BenchmarkImageAttribute attribute in Write access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkImageAttributeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkImageAttributeStateAllowed_WRITE

	//	Not any excluded states for BenchmarkImageAttribute attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkImageAttributeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkImageAttributeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_BenchmarkDynamicSpectrumAttribute_allowed()
 *	Description : Execution allowed for BenchmarkDynamicSpectrumAttribute attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_BenchmarkDynamicSpectrumAttribute_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for BenchmarkDynamicSpectrumAttribute attribute in Write access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkDynamicSpectrumAttributeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkDynamicSpectrumAttributeStateAllowed_WRITE

	//	Not any excluded states for BenchmarkDynamicSpectrumAttribute attribute in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkDynamicSpectrumAttributeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkDynamicSpectrumAttributeStateAllowed_READ
	return true;
}

//=================================================
//		pipe Allowed Methods
//=================================================
//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_BenchmarkPipe_allowed()
 *	Description : Execution allowed for BenchmarkPipe pipe
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_BenchmarkPipe_allowed(TANGO_UNUSED(Tango::PipeReqType type))
{
	//	Not any excluded states for BenchmarkPipe pipe in Write access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkPipeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkPipeStateAllowed_WRITE
	//	Not any excluded states for BenchmarkPipe pipe in read access.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkPipeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkPipeStateAllowed_READ
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_BenchmarkCommand_allowed()
 *	Description : Execution allowed for BenchmarkCommand attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_BenchmarkCommand_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for BenchmarkCommand command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::BenchmarkCommandStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::BenchmarkCommandStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_SetSpectrumSize_allowed()
 *	Description : Execution allowed for SetSpectrumSize attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_SetSpectrumSize_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetSpectrumSize command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::SetSpectrumSizeStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::SetSpectrumSizeStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_SetImageSize_allowed()
 *	Description : Execution allowed for SetImageSize attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_SetImageSize_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetImageSize command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::SetImageSizeStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::SetImageSizeStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ResetCounters_allowed()
 *	Description : Execution allowed for ResetCounters attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ResetCounters_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetCounters command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ResetCountersStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ResetCountersStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_StartEvents_allowed()
 *	Description : Execution allowed for StartEvents attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_StartEvents_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Compare device state with not allowed states.
	if (get_state()==Tango::RUNNING)
	{
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::StartEventsStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::StartEventsStateAllowed
		return false;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_StopEvents_allowed()
 *	Description : Execution allowed for StopEvents attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_StopEvents_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for StopEvents command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::StopEventsStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::StopEventsStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_PushEvent_allowed()
 *	Description : Execution allowed for PushEvent attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_PushEvent_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for PushEvent command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::PushEventStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::PushEventStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_CreateDynamicAttributes_allowed()
 *	Description : Execution allowed for CreateDynamicAttributes attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_CreateDynamicAttributes_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for CreateDynamicAttributes command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::CreateDynamicAttributesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::CreateDynamicAttributesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_ClearDynamicAttributes_allowed()
 *	Description : Execution allowed for ClearDynamicAttributes attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_ClearDynamicAttributes_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ClearDynamicAttributes command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::ClearDynamicAttributesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::ClearDynamicAttributesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : CppBenchmarkTarget::is_GetMemoryUsage_allowed()
 *	Description : Execution allowed for GetMemoryUsage attribute
 */
//--------------------------------------------------------
bool CppBenchmarkTarget::is_GetMemoryUsage_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetMemoryUsage command.
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::GetMemoryUsageStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::GetMemoryUsageStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(CppBenchmarkTarget::CppBenchmarkTargetStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::CppBenchmarkTargetStateAllowed.AdditionalMethods

}	//	End of namespace
