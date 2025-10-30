void __fastcall sub_26A8FC(_BYTE *a1)
{
  void *v1; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  sub_1C42A8((char **)&ptr, a1);
  v1 = ptr;
  if ( !*((_DWORD *)ptr + 2) || *((_DWORD *)ptr + 4) != 21 )
    sub_946E0("Init-if-undefined requires an assignment expression.");
  if ( *((_DWORD *)ptr + 8) != 45 )
    sub_946E0("The first parameter to init-if-undefined should be a GDB variable.");
  if ( *(_DWORD *)(*((_DWORD *)ptr + 12) + 8) || (sub_14CD3C((int *)ptr), (v1 = ptr) != 0) )
    free(v1);
}
