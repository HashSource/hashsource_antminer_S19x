int __fastcall sub_EA67C(int a1)
{
  int result; // r0
  int v3; // r6

  result = dword_6E1A94;
  if ( dword_6E1A94 )
  {
    dword_6E1AA4 = a1;
    v3 = sub_DFC34(dword_6E1A94);
    sub_DFC38(dword_6E1A94, 0);
    sub_DFB5C(dword_6E1A94, (int (__fastcall *)(_DWORD))sub_EA5B0);
    if ( a1 < 0 )
    {
      sub_DF748((int *)dword_6E1A94);
      sub_10BFDC(dword_6E1A90, sub_EA1E8);
      result = sub_10C574(dword_6E1A98);
      dword_6E1A94 = 0;
      dword_6E1A90 = 0;
      dword_6E1A98 = 0;
    }
    else
    {
      return sub_DFC38(dword_6E1A94, v3);
    }
  }
  return result;
}
