signed int __fastcall sub_302E10(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r3
  int (*v9)(void); // r3
  signed int result; // r0
  void *v11; // r8
  int v12; // r3

  v5 = *(_DWORD *)(a1 + 4);
  if ( a2 )
    v9 = *(int (**)(void))(v5 + 420);
  else
    v9 = *(int (**)(void))(v5 + 260);
  result = v9();
  if ( result < 0 )
    goto LABEL_13;
  if ( !result )
    return result;
  v11 = sub_2AB368(result);
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    if ( a2 )
      result = (*(int (__fastcall **)(int, void *))(v12 + 424))(a1, v11);
    else
      result = (*(int (__fastcall **)(int, void *))(v12 + 264))(a1, v11);
    if ( result < 0 )
    {
      ((void (__fastcall *)(int))loc_2A6C48)(7);
      free(v11);
      return -1;
    }
    else
    {
      *a3 = v11;
      *a4 = 4;
    }
  }
  else
  {
LABEL_13:
    ((void (__fastcall *)(int))loc_2A6C48)(7);
    return -1;
  }
  return result;
}
