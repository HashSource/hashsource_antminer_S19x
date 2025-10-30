int __fastcall sub_1E831C(int a1)
{
  int v1; // r0
  int v2; // r6
  int result; // r0
  int v4; // r6

  v1 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  v2 = dword_488C94;
  result = ((int (__fastcall *)(int))loc_1E2198)(72);
  if ( result == 1 )
  {
    v4 = ps_getpid_0(v2 + 60);
    result = ps_getpid_0((int)&dword_4878EC);
    if ( v4 != result )
      return sub_1E8188(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0), 1);
  }
  return result;
}
