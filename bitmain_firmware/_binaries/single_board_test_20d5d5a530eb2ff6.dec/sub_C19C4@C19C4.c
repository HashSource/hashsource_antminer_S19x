int __fastcall sub_C19C4(_DWORD *a1, int a2, int a3)
{
  if ( a1 )
  {
    switch ( a2 )
    {
      case 2:
        a1[3] = a3;
        return 0;
      case 3:
        a1[3] |= a3;
        return 0;
      case 1:
        return a1[3];
      default:
        if ( *a1 && *(_DWORD *)(*a1 + 16) )
        {
          return (*(int (**)(void))(*a1 + 16))();
        }
        else
        {
          sub_D0048(37, 110, 108, "crypto/dso/dso_lib.c", 225);
          return -1;
        }
    }
  }
  else
  {
    sub_D0048(37, 110, 67, "crypto/dso/dso_lib.c", 205);
    return -1;
  }
}
