int __fastcall sub_F59B4(int a1, int a2, unsigned __int8 *a3, int a4, int a5)
{
  int v7; // r1
  int v8; // r0
  unsigned int v11; // r2
  unsigned __int8 *v12; // r9
  char *v13; // r8
  _DWORD *v14; // r0
  _BYTE *v15; // r3
  int v16; // r6
  char v17; // r7
  unsigned int v18; // r5
  unsigned __int8 *v19; // r5
  int v20; // r3
  _BYTE *v21; // r3
  int v22; // r7
  unsigned int v23; // r6
  char v24; // r6
  int v25; // t1
  int v26; // r5
  unsigned int v27; // r3
  int v28; // r4
  int v29; // r0
  int v30; // r3
  int v31; // r12
  int v32; // r4
  int v33; // r12
  _DWORD *v34; // r3
  _DWORD *v35; // r2
  int v36; // t1
  const char *v38; // r0
  int v39; // r3
  int v40; // [sp+0h] [bp-34h]
  _DWORD *v43; // [sp+14h] [bp-20h]
  void *ptr; // [sp+18h] [bp-1Ch] BYREF
  int v45; // [sp+1Ch] [bp-18h]
  _DWORD v46[4]; // [sp+20h] [bp-14h] BYREF

  v7 = *(_DWORD *)(a2 + 68);
  v8 = *(_DWORD *)(a2 + 72);
  if ( v7 == v8 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    v43 = sub_93028(((v8 - v7) & 0xFFFFFFFC) + 8);
    ptr = v46;
    v12 = &a3[a5 - a4];
    v45 = 0;
    LOBYTE(v46[0]) = 0;
    v13 = *(char **)(a2 + 100);
    if ( a3 < v12 )
    {
      do
      {
        while ( *a3 == 32 )
        {
          if ( v12 > a3 )
          {
            v19 = a3 + 1;
            do
            {
              v21 = ptr;
              a3 = v19;
              v22 = v45;
              if ( ptr != v46 )
                v11 = v46[0];
              v23 = v45 + 1;
              if ( ptr == v46 )
                v11 = 15;
              if ( v23 > v11 )
              {
                v40 = 1;
                sub_33B4F8(&ptr, v45, 0);
                v21 = ptr;
              }
              v11 = 32;
              v21[v22] = 32;
              v45 = v22 + 1;
              *((_BYTE *)ptr + v23) = 0;
              if ( v12 == v19 )
                break;
              v20 = *v19++;
            }
            while ( v20 == 32 );
          }
          v13 = (char *)sub_9360C(v13);
          if ( v12 <= a3 )
            goto LABEL_23;
        }
        v15 = ptr;
        v16 = v45;
        v17 = *v13;
        if ( ptr != v46 )
          v11 = v46[0];
        v18 = v45 + 1;
        if ( ptr == v46 )
          v11 = 15;
        if ( v18 > v11 )
        {
          v40 = 1;
          sub_33B4F8(&ptr, v45, 0);
          v15 = ptr;
        }
        v15[v16] = v17;
        ++a3;
        v45 = v16 + 1;
        ++v13;
        *((_BYTE *)ptr + v18) = 0;
      }
      while ( v12 > a3 );
LABEL_23:
      v14 = ptr;
    }
    else
    {
      v14 = v46;
    }
    v24 = *v13;
    if ( *v13 )
    {
      do
      {
        v26 = v45;
        if ( v14 == v46 )
          v27 = 15;
        else
          v27 = v46[0];
        if ( v45 + 1 > v27 )
        {
          v40 = 1;
          sub_33B4F8(&ptr, v45, 0);
          v14 = ptr;
        }
        *((_BYTE *)v14 + v26) = v24;
        v45 = v26 + 1;
        *((_BYTE *)ptr + v26 + 1) = 0;
        v25 = (unsigned __int8)*++v13;
        v24 = v25;
        v14 = ptr;
      }
      while ( v25 );
    }
    v28 = sub_327254(v14);
    if ( ptr != v46 )
      sub_339E64(ptr);
    v29 = *(unsigned __int8 *)(a2 + 104);
    *v43 = v28;
    if ( v29 )
    {
      LOWORD(ptr) = 0;
      LOBYTE(ptr) = *(_DWORD *)(a2 + 84);
      v38 = (const char *)sub_31E338(v28, v28, &ptr, 0, v40);
      v39 = *(unsigned __int8 *)(a2 + 96);
      *(_QWORD *)v43 = (unsigned int)v38;
      if ( !v39 )
        LOBYTE(v39) = v38[strlen(v38) - 1] == 32;
      *(_BYTE *)(a1 + 8) = v39;
      *(_DWORD *)a1 = v43;
      *(_DWORD *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      v30 = *(_DWORD *)(a2 + 68);
      v31 = *(_DWORD *)(a2 + 72) - v30;
      v32 = v31 >> 2;
      if ( v31 >> 2 )
      {
        v34 = (_DWORD *)(v30 - 4);
        v35 = v43;
        do
        {
          v36 = v34[1];
          *++v34 = 0;
          v35[1] = v36;
          ++v35;
        }
        while ( v35 != (_DWORD *)((char *)v43 + v31) );
        v33 = v31 + 4;
      }
      else
      {
        v33 = 4;
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)a1 = v43;
      *(_DWORD *)(a1 + 4) = v32;
      *(_DWORD *)((char *)v43 + v33) = 0;
      return a1;
    }
  }
}
