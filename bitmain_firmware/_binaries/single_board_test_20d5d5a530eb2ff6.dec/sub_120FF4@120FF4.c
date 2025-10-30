int __fastcall sub_120FF4(int a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r4
  _DWORD *v8; // r6
  int result; // r0
  void *v10; // r5
  bool v11; // cc
  unsigned int v12; // r1
  __int64 v13; // [sp+10h] [bp-Ch] BYREF

  if ( !sub_126AF4(&v13, *a2) || v13 == 0x7FFFFFFF )
    sub_B550C(a3, "%*sVersion: <unsupported>", a4, &byte_1A4198);
  else
    sub_B550C(a3, "%*sVersion: %ld (0x%lX)", a4, &byte_1A4198, (_DWORD)v13 + 1, (_DWORD)v13);
  v7 = 0;
  while ( 1 )
  {
    v11 = v7 < sub_10C010(a2[1]);
    v12 = v7++;
    if ( !v11 )
      break;
    v8 = (_DWORD *)sub_10C01C((_DWORD *)a2[1], v12);
    result = sub_122434(0, *v8);
    v10 = (void *)result;
    if ( !result )
      return result;
    sub_B550C(a3, "\n%*sZone: %s, User: ", a4, &byte_1A4198, (const char *)result);
    CRYPTO_free(v10);
    sub_128190(a3, v8[1]);
  }
  return 1;
}
