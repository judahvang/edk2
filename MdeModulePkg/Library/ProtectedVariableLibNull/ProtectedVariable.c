/** @file
  NULL version of ProtectedVariableLib used to disable protected variable services.

Copyright (c) 2022, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <PiDxe.h>
#include <Uefi.h>

#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/ProtectedVariableLib.h>

/**

  Initialization for protected varibale services.

  @param[in]  ContextIn   Pointer to variable service context needed by
                          protected variable.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibInitialize (
  IN  PROTECTED_VARIABLE_CONTEXT_IN  *ContextIn
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Prepare for variable update.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibWriteInit (
  VOID
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Update a variable with protection provided by this library.

  @param[in,out]  CurrVariable        Variable to be updated. It's NULL if
                                      adding a new variable.
  @param[in]      CurrVariableInDel   In-delete-transiion copy of updating variable.
  @param[in,out]  NewVariable         Buffer of new variable data.
                                      Buffer of "MetaDataHmacVar" and new
                                      variable (encrypted).
  @param[in,out]  NewVariableSize     Size of NewVariable.
                                      Size of (encrypted) NewVariable and
                                      "MetaDataHmacVar".

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibUpdate (
  IN  OUT VARIABLE_HEADER  *CurrVariable,
  IN      VARIABLE_HEADER  *CurrVariableInDel,
  IN  OUT VARIABLE_HEADER  *NewVariable,
  IN  OUT UINTN            *NewVariableSize
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Finalize a variable updating after it's written to NV variable storage
  successfully.

  @param[in]      NewVariable       Buffer of new variables and MetaDataHmacVar.
  @param[in]      VariableSize      Size of buffer pointed by NewVariable.
  @param[in]      StoreIndex        New index of the variable in store.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibWriteFinal (
  IN  VARIABLE_HEADER  *NewVariable,
  IN  UINTN            VariableSize,
  IN  UINT64           StoreIndex
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Retrieve plain data, if encrypted, of given variable.

  @param[in]      Variable           Pointer to header of a Variable.
  @param[in,out]  Data               Pointer to plain data of the given variable.
  @param[in,out]  DataSize           Size of data returned or data buffer needed.
  @param[in]      AuthFlag           Auth-variable indicator.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibGetData (
  IN      VARIABLE_HEADER  *Variable,
  IN  OUT VOID             *Data,
  IN  OUT UINT32           *DataSize,
  IN      BOOLEAN          AuthFlag
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Get the specified protected variable.

  @param[in]      VariableName      Pointer to variable name.
  @param[in]      VariableGuid      Pointer to vairable GUID.
  @param[out]     Attributes        Pointer to attributes.
  @param[in,out]  DataSize          Pointer to data size.
  @param[out]     Data              Pointer to data.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibGet (
  IN      CONST  CHAR16    *VariableName,
  IN      CONST  EFI_GUID  *VariableGuid,
  OUT UINT32               *Attributes,
  IN  OUT UINTN            *DataSize,
  OUT VOID                 *Data OPTIONAL
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Find the protected variable.

  @param[in,out]      VarInfo     Pointer to structure containing variable information.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibFind (
  IN  OUT PROTECTED_VARIABLE_INFO  *VarInfo
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Find next protected variable.

  @param[in,out]      VariableNameSize    Pointer to size of variable name.
  @param[in,out]      VariableName        Pointer to variable name.
  @param[in,out]      VariableGuid        Pointer to vairable GUID.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibFindNext (
  IN OUT UINTN     *VariableNameSize,
  IN OUT CHAR16    *VariableName,
  IN OUT EFI_GUID  *VariableGuid
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Find next protected variable stub.

  @param[in,out]      VarInfo     Pointer to structure containing variable information.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibFindNextEx (
  IN  OUT PROTECTED_VARIABLE_INFO  *VarInfo
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Get protected variable by information.

  @param[in,out]      VarInfo     Pointer to structure containing variable information.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibGetByInfo (
  IN  OUT PROTECTED_VARIABLE_INFO  *VarInfo
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Get protected variable by name.

  @param[in]      VariableName      Pointer to variable name.
  @param[in]      VariableGuid      Pointer to vairable GUID.
  @param[out]     Attributes        Pointer to attributes.
  @param[in,out]  DataSize          Pointer to data size.
  @param[out]     Data              Pointer to data.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibGetByName (
  IN      CONST  CHAR16    *VariableName,
  IN      CONST  EFI_GUID  *VariableGuid,
  OUT UINT32               *Attributes,
  IN  OUT UINTN            *DataSize,
  OUT VOID                 *Data OPTIONAL
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Get protected variable by name.

  @param[in]      Variable      Pointer to variable name.
  @param[in,out]  Data          Pointer to variable data.
  @param[in,out]  DataSize      Pointer to data size.
  @param[in]      AuthFlag      Authenticate flag.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibGetByBuffer (
  IN      VARIABLE_HEADER  *Variable,
  IN  OUT VOID             *Data,
  IN  OUT UINT32           *DataSize,
  IN      BOOLEAN          AuthFlag
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Refresh variable information changed by variable service.

  @param[in]  Variable         Pointer to buffer of the updated variable.
  @param[in]  VariableSize     Size of variable pointed by Variable.
  @param[in]  StoreIndex       New index of the variable in store.
  @param[in]  RefreshData      Flag to indicate if the variable has been updated.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.
**/
EFI_STATUS
EFIAPI
ProtectedVariableLibRefresh (
  IN  VARIABLE_HEADER  *Variable,
  IN  UINTN            VariableSize,
  IN  UINT64           StoreIndex,
  IN  BOOLEAN          RefreshData
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Get sorted protected variable list.

  @param[in,out]  Buffer        Pointer to buffer.
  @param[in,out]  NumElements   Pointer to number of elements.

  @retval EFI_UNSUPPORTED           Unsupported to process protected variable.

**/
EFI_STATUS
EFIAPI
ProtectedVariableLibGetSortedList (
  IN  OUT  EFI_PHYSICAL_ADDRESS  **Buffer,
  IN  OUT  UINTN                 *NumElements
  )
{
  return EFI_UNSUPPORTED;
}

/**

  Determine if the variable is the HMAC variable.

  @param[in]  VariableName   Pointer to variable name.

  @return FALSE     Variable is not HMAC variable

**/
BOOLEAN
ProtectedVariableLibIsHmac (
  IN CHAR16  *VariableName
  )
{
  return FALSE;
}
