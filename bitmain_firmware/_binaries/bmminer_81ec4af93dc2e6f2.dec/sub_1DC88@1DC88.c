int __fastcall sub_1DC88(int a1, int a2)
{
  int (*v2)(void); // r3
  int i; // r9
  int v6; // r4
  int v7; // r0
  int v8; // r0
  char v10[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = sub_1F5E0;
  for ( i = 0; ; i = 1 )
  {
    v6 = v2();
    v7 = (*(int (__fastcall **)(int, int, int, int))v6)(v6, a1, a2, 14);
    if ( v7 >= 0 )
    {
      if ( (v7 & 6) == 6 || (v7 & 2) != 0 )
        return v6;
    }
    else
    {
      v8 = (*(int (__fastcall **)(int, int, int, int))v6)(v6, a1, a2, 2);
      if ( v8 >= 0 && (v8 & 2) != 0 )
        return v6;
    }
    (*(void (__fastcall **)(int))(v6 + 296))(v6);
    if ( i == 1 )
      break;
    v2 = sub_21304;
  }
  v6 = 0;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(v10, 0, 0x800u);
    strcpy(v10, "got nothing\n\n");
    sub_3BE28(3, v10, 0);
  }
  return v6;
}
