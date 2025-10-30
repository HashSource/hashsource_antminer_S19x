int __fastcall sub_C3BEC(int a1)
{
  int v2; // r8
  __int64 v3; // r2
  int v4; // r1
  unsigned int *v5; // r4
  unsigned int *v6; // r7
  int v7; // r6
  unsigned int v8; // t1
  char *v9; // r0
  bool v10; // zf
  const char *v11; // r5
  int v12; // r6
  size_t v13; // r0
  int v14; // r2
  int v15; // r3
  int result; // r0
  const char *v17; // r2
  void *ptr; // [sp+4h] [bp-64h] BYREF
  int v19; // [sp+8h] [bp-60h]
  _BYTE v20[16]; // [sp+Ch] [bp-5Ch] BYREF
  _BYTE v21[20]; // [sp+1Ch] [bp-4Ch] BYREF
  int v22; // [sp+30h] [bp-38h]

  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v21);
  if ( v22 )
    sub_2575A4(v2, "addr");
  sub_B7694(5);
  v3 = *(_QWORD *)(a1 + 136);
  HIDWORD(v3) -= v3;
  if ( HIDWORD(v3) <= 7 )
    LOWORD(v4) = -12304;
  else
    LOWORD(v4) = -12316;
  HIWORD(v4) = 55;
  sub_257380(v2, v4, v3, HIDWORD(v3));
  v5 = *(unsigned int **)(a1 + 136);
  v6 = *(unsigned int **)(a1 + 140);
  if ( v5 == v6 )
  {
    v17 = "<standard signals>";
    if ( *(_BYTE *)(a1 + 148) )
      v17 = "<any signal>";
    sub_2575E8(v2, "what", v17);
  }
  else
  {
    v7 = 1;
    v19 = 0;
    ptr = v20;
    v20[0] = 0;
    do
    {
      v8 = *v5++;
      v9 = sub_C3A2C(v8);
      v10 = v7 == 0;
      v11 = v9;
      v12 = v19;
      if ( v10 )
      {
        if ( v19 == 0x7FFFFFFF )
          sub_33D184("basic_string::append");
        sub_33C320(&ptr, &word_3E1F84, 1);
        v12 = v19;
      }
      v13 = strlen(v11);
      if ( 0x7FFFFFFF - v12 < v13 )
        sub_33D184("basic_string::append");
      sub_33C320(&ptr, v11, v13);
      v7 = 0;
    }
    while ( v6 != v5 );
    sub_2575E8(v2, "what", ptr);
    if ( ptr != v20 )
      sub_339E64(ptr);
  }
  sub_257380(v2, "\" ", v14, v15);
  result = sub_2573F0(v2);
  if ( result )
    return sub_2575E8(v2, "catch-type", "signal");
  return result;
}
