/* -----------------------------------------------------------------------------
 *
 * Explicit instantiations needed by the mixed-precision variant of step-104.
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception OR LGPL-2.1-or-later
 *
 * -----------------------------------------------------------------------------
 */

#include <deal.II/lac/la_parallel_vector.templates.h>

namespace dealii
{
  namespace LinearAlgebra
  {
    namespace distributed
    {
      template Vector<float, MemorySpace::Default> &
      Vector<float, MemorySpace::Default>::operator=<double>(
        const Vector<double, MemorySpace::Default> &);

      template Vector<double, MemorySpace::Default> &
      Vector<double, MemorySpace::Default>::operator=<float>(
        const Vector<float, MemorySpace::Default> &);

      template void
      Vector<float, MemorySpace::Default>::copy_locally_owned_data_from<double>(
        const Vector<double, MemorySpace::Default> &);

      template void
      Vector<double, MemorySpace::Default>::copy_locally_owned_data_from<float>(
        const Vector<float, MemorySpace::Default> &);

      template void
      Vector<float, MemorySpace::Default>::reinit<double>(
        const Vector<double, MemorySpace::Default> &,
        const bool);

      template void
      Vector<double, MemorySpace::Default>::reinit<float>(
        const Vector<float, MemorySpace::Default> &,
        const bool);
    } // namespace distributed
  }   // namespace LinearAlgebra
} // namespace dealii