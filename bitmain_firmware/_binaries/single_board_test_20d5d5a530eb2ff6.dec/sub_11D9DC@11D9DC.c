size_t __fastcall sub_11D9DC(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  size_t result; // r0
  int v4; // r1
  int v5; // r0
  int *v6; // r4
  int *v7; // r5
  bool v8; // zf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return -1;
  if ( *a1 == *a2 )
  {
    switch ( *a1 )
    {
      case 0:
        return sub_11D9B0(a1[1], a2[1]);
      case 1:
      case 2:
      case 6:
        v4 = a2[1];
        v5 = a1[1];
        return sub_AE280(v5, v4);
      case 3:
        return sub_AD80C((int *)a1[1], (_DWORD *)a2[1]);
      case 4:
        return sub_10E6E0(a1[1], a2[1]);
      case 5:
        v6 = (int *)a1[1];
        v7 = (int *)a2[1];
        v8 = v7 == 0;
        if ( v7 )
          v8 = v6 == 0;
        if ( v8 )
          return -1;
        if ( *v6 )
        {
          if ( !*v7 )
            return 1;
          result = sub_AE280(*v6, *v7);
          if ( result )
            return result;
        }
        else if ( *v7 )
        {
          return -1;
        }
        v5 = v6[1];
        if ( v5 )
        {
          v4 = v7[1];
          if ( v4 )
            return sub_AE280(v5, v4);
        }
        break;
      case 7:
        return sub_1280A0(a1[1], a2[1]);
      case 8:
        return sub_EB338(a1[1], a2[1]);
      default:
        return -1;
    }
  }
  return -1;
}
