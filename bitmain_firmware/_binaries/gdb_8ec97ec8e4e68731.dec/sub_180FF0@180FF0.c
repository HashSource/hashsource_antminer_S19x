void __fastcall sub_180FF0(const char *a1, int a2)
{
  int v4; // r7
  void *v5; // r4
  _DWORD *v6; // r4
  int *v7; // r0
  int v8; // r0
  const char **v9; // r6
  int *v10; // r0
  int *v11; // r5
  int v12; // r9
  const char *v13; // r2
  int v14; // r4
  int v15; // r5
  int v16; // r5
  _DWORD *v17; // r0
  int v18; // [sp+4h] [bp-18h] BYREF
  void *ptr; // [sp+8h] [bp-14h] BYREF
  void *v20[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = sub_B894C((int)a1);
  if ( !sub_22EBBC(v4) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  sub_17E884();
  sub_17E8C4();
  sub_17EBD4(&ptr, a1, &v18);
  v5 = ptr;
  sub_180104((int)&dword_4899A0, v18);
  if ( !v5 )
    sub_51E9C("starting address");
  sub_19BAC0(v20, v5, 1);
  v6 = v20[0];
  if ( (char *)v20[1] - (char *)v20[0] != 40 )
    sub_946E0("Unreasonable jump request");
  if ( !*((_DWORD *)v20[0] + 1) && !*((_DWORD *)v20[0] + 5) )
    sub_946E0("No source file has been specified.");
  v7 = sub_D07B4((int *)v20[0]);
  v8 = sub_15F70C((int)v7);
  v9 = (const char **)sub_C3410(v8);
  v10 = sub_C3460(v6[5]);
  v11 = v10;
  if ( !v9 )
  {
LABEL_11:
    if ( !v11 )
      goto LABEL_12;
    goto LABEL_19;
  }
  if ( v9 != (const char **)v10 )
  {
    v12 = v6[4];
    if ( dword_46D448 )
      v13 = (const char *)sub_21B3C4(v9);
    else
      v13 = *v9;
    if ( !sub_25A3E4("Line %d is not in `%s'.  Jump anyway? ", v12, v13) )
      sub_946E0("Not confirmed.");
    goto LABEL_11;
  }
LABEL_19:
  sub_21C7C8(v11, 0);
  if ( *((__int16 *)v11 + 11) < 0 )
    v15 = 0;
  else
    v15 = *(_DWORD *)(sub_22099C(v11) + 168) + 12 * *((__int16 *)v11 + 11);
  if ( sub_2142A0(v15)
    && !sub_2142D0(v15)
    && !sub_25A3E4("WARNING!!!  Destination is in unmapped overlay!  Jump anyway? ") )
  {
    sub_946E0("Not confirmed.");
  }
LABEL_12:
  v14 = v6[5];
  if ( a2 )
  {
    sub_259F10("Continuing at ");
    v16 = sub_25AC8C(v4, v14);
    v17 = (_DWORD *)sub_242F8C(v16);
    sub_25A6BC(v16, *v17);
    sub_259F10(".\n");
  }
  sub_187D70(0);
  sub_18BAD4(v14, 0);
  if ( v20[0] )
    sub_339E64(v20[0]);
  if ( ptr )
    free(ptr);
}
