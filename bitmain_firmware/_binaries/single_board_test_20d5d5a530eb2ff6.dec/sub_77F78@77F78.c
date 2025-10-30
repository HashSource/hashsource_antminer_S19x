int __fastcall sub_77F78(int a1, int a2, int a3, int a4)
{
  char v8; // r0
  int result; // r0
  int v10; // [sp+8h] [bp-Ch] BYREF
  int v11[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 == 1 )
  {
    sub_78850(0, a1, 0, 168, &v10);
    sub_78850(0, a1, 0, 24, v11);
  }
  else
  {
    sub_78850(1, a1, a3, 168, &v10);
    sub_78850(1, a1, a3, 24, v11);
  }
  LOWORD(v10) = v10 | 0x1F0;
  v8 = HIBYTE(v11[0]) & 0xF0;
  HIWORD(v11[0]) &= 0xF0F0u;
  if ( a4 )
  {
    HIBYTE(v11[0]) = v8 | 0xF0;
  }
  else
  {
    printf("disable core return nonce");
    HIBYTE(v11[0]) &= 0xFu;
  }
  result = sub_771FC(a1, a2, a3, 168, v10);
  if ( !result )
  {
    usleep(0x2710u);
    return sub_771FC(a1, a2, a3, 24, v11[0]);
  }
  return result;
}
