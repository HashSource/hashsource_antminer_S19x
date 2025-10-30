_DWORD *__fastcall sub_5840C(int a1, int a2, int a3)
{
  _DWORD *v8; // [sp+14h] [bp-8h]

  v8 = malloc(4u);
  if ( !v8 )
    return 0;
  *v8 = sub_58B70(a1, a2, a3);
  if ( *v8 )
    return v8;
  else
    return 0;
}
