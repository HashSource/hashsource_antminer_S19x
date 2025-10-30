int __fastcall sub_33678(int a1, char *a2)
{
  __int64 v2; // d0
  const char *v3; // r3
  char v7[16]; // [sp+20h] [bp-4Ch] BYREF
  unsigned int v8[8]; // [sp+30h] [bp-3Ch] BYREF
  __int64 v9; // [sp+50h] [bp-1Ch]
  unsigned int v10; // [sp+5Ch] [bp-10h]
  char *v11; // [sp+60h] [bp-Ch]
  int i; // [sp+64h] [bp-8h]

  sub_2E064(v8, (unsigned int *)(a1 + 192));
  for ( i = 0; i <= 28 && !*((_BYTE *)v8 + i); ++i )
    ;
  v11 = (char *)v8 + i;
  v10 = sub_2DE60(*(unsigned int *)((char *)v8 + i));
  v2 = *(_QWORD *)(a1 + 376);
  round();
  v9 = sub_68F40(v2, HIDWORD(v2));
  sub_32154(*(_QWORD *)(a1 + 232), v7, 0x10u, 0);
  if ( *(_BYTE *)(a1 + 283) )
    v3 = " BLOCK!";
  else
    v3 = byte_6F818;
  return snprintf(a2, 0x40u, "%08lx Diff %s/%llu%s", v10, v7, v9, v3);
}
