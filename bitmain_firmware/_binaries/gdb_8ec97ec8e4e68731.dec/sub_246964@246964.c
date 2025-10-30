int __fastcall sub_246964(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // r10
  _DWORD *v12; // r3
  int result; // r0
  int v15; // r6
  __int64 i; // r4
  ssize_t v17; // r0
  int v18; // r0
  int v19; // r0
  ssize_t v20; // r0
  int v21; // r0
  unsigned int v22; // r0
  unsigned int v23; // r0
  int v24; // r2
  _DWORD *v25; // r0
  _DWORD *v27; // r0
  _BOOL4 v28; // r3
  _DWORD *v29; // r0
  __int64 v30; // r0
  char *v31; // r2
  int v32; // r3
  __int16 buf; // [sp+12h] [bp-Ah] BYREF
  unsigned __int8 v35[8]; // [sp+14h] [bp-8h] BYREF

  v11 = a3;
  if ( a3 == -1 )
  {
    v12 = a6;
    if ( a6 )
    {
LABEL_4:
      *v12 = -1;
      return -1;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v15 = 0;
    lseek64(dword_46DCEC);
    for ( i = *(_QWORD *)&dword_48A5B0; ; i += 6LL + *(unsigned int *)v35 )
    {
      v17 = sub_2464F8(&buf, 2);
      v18 = sub_16F654(v17);
      v19 = ((int (__fastcall *)(int))loc_165BB8)(v18);
      buf = sub_15C190((unsigned __int8 *)&buf, 2, v19);
      if ( !buf )
        break;
      v20 = sub_2464F8(v35, 4);
      v21 = sub_16F654(v20);
      v22 = ((int (__fastcall *)(int))loc_165BB8)(v21);
      v23 = sub_15C250(v35, 4, v22);
      v24 = v23;
      *(_DWORD *)v35 = v23;
      if ( a2 )
      {
        if ( v15 > sub_24B59C(v23) )
        {
          switch ( a2 )
          {
            case 1:
              if ( a4 != sub_246778() )
                break;
              goto LABEL_18;
            case 2:
              v29 = sub_D1908(v11);
              if ( !v29 )
                break;
              v24 = *(_DWORD *)v35;
              if ( buf != v29[36] )
                break;
              v11 = v15;
              goto LABEL_19;
            case 3:
              v27 = sub_246778();
              v28 = a4 <= v27;
              if ( a5 < (unsigned int)v27 )
                v28 = 0;
              if ( !v28 )
                break;
              goto LABEL_18;
            case 4:
              v25 = sub_246778();
              if ( a4 <= v25 && a5 >= (unsigned int)v25 )
                break;
LABEL_18:
              v24 = *(_DWORD *)v35;
              v11 = v15;
              goto LABEL_19;
            default:
              v30 = sub_94700((int)"tracefile-tfile.c", 728, "unknown tfind type");
              return sub_246BB4(v30, SHIDWORD(v30), v31, v32, a5, (int)a6, a7, a8, a9, a10, a11);
          }
        }
      }
      else if ( v11 == v15 )
      {
LABEL_19:
        result = v11;
        if ( a6 )
          *a6 = buf;
        *(_QWORD *)&dword_48A5A0 = i + 6;
        dword_48A5A8 = v24;
        return result;
      }
      lseek64(dword_46DCEC);
      ++v15;
    }
    v12 = a6;
    if ( a6 )
      goto LABEL_4;
    return -1;
  }
}
