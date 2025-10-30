int __fastcall sub_1DB78(int a1, int a2)
{
  int v4; // r5
  int v5; // r4
  int v6; // r0
  bool v7; // zf
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v4 = 0;
  do
  {
    v5 = off_9104C[v4]();
    v6 = (*(int (__fastcall **)(int, int, int, int))v5)(v5, a1, a2, 14);
    if ( v6 < 0 )
    {
      v6 = (*(int (__fastcall **)(int, int, int, int))v5)(v5, a1, a2, 2);
      if ( v6 < 0 )
        goto LABEL_5;
    }
    else if ( (v6 & 6) == 6 )
    {
      return v5;
    }
    if ( (v6 & 2) != 0 )
      return v5;
LABEL_5:
    (*(void (__fastcall **)(int))(v5 + 296))(v5);
    v7 = v4 == 1;
    v4 = 1;
  }
  while ( !v7 );
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(v9, 0, 0x800u);
    strcpy(v9, "got nothing\n\n");
    sub_3C5B8(3, v9, 0);
  }
  return 0;
}
