bool __fastcall sub_2CAA5C(int a1, int a2)
{
  const char *v2; // r4
  const char *v3; // r5
  char *v4; // r0

  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
  {
    v2 = *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344) + 12);
    if ( v2 )
    {
      v3 = *(const char **)a2;
      v4 = strrchr(*(const char **)a2, 47);
      if ( v4 )
        v3 = v4 + 1;
      return strcmp(v3, v2) == 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    ((void (__fastcall *)(int))loc_2A6C48)(1);
    return 0;
  }
}
