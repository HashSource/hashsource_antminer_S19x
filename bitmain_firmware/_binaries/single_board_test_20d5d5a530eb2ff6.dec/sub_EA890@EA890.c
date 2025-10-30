int *sub_EA890()
{
  int *result; // r0

  result = (int *)dword_6E1AA8;
  if ( dword_6E1AA8 )
  {
    sub_DFC38(dword_6E1AA8, 0);
    sub_DFB5C(dword_6E1AA8, sub_EA6E0);
    sub_DFB5C(dword_6E1AA8, sub_EA6F0);
    sub_DFB5C(dword_6E1AA8, (int (__fastcall *)(_DWORD))sub_EA6FC);
    result = sub_DF748((int *)dword_6E1AA8);
    dword_6E1AA8 = 0;
  }
  return result;
}
