int __fastcall sub_21190(int result)
{
  int v1; // [sp+4h] [bp-8h]

  v1 = result;
  if ( result )
  {
    if ( *(_DWORD *)(result + 12) )
    {
      pthread_cancel(*(_DWORD *)(result + 12));
      *(_DWORD *)(v1 + 12) = 0;
    }
    return sub_2AD4C(v1 + 16);
  }
  return result;
}
