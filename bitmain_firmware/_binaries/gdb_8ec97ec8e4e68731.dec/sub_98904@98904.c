char *__fastcall sub_98904(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  char *v5; // r4
  bool v7; // cc
  int v8; // r3
  char *v9; // r4
  char *v10; // r4

  v4 = dword_475844 + 1;
  if ( a3 == 2 )
  {
    if ( v4 <= 15 )
      ++dword_475844;
    else
      a4 = 0;
    if ( v4 > 15 )
      dword_475844 = a4;
    v10 = (char *)&unk_475524 + 50 * dword_475844;
    sub_93170(v10, 0x32u, "%04x", (unsigned __int16)a1);
    return v10;
  }
  else if ( a3 == 4 )
  {
    v7 = v4 <= 15;
    if ( v4 > 15 )
    {
      v9 = (char *)&unk_475524;
      v8 = 0;
    }
    else
    {
      v8 = 50;
      ++dword_475844;
      v9 = (char *)&unk_475524 + 50 * v4;
    }
    if ( !v7 )
      dword_475844 = v8;
    sub_93170(v9, 0x32u, "%08lx", a1);
    return v9;
  }
  else
  {
    if ( v4 <= 15 )
      ++dword_475844;
    else
      a4 = 0;
    if ( v4 > 15 )
      dword_475844 = a4;
    v5 = (char *)&unk_475524 + 50 * dword_475844;
    sub_93170(v5, 0x32u, "%08lx%08lx", a2, a1);
    return v5;
  }
}
