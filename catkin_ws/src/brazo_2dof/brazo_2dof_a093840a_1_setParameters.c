/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'brazo_2dof/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"

void brazo_2dof_a093840a_1_computeRuntimeParameters(real_T *in, real_T *out)
{
  (void) in;
  (void) out;
}

void brazo_2dof_a093840a_1_computeAsmRuntimeDerivedValuesDoubles(const double
  *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void brazo_2dof_a093840a_1_computeAsmRuntimeDerivedValuesInts(const double *rtp,
  int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void brazo_2dof_a093840a_1_computeAsmRuntimeDerivedValues(const double *rtp,
  RuntimeDerivedValuesBundle *rtdv)
{
  brazo_2dof_a093840a_1_computeAsmRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  brazo_2dof_a093840a_1_computeAsmRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}

void brazo_2dof_a093840a_1_computeSimRuntimeDerivedValuesDoubles(const double
  *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void brazo_2dof_a093840a_1_computeSimRuntimeDerivedValuesInts(const double *rtp,
  int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void brazo_2dof_a093840a_1_computeSimRuntimeDerivedValues(const double *rtp,
  RuntimeDerivedValuesBundle *rtdv)
{
  brazo_2dof_a093840a_1_computeSimRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  brazo_2dof_a093840a_1_computeSimRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}
