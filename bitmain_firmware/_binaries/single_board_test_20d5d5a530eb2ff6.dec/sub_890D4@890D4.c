int __fastcall sub_890D4(_DWORD *a1, int a2, int a3, int *a4)
{
  int result; // r0
  unsigned int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r0
  _BOOL4 v11; // r1
  _BOOL4 v12; // r0
  _BOOL4 v13; // r3
  int v14; // r3
  int v15; // r0
  _BOOL4 v16; // r1
  _BOOL4 v17; // r0
  _DWORD **v18; // r3
  int v19; // r1
  _DWORD *v20; // r2
  bool v21; // zf
  bool v22; // zf
  _BOOL4 v23; // r3
  _BOOL4 v24; // r3

  switch ( a2 )
  {
    case 16:
      a1[34] = a4;
      return 1;
    case 33:
      result = a1[316] | a3;
      a1[316] = result;
      return result;
    case 40:
      return a1[405];
    case 41:
      result = a1[405];
      a1[405] = a3;
      return result;
    case 50:
      return a1[319];
    case 51:
      if ( a3 < 0 )
        return 0;
      result = a1[319];
      a1[319] = a3;
      return result;
    case 52:
      if ( (unsigned int)(a3 - 512) > 0x3E00 )
        return 0;
      v6 = a1[322];
      a1[323] = a3;
      if ( a3 >= v6 )
        return 1;
      goto LABEL_12;
    case 76:
      result = a1[31];
      if ( result )
        return *(_DWORD *)(result + 824);
      return result;
    case 78:
      result = a1[316] & ~a3;
      a1[316] = result;
      return result;
    case 99:
      v7 = a1[257];
      result = *(_DWORD *)(v7 + 16) | a3;
      *(_DWORD *)(v7 + 16) = result;
      return result;
    case 100:
      v8 = a1[257];
      result = *(_DWORD *)(v8 + 16) & ~a3;
      *(_DWORD *)(v8 + 16) = result;
      return result;
    case 110:
      if ( !a4 )
        return 2;
      result = *(_DWORD *)(a1[31] + 584);
      if ( result )
      {
        *a4 = result;
        return *(_DWORD *)(a1[31] + 588);
      }
      return result;
    case 122:
      if ( !a1[285] || sub_95448(a1) || sub_95DA0(a1) )
        return -1;
      else
        return *(_DWORD *)(a1[285] + 508) & 1;
    case 123:
      v14 = a1[318];
      if ( a3 == 256 )
      {
        if ( v14 == 256 || v14 >> 8 == 254 )
          goto LABEL_68;
        v16 = 1;
      }
      else
      {
        v15 = a3 >> 8;
        v16 = a3 >> 8 == 254;
        if ( v14 == 256 || v14 >> 8 == 254 )
        {
          v22 = v15 == 254;
          if ( v15 != 254 )
            v22 = a3 == 0;
          if ( v22 )
            goto LABEL_68;
          return 0;
        }
      }
      if ( v14 )
        v17 = v16;
      else
        v17 = 0;
      if ( !v17 )
      {
        if ( v16 || !a3 )
          goto LABEL_68;
        if ( !v14 )
        {
          if ( a3 < 768 )
            return 0;
          goto LABEL_68;
        }
        v23 = v14 > 767;
        if ( a3 > 767 )
          v23 = 0;
        if ( !v23 )
        {
LABEL_68:
          v19 = a3;
          v18 = (_DWORD **)a1[308];
          v20 = a1 + 317;
          return sub_9CB40(**v18, v19, v20) != 0;
        }
      }
      return 0;
    case 124:
      v9 = a1[317];
      if ( v9 == 256 )
      {
        if ( a3 == 256 || a3 >> 8 == 254 )
          goto LABEL_63;
        v11 = 1;
        goto LABEL_22;
      }
      v10 = v9 >> 8;
      v11 = v9 >> 8 == 254;
      if ( a3 != 256 && a3 >> 8 != 254 )
      {
LABEL_22:
        if ( a3 )
          v12 = v11;
        else
          v12 = 0;
        if ( v12 )
          return 0;
        if ( !v11 && v9 )
        {
          if ( a3 )
          {
            v24 = v9 <= 767;
            if ( a3 <= 767 )
              v24 = 0;
            if ( v24 )
              return 0;
          }
          else if ( v9 < 768 )
          {
            return 0;
          }
        }
        goto LABEL_63;
      }
      v21 = v10 == 254;
      if ( v10 != 254 )
        v21 = v9 == 0;
      if ( !v21 )
        return 0;
LABEL_63:
      v18 = (_DWORD **)a1[308];
      v19 = a3;
      v20 = a1 + 318;
      return sub_9CB40(**v18, v19, v20) != 0;
    case 125:
      v13 = a3 == 0;
      if ( a1[323] < (unsigned int)a3 )
        v13 = 1;
      if ( v13 )
        return 0;
LABEL_12:
      a1[322] = a3;
      return 1;
    case 126:
      if ( (unsigned int)(a3 - 1) > 0x1F )
        return 0;
      a1[324] = a3;
      if ( a3 == 1 )
        return 1;
      a1[405] = 1;
      return 1;
    case 130:
      return a1[317];
    case 131:
      return a1[318];
    default:
      return (*(int (__fastcall **)(_DWORD *))(a1[1] + 68))(a1);
  }
}
