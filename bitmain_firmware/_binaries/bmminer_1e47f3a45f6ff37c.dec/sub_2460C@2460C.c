int sub_2460C()
{
  unsigned int *v0; // r5
  unsigned int v1; // r6
  int i; // r4
  int v3; // r0
  int v5; // r6
  unsigned int v6; // [sp+4h] [bp-Ch] BYREF
  unsigned int v7; // [sp+8h] [bp-8h] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  if ( dword_B32C0 == 2 )
  {
    v5 = dword_534B54;
    if ( (unsigned int)dword_534B54 < 0x32 )
      return 50;
    return v5;
  }
  else
  {
    v0 = dword_533B44;
    v1 = 50;
    for ( i = 0; i != 4; ++i )
    {
      v3 = i;
      if ( sub_26C0C(v3) )
      {
        sub_22990(v0, &v6, &v7, &v8);
        if ( v1 < v7 )
          v1 = v7;
      }
      v0 += 256;
    }
    return v1;
  }
}
