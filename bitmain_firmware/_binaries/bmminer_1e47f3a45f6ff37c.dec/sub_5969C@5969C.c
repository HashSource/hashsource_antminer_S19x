int __fastcall sub_5969C(_DWORD *a1)
{
  int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  if ( a1 )
  {
    v3 = sub_5A808(*a1);
    free(a1);
  }
  return v3;
}
