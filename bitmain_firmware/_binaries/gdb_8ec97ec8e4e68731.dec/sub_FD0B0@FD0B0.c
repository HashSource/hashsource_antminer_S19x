int __fastcall sub_FD0B0(int a1, int a2)
{
  int result; // r0
  char *v5; // r6
  size_t v6; // r5
  size_t v7; // r4
  int v8; // r3
  char v9[4]; // [sp+10h] [bp-44h] BYREF
  int v10; // [sp+14h] [bp-40h]
  int v11; // [sp+18h] [bp-3Ch]
  char *s2; // [sp+1Ch] [bp-38h]
  void *ptr[4]; // [sp+24h] [bp-30h] BYREF

  result = ((int (*)(void))sub_21B790)();
  if ( result )
  {
    v5 = (char *)sub_21B790(a1);
    result = sub_338BD4(v5, "(anonymous namespace)");
    if ( result )
    {
      result = sub_100308(v5);
      v6 = result;
      if ( v5[result] == 58 )
      {
        v7 = 0;
        v10 = a2;
        v11 = (int)&dword_4788EC;
        s2 = "(anonymous namespace)";
        do
        {
          if ( v6 - v7 == 21 && !strncmp(&v5[v7], s2, 0x15u) )
          {
            if ( v7 )
              v7 -= 2;
            memcpy(v9, v5, v7);
            memcpy(v9, v5, v6);
            v8 = v10;
            v9[v6] = 0;
            v9[v7] = 0;
            memset(ptr, 0, 12);
            sub_1B38F0(v11, (int)v9, v9, 0, 0, (int)ptr, 1, (struct obstack *)(v8 + 48));
            if ( ptr[0] )
              sub_339E64(ptr[0]);
          }
          v7 = v6 + 2;
          result = sub_100308(&v5[v6 + 2]);
          v6 = v7 + result;
        }
        while ( v5[v7 + result] == 58 );
      }
    }
  }
  return result;
}
