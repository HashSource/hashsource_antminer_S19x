int __fastcall sub_A8DC4(int a1)
{
  int result; // r0
  int v3; // r3

  result = sub_E0758(
             *(_DWORD *)(*(_DWORD *)(a1 + 124) + 556),
             *(_DWORD *)(*(_DWORD *)(a1 + 124) + 552),
             (size_t)"ssl/s3_enc.c");
  v3 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v3 + 556) = 0;
  *(_DWORD *)(v3 + 552) = 0;
  return result;
}
