void __fastcall sub_267064(int a1, __int64 a2, int a3)
{
  int v5; // r9
  unsigned int v6; // r7
  int v7; // r8
  unsigned int v9; // r10
  int v10; // r0
  __int64 v11; // r2
  int v12; // r0
  int v13; // r3
  int v14; // r8
  int v15; // r10
  int v16; // r9
  int *v17; // r1
  int v18; // r12
  int v19; // r2
  bool v20; // zf
  int v21; // r3
  int v22; // r3

  v5 = a3;
  v6 = *(__int16 *)(*(_DWORD *)a1 + 4);
  if ( !*(_WORD *)(*(_DWORD *)a1 + 4) )
  {
    v13 = *(unsigned __int8 *)(*(_DWORD *)a1 + 2);
    if ( (v13 & 0x40) != 0 )
    {
      sub_25A6BC("(", a3);
      goto LABEL_23;
    }
LABEL_16:
    sub_266EA4(a3, 100, 0, v13, a2);
    return;
  }
  v7 = 0;
  v9 = 0;
  while ( 1 )
  {
    sub_258BD4();
    v10 = *(_DWORD *)(*(_DWORD *)a1 + 24);
    v11 = *(_QWORD *)(v10 + v7);
    v12 = v10 + v7;
    v7 += 24;
    if ( v11 == a2 )
      break;
    if ( v6 == ++v9 )
      goto LABEL_7;
  }
  if ( v6 > v9 )
  {
    sub_25A6BC(*(_BYTE **)(v12 + 16), a3);
    return;
  }
LABEL_7:
  v13 = *(unsigned __int8 *)(*(_DWORD *)a1 + 2);
  if ( (v13 & 0x40) == 0 )
    goto LABEL_16;
  v14 = 0;
  sub_25A6BC("(", a3);
  v15 = 1;
  v16 = 0;
  do
  {
    sub_258BD4();
    ++v14;
    v17 = (int *)(*(_DWORD *)(*(_DWORD *)a1 + 24) + v16);
    v18 = *v17;
    v19 = v17[1];
    if ( (*(_QWORD *)v17 & a2) != 0 )
    {
      v20 = v15 == 0;
      v15 = 0;
      if ( v20 )
      {
        sub_25A6BC(" | ", a3);
        v17 = (int *)(*(_DWORD *)(*(_DWORD *)a1 + 24) + v16);
        v18 = *v17;
        v19 = v17[1];
      }
      LODWORD(a2) = a2 & ~v18;
      HIDWORD(a2) &= ~v19;
      sub_25A6BC((_BYTE *)v17[4], a3);
    }
    v16 += 24;
  }
  while ( v6 != v14 );
  v5 = a3;
  if ( a2 )
    v21 = 1;
  else
    v21 = v15;
  if ( !v21 )
    goto LABEL_24;
  if ( !v15 )
    sub_25A6BC(" | ", a3);
LABEL_23:
  sub_25A6BC("unknown: ", v5);
  sub_266EA4(v5, 100, 0, v22, a2);
LABEL_24:
  sub_25A6BC(")", v5);
}
