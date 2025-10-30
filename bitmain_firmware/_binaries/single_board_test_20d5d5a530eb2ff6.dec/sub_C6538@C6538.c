int __fastcall sub_C6538(int result)
{
  int v1; // r4
  void (*v2)(void); // r3

  if ( result )
  {
    v1 = result;
    v2 = *(void (**)(void))(*(_DWORD *)result + 16);
    if ( v2 || (v2 = *(void (**)(void))(*(_DWORD *)result + 12)) != 0 )
      v2();
    sub_C61F4(v1);
    sub_B94B4(*(int **)(v1 + 92));
    sub_C6508(*(_DWORD *)(v1 + 4));
    sub_B87C8(*(int **)(v1 + 8));
    sub_B87C8(*(int **)(v1 + 12));
    sub_E0758(*(_DWORD *)(v1 + 32), *(_DWORD *)(v1 + 36), (size_t)"crypto/ec/ec_lib.c");
    return sub_E0758(v1, 104, (size_t)"crypto/ec/ec_lib.c");
  }
  return result;
}
