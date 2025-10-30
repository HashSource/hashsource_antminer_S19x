int __fastcall sub_4DD3C(int *a1, int a2)
{
  int v2; // r5
  int v5; // r4
  char *v6; // r3
  int v7; // r0
  int *v8; // r2
  char *v9; // r3
  int v10; // r3
  int v11; // r12
  int *v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int result; // r0
  _DWORD v17[2]; // [sp+Ch] [bp-14h] BYREF
  int v18[3]; // [sp+14h] [bp-Ch] BYREF

  v5 = ps_getpid_0(&dword_4878EC);
  sub_98F50(v18, v5);
  if ( a2 )
  {
    v6 = sub_4D77C();
    v7 = v5;
    if ( v6 )
    {
      v2 = (unsigned __int8)v6[2];
      v8 = sub_4D6EC(v5) + 34;
      goto LABEL_6;
    }
LABEL_13:
    sub_4D6EC(v7);
    goto LABEL_14;
  }
  v9 = sub_4D77C();
  v7 = v5;
  if ( !v9 )
    goto LABEL_13;
  v2 = (unsigned __int8)v9[3];
  v8 = sub_4D6EC(v5) + 2;
LABEL_6:
  if ( v2 )
  {
    v10 = v8[1];
    v11 = v10 & 1;
    if ( (v10 & 1) == 0 )
    {
      v5 = v10 & 1;
      goto LABEL_16;
    }
    v12 = v8 + 2;
    LOBYTE(v5) = 0;
    while ( 1 )
    {
      v5 = (unsigned __int8)(v5 + 1);
      if ( v2 == v5 )
        break;
      v13 = v12[1];
      v8 = v12;
      v12 += 2;
      if ( (v13 & 1) == 0 )
        goto LABEL_15;
    }
  }
  do
  {
LABEL_14:
    sub_94700(
      "arm-linux-nat.c",
      986,
      "%s: Assertion `%s' failed.",
      "void arm_linux_insert_hw_breakpoint1(const arm_linux_hw_breakpoint*, int)",
      "i != count");
LABEL_15:
    v11 = v5;
LABEL_16:
    v14 = *a1;
    v15 = a1[1];
    v17[0] = a2;
    v17[1] = v11;
    *v8 = v14;
    v8[1] = v15;
    result = sub_44904(v18[0], v18[1], v18[2], (int (__fastcall *)(int, int))sub_4DE6C, (int)v17);
  }
  while ( v2 == v5 );
  return result;
}
