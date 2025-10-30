void __fastcall sub_180590(const char *a1, int a2)
{
  int v4; // r0
  char *v5; // r4
  unsigned int v6; // r5
  char *v7; // r0
  __int64 v8; // r0
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r0
  const char *v12; // r0
  char *v13; // r6
  const char *v14; // r0
  int v15; // [sp+4h] [bp-30h]
  const char *v16; // [sp+4h] [bp-30h]
  _DWORD v17[5]; // [sp+8h] [bp-2Ch] BYREF
  int v18; // [sp+1Ch] [bp-18h] BYREF
  void *ptr; // [sp+20h] [bp-14h] BYREF
  int v20[4]; // [sp+24h] [bp-10h] BYREF

  v4 = sub_243C34(a1);
  if ( !sub_22EBBC(v4) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  sub_17E884();
  sub_17E8C4();
  sub_17EBD4(&ptr, a1, &v18);
  v5 = (char *)ptr;
  sub_180104((int)&dword_4899A0, v18);
  if ( !v5 )
    sub_51E9C("signal number");
  v6 = sub_99A88(v5);
  if ( v6 != 143 )
  {
LABEL_4:
    if ( dword_487950 )
      goto LABEL_5;
    goto LABEL_16;
  }
  v8 = sub_14CC00((int)v5);
  if ( (_DWORD)v8 )
  {
    v6 = sub_1890A0(v8, HIDWORD(v8));
    goto LABEL_4;
  }
  v6 = dword_487950;
  if ( !dword_487950 )
  {
LABEL_16:
    sub_187C40(v17, 0);
    v9 = (_DWORD *)dword_48A4D4;
    v20[0] = v17[0];
    v20[1] = v17[1];
    v20[2] = v17[2];
    if ( dword_48A4D4 )
    {
      v15 = 0;
      do
      {
        if ( v9[11] != 2 && !sub_98F78(v9 + 2, &dword_4878EC) && sub_9904C(v9 + 2, v20) )
        {
          v10 = v9[36];
          if ( v10 )
          {
            if ( sub_188FD8(v10) )
            {
              if ( !v15 )
                sub_259858("Note:\n");
              v16 = (const char *)sub_240128(v9);
              v13 = sub_99A4C(v9[36]);
              v14 = sub_99A28(v9[36]);
              sub_259858("  Thread %s previously stopped with signal %s, %s.\n", v16, v13, v14);
              v15 = 1;
            }
          }
        }
        v9 = (_DWORD *)v9[1];
      }
      while ( v9 );
      if ( v15 )
      {
        v11 = ((int (*)(void))loc_23DBE4)();
        v12 = (const char *)sub_240128(v11);
        if ( !sub_25A3E4(
                "Continuing thread %s (the current thread) with specified signal will\n"
                "still deliver the signals noted above to their respective threads.\n"
                "Continue anyway? ",
                v12) )
          sub_946E0("Not confirmed.");
      }
    }
LABEL_5:
    if ( !a2 )
      goto LABEL_8;
    if ( v6 )
    {
      v7 = sub_99A4C(v6);
      sub_259F10("Continuing with signal %s.\n", v7);
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  if ( a2 )
LABEL_14:
    sub_259F10("Continuing with no signal.\n");
  v6 = 0;
LABEL_8:
  sub_187D70(0);
  sub_18BAD4(-1, v6);
  if ( ptr )
    free(ptr);
}
