int __fastcall sub_145F4(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v6; // r0
  char *i; // r5
  unsigned int *v8; // r3
  unsigned int v9; // r1
  int v10; // r0
  _DWORD *v11; // r4
  _DWORD *v12; // r0
  int v13; // r4
  char s[16]; // [sp+4h] [bp-10h] BYREF

  if ( !a1 || *a1 || !a2 || *a2 || sub_13DB0(a3, a2, s, 0xBu) )
    return -1;
  v6 = sub_13E80(a2);
  for ( i = (char *)sub_13EBC(v6); i; i = (char *)sub_13EBC(v10) )
  {
    v11 = (_DWORD *)sub_13EC4((int)(i - 16));
    if ( !v11 )
      break;
    v12 = (_DWORD *)sub_13E38(a1, i);
    if ( !v12 || *v12 || *v11 )
    {
      v8 = v11 + 1;
      if ( v11[1] != -1 )
      {
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        __dmb(0xFu);
      }
      if ( sub_144B0(a1, i, v11) )
      {
LABEL_18:
        v13 = -1;
        goto LABEL_19;
      }
    }
    else if ( sub_145F4() )
    {
      goto LABEL_18;
    }
    v10 = sub_13EA8(a2, (int)(i - 16));
  }
  v13 = 0;
LABEL_19:
  sub_12608(a3, s);
  return v13;
}
