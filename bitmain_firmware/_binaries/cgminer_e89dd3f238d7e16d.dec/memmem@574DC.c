int __fastcall memmem(_BYTE *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v8; // [sp+8h] [bp-14h]
  _BYTE *v11; // [sp+14h] [bp-8h]

  if ( !a4 )
    return (int)a1;
  if ( a2 < a4 )
    return 0;
  if ( a4 > 0x1F )
    return sub_57028((int)a1, a2, a3, a4);
  v11 = sub_568A0(a1, *a3, a2);
  if ( !v11 || a4 == 1 )
    return (int)v11;
  v8 = a2 - (v11 - a1);
  if ( v8 >= a4 )
    return sub_56CF0((int)v11, v8, a3, a4);
  else
    return 0;
}
