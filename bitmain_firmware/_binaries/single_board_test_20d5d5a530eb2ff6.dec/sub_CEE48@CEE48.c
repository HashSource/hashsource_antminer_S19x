int __fastcall sub_CEE48(int result)
{
  int (*v1)(void); // r4
  int v2; // r5
  int v3; // r7
  int v4; // r4
  int v5; // r3
  int v6[2]; // [sp+0h] [bp-8h] BYREF

  v1 = *(int (**)(void))(result + 40);
  if ( v1 )
  {
    v2 = result;
    result = v1();
    v3 = result;
    if ( result > 0 )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = *(_DWORD *)(v6[1] + 4 * v4++);
          result = (*(int (__fastcall **)(int, int *, _DWORD, int))(v2 + 40))(v2, v6, 0, v5);
          if ( result )
            break;
          if ( v3 == v4 )
            return result;
        }
        result = sub_ADB9C(v6[0]);
      }
      while ( v3 != v4 );
    }
  }
  return result;
}
