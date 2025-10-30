int __fastcall sub_24063C(const char *a1)
{
  int v2; // r5
  __int64 v3; // kr00_8
  int *v4; // r0
  int v5; // r0
  int v7; // r5
  char *v8; // r5
  int v9; // r2
  char *v10; // r5
  int v11; // r2
  int *v12; // r0

  v2 = dword_4878EC;
  if ( a1 )
  {
    v3 = qword_4878F0;
    v4 = (int *)sub_242338(a1, 0);
    sub_240498(a1, v4);
    if ( v2 == dword_4878EC && v3 == qword_4878F0 )
    {
      v12 = (int *)sub_242FDC(v5);
      return sub_2404E8(*v12, 12);
    }
    else
    {
      return sub_1BABB4(12);
    }
  }
  else
  {
    if ( dword_4878EC == dword_475848 && qword_4878F0 == qword_47584C )
      sub_946E0("No thread selected");
    if ( !sub_22EAC0() )
      sub_946E0("No stack.");
    v7 = ((int (*)(void))loc_23DBE4)();
    if ( sub_23DA74(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0), 2) )
    {
      v8 = sub_240128(v7);
      v9 = sub_23095C(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
      return sub_259F10("[Current thread is %s (%s) (exited)]\n", v8, v9);
    }
    else
    {
      v10 = sub_240128(v7);
      v11 = sub_23095C(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
      return sub_259F10("[Current thread is %s (%s)]\n", v10, v11);
    }
  }
}
