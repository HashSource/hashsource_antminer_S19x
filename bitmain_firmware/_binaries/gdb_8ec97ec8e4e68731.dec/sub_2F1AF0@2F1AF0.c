int __fastcall sub_2F1AF0(int *a1, int a2, int a3, int a4)
{
  bool v5; // zf
  int v6; // r3
  int v7; // r3
  int v8; // r3

  switch ( a3 )
  {
    case 4:
      v5 = a4 == 0;
      v8 = *a1;
      if ( v5 )
        return (*(int (__fastcall **)(int))(v8 + 40))(a2);
      else
        return (*(int (__fastcall **)(int))(v8 + 44))(a2);
    case 8:
      v5 = a4 == 0;
      v7 = *a1;
      if ( v5 )
        return (*(int (__fastcall **)(int))(v7 + 28))(a2);
      else
        return (*(int (__fastcall **)(int))(v7 + 32))(a2);
    case 2:
      v5 = a4 == 0;
      v6 = *a1;
      if ( v5 )
        return (*(int (__fastcall **)(int))(v6 + 52))(a2);
      else
        return (*(int (__fastcall **)(int))(v6 + 56))(a2);
    default:
      sub_2A6BBC("elf-eh-frame.c", 193);
      return 0;
  }
}
