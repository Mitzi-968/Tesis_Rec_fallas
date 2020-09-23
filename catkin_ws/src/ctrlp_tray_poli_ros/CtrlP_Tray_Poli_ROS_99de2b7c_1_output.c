/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'CtrlP_Tray_Poli_ROS/Dinamica/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "CtrlP_Tray_Poli_ROS_99de2b7c_1_geometries.h"

PmfMessageId CtrlP_Tray_Poli_ROS_99de2b7c_1_output(const
  RuntimeDerivedValuesBundle *rtdv, const double *state, const int *modeVector,
  const double *input, const double *inputDot, const double *inputDdot, const
  double *discreteState, double *output, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  output[0] = state[0];
  output[1] = state[1];
  output[2] = state[2];
  output[3] = state[3];
  return NULL;
}
