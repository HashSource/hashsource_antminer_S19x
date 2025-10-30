int __fastcall sub_138510(int a1, int *a2)
{
  int v3; // r0
  int v5; // r3
  int v6; // r7
  int v7; // r0
  int v8; // r0
  int v9; // r3
  unsigned __int16 *v10; // r4
  int v11; // r3
  __int64 v12; // r10
  int v13; // r8
  char *v14; // r0
  const char *v15; // r2
  int v16; // r3
  bool v17; // zf
  int v18; // r3
  int v19; // r2
  int v20; // r3
  char v21; // r1
  int v22; // r0
  bool v23; // r3
  int v25; // r1
  int v26; // r0
  int v27; // r12
  __int64 v28; // [sp+10h] [bp-54h]
  int v29; // [sp+1Ch] [bp-48h]
  _BYTE v30[4]; // [sp+20h] [bp-44h] BYREF
  _BYTE v31[4]; // [sp+24h] [bp-40h] BYREF
  __int64 v32; // [sp+28h] [bp-3Ch] BYREF
  struct obstack obstack; // [sp+34h] [bp-30h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 2);
  if ( !v3 )
  {
LABEL_6:
    v6 = ((int (__fastcall *)(int))loc_16FD44)(*a2);
    **(_BYTE **)(v6 + 24) = 5;
    v7 = sub_1359DC(0, a1, a2, 0);
    if ( v7 )
      *(_DWORD *)(*(_DWORD *)(v6 + 24) + 12) = v7;
    if ( sub_12E694(a1, 73, (int)a2) )
      *(_DWORD *)(*(_DWORD *)(v6 + 24) + 20) = sub_1345C4(a1, a2);
    v8 = sub_12E694(a1, 11, (int)a2);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 8);
    else
      *(_DWORD *)(v6 + 20) = 0;
    if ( v8 )
      *(_DWORD *)(v6 + 20) = v9;
    if ( sub_12FF48(a1, (int)a2) )
      *(_BYTE *)(*(_DWORD *)(v6 + 24) + 1) |= 4u;
    obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, (void (*)(void *))&loc_11C838);
    v10 = *(unsigned __int16 **)(a1 + 12);
    if ( v10 )
    {
      v11 = *v10;
      if ( *v10 )
      {
        v12 = 0;
        v29 = 1;
        while ( 1 )
        {
          if ( v11 == 40 && (v13 = sub_12E694((int)v10, 28, (int)a2)) != 0 )
          {
            v14 = sub_12FAF0(v10, a2);
            if ( v14 )
              v15 = v14;
            else
              v15 = "<anonymous enumerator>";
            ((void (__fastcall *)(int, int, const char *, struct obstack *, int *, __int64 *, _BYTE *, _BYTE *, _DWORD, _DWORD))loc_12526C)(
              v13,
              v6 + 20,
              v15,
              &obstack,
              a2,
              &v32,
              v30,
              v31,
              v28,
              HIDWORD(v28));
            v16 = HIDWORD(v32);
            if ( v32 < 0 )
              goto LABEL_37;
            v10 = (unsigned __int16 *)*((_DWORD *)v10 + 4);
            v28 = v12 & v32;
            v17 = (v12 & v32) == 0;
            if ( (v12 & v32) != 0 )
              v16 = 0;
            else
              LODWORD(v12) = v12 | v32;
            if ( v17 )
              HIDWORD(v12) |= v16;
            else
              v29 = v16;
            if ( !v10 )
            {
LABEL_35:
              v18 = *(_DWORD *)(v6 + 24);
              *(_BYTE *)(v18 + 1) |= 1u;
              if ( v29 )
                goto LABEL_36;
              goto LABEL_37;
            }
          }
          else
          {
            v10 = (unsigned __int16 *)*((_DWORD *)v10 + 4);
            if ( !v10 )
              goto LABEL_35;
          }
          v11 = *v10;
          if ( !*v10 )
            goto LABEL_35;
        }
      }
    }
    v18 = *(_DWORD *)(v6 + 24);
    *(_BYTE *)(v18 + 1) |= 1u;
LABEL_36:
    *(_BYTE *)(v18 + 2) |= 0x40u;
LABEL_37:
    obstack_free(&obstack, 0);
    v19 = *(_DWORD *)(v6 + 24);
    v20 = *(_DWORD *)(v19 + 20);
    if ( v20 )
    {
      v21 = *(_BYTE *)(*(_DWORD *)(v20 + 24) + 1);
      if ( (v21 & 4) == 0 )
      {
        v27 = *(_DWORD *)(v6 + 20);
        if ( !v27 )
          v20 = *(_DWORD *)(v20 + 20);
        *(_BYTE *)(v19 + 1) = *(_BYTE *)(v19 + 1) & 0xFE | v21 & 1;
        if ( !v27 )
          *(_DWORD *)(v6 + 20) = v20;
      }
    }
    v22 = sub_12E694(a1, 109, (int)a2);
    v23 = v22;
    if ( v22 )
      v23 = *(_QWORD *)(v22 + 8) != 0;
    *(_BYTE *)(*(_DWORD *)(v6 + 24) + 2) = *(_BYTE *)(*(_DWORD *)(v6 + 24) + 2) & 0xDF | (32 * v23);
    return sub_134FA4(a1, v6, a2);
  }
  if ( *(_WORD *)(a1 + 24) != 105 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( *(_WORD *)(a1 + 16 * v5 + 24) == 105 )
      {
        v25 = 16 * v5 + 24;
        goto LABEL_43;
      }
    }
    goto LABEL_6;
  }
  v25 = 24;
LABEL_43:
  sub_13810C(a1, a1 + v25, a2);
  return sub_134FA4(a1, v26, a2);
}
