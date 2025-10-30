int *__fastcall sub_4DC08(_DWORD *a1, int a2)
{
  int v4; // r4
  char *v5; // r3
  int v6; // r0
  unsigned int v7; // r5
  int *result; // r0
  char *v9; // r3
  int v10; // r3
  int v11; // r2
  int *v12; // r1
  int v13; // r4
  int v14; // r12
  __int64 v15; // r0
  _DWORD v16[2]; // [sp+Ch] [bp-8h] BYREF
  int v17[4]; // [sp+14h] [bp+0h] BYREF

  v4 = ps_getpid_0(&dword_4878EC);
  sub_98F50(v17, v4);
  if ( !a2 )
  {
    v9 = sub_4D77C();
    v6 = v4;
    if ( v9 )
    {
      v7 = (unsigned __int8)v9[3];
      result = sub_4D6EC(v4) + 2;
      goto LABEL_6;
    }
LABEL_14:
    sub_4D6EC(v6);
LABEL_15:
    v15 = sub_94700(
            "arm-linux-nat.c",
            1025,
            "%s: Assertion `%s' failed.",
            "void arm_linux_remove_hw_breakpoint1(const arm_linux_hw_breakpoint*, int)",
            "i != count");
    return (int *)sub_4DD3C(v15, HIDWORD(v15));
  }
  v5 = sub_4D77C();
  v6 = v4;
  if ( !v5 )
    goto LABEL_14;
  v7 = (unsigned __int8)v5[2];
  result = sub_4D6EC(v4) + 34;
LABEL_6:
  if ( !v7 )
    goto LABEL_15;
  v10 = 0;
  v11 = 0;
  v12 = result;
  while ( 1 )
  {
    v13 = v11;
    if ( *a1 == result[2 * v10] )
    {
      v14 = a1[1];
      if ( v14 == v12[1] )
        break;
    }
    ++v10;
    LOBYTE(v13) = v11 + 1;
    v11 = (unsigned __int8)v10;
    v13 = (unsigned __int8)v13;
    v12 += 2;
    if ( v7 <= (unsigned __int8)v10 )
      goto LABEL_12;
  }
  v16[1] = v10;
  v12[1] = v14 & 0xFFFFFFFE;
  v16[0] = a2;
  result = (int *)sub_44904(v17[0], v17[1], v17[2], (int (__fastcall *)(int, int))sub_4DE6C, (int)v16);
LABEL_12:
  if ( v13 == v7 )
    goto LABEL_15;
  return result;
}
