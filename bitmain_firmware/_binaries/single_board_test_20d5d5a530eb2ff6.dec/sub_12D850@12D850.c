int __fastcall sub_12D850(int a1, const char *a2, _DWORD *a3, int a4, int a5)
{
  const char *v8; // r7
  int result; // r0
  int v10; // r8
  _DWORD *v11; // r0
  int v12; // r0
  int v13; // r8
  int v14; // r0
  void *v15; // r8
  char *v16; // r0
  char *v17; // r10
  int v18; // r3
  const char *v19; // r3
  int v20; // r6
  int v21; // r2
  _BOOL4 v22; // r4

  if ( !a3 )
    return 1;
  if ( sub_B8720((int)a3) )
  {
    v8 = "-";
    result = sub_B6E94(a1, a5, 128);
    if ( !result )
      return result;
  }
  else
  {
    v8 = &byte_1A4198;
    result = sub_B6E94(a1, a5, 128);
    if ( !result )
      return result;
  }
  if ( sub_B85B0((int)a3) )
    return sub_B550C(a1, "%s 0\n", a2) > 0;
  if ( sub_B85BC(a3) <= 64 )
  {
    v10 = *(_DWORD *)sub_1335CC(a3);
    v11 = (_DWORD *)sub_1335CC(a3);
    return sub_B550C(a1, "%s %s%lu (%s0x%lx)\n", a2, v8, v10, v8, *v11) > 0;
  }
  else
  {
    v12 = sub_B85BC(a3);
    v13 = v12 + 14;
    v14 = v12 + 7;
    if ( v14 >= 0 )
      v13 = v14;
    v15 = (void *)((v13 >> 3) + 1);
    v16 = (char *)CRYPTO_malloc(v15);
    v17 = v16;
    if ( v16
      && ((v18 = *(unsigned __int8 *)v8, *v16 = 0, v18 == 45) ? (v19 = " (Negative)") : (v19 = &byte_1A4198),
          sub_B550C(a1, (unsigned __int8 *)"%s%s\n", a2, v19) > 0) )
    {
      v20 = (int)(v17 + 1);
      v21 = sub_B8648(a3, (int)(v17 + 1));
      if ( v17[1] < 0 )
      {
        v20 = (int)v17;
        ++v21;
      }
      v22 = sub_12D7A8(a1, v20, v21, a5 + 4);
    }
    else
    {
      v22 = 0;
    }
    sub_E0758(v17, (size_t)v15, (size_t)"crypto/asn1/t_pkey.c");
    return v22;
  }
}
