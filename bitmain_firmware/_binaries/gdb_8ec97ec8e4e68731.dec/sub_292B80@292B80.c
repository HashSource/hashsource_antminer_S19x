int __fastcall sub_292B80(int a1, int a2)
{
  int v2; // r5
  size_t v3; // r0
  char *v4; // r0
  char *v5; // r8

  if ( !dword_48B700 )
    sub_29121C(a1, a2);
  if ( (dword_48AAA0 & 0x1000) != 0 )
  {
    sub_2945C8(a1, a2);
    --dword_48B6F8;
    *(_BYTE *)(dword_48B700 + dword_48B6F8) = 0;
    return 0;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 )
    {
      do
      {
        --v2;
        v3 = strlen((const char *)dword_48B700);
        v4 = (char *)sub_93028(v3 + 1);
        v5 = strcpy(v4, (const char *)dword_48B700);
        sub_2928D4();
        dword_48B6F0 = 0;
        dword_48B6F4 = (int)v5;
        dword_48AAA0 |= 0x800u;
      }
      while ( v2 != -1 );
    }
    return 0;
  }
}
