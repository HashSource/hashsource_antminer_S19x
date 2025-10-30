void __fastcall sub_256120(_BYTE *a1)
{
  _DWORD *v1; // r0
  int v2; // r0
  void *ptr; // [sp+4h] [bp-Ch] BYREF

  if ( a1 )
  {
    sub_1C42A8((char **)&ptr, a1);
    if ( *((_DWORD *)ptr + 4) == 88 )
    {
      v1 = (_DWORD *)*((_DWORD *)ptr + 8);
    }
    else
    {
      v2 = sub_14CD64((int *)ptr);
      v1 = (_DWORD *)sub_26BC70(v2);
    }
    if ( v1 )
      sub_174F24(v1, 0);
    if ( ptr )
      free(ptr);
  }
}
