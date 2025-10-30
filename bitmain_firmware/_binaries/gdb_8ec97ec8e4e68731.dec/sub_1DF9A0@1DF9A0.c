int __fastcall sub_1DF9A0(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r1

  if ( a1 )
    return sub_1DFE6C();
  if ( !((int (__fastcall *)(_DWORD))loc_162B0)(0) )
  {
    ((void (*)(void))loc_162B0)();
    goto LABEL_7;
  }
  v1 = v3;
  if ( sub_1DFE6C() == -1 )
  {
LABEL_7:
    sub_92F64(9, "Register %d is not available", v1);
    JUMPOUT(0x1DF9FC);
  }
  return result;
}
