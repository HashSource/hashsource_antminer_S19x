int __fastcall sub_5F30C(int a1, const void *a2, size_t a3, _DWORD *a4)
{
  int v9; // [sp+18h] [bp-15Ch] BYREF
  int v10; // [sp+1Ch] [bp-158h]
  int v11; // [sp+20h] [bp-154h]
  int v12; // [sp+24h] [bp-150h]
  int v13; // [sp+28h] [bp-14Ch]
  int v14; // [sp+2Ch] [bp-148h]
  int v15; // [sp+30h] [bp-144h]
  int v16; // [sp+34h] [bp-140h]
  int v17; // [sp+38h] [bp-13Ch] BYREF
  int v18; // [sp+3Ch] [bp-138h]
  int v19; // [sp+40h] [bp-134h]
  int v20; // [sp+44h] [bp-130h]
  int v21; // [sp+48h] [bp-12Ch]
  int v22; // [sp+4Ch] [bp-128h]
  int v23; // [sp+50h] [bp-124h]
  int v24; // [sp+54h] [bp-120h]
  int v25; // [sp+58h] [bp-11Ch] BYREF
  int v26; // [sp+5Ch] [bp-118h] BYREF
  _DWORD v27[64]; // [sp+60h] [bp-114h] BYREF
  ssize_t v28; // [sp+160h] [bp-14h]
  ssize_t v29; // [sp+164h] [bp-10h]
  pthread_mutex_t *mutex; // [sp+16Ch] [bp-8h]

  if ( !dword_8DDBC )
    return -1;
  if ( !*(_DWORD *)(a1 + 128) )
    return -2;
  mutex = *(pthread_mutex_t **)(a1 + 128);
  if ( pthread_mutex_trylock(mutex) )
    return -3;
  v29 = send(mutex[1].__owner, a2, a3, 0);
  if ( v29 > 0 )
  {
    memset(v27, 0, sizeof(v27));
    v28 = recv(mutex[1].__owner, v27, 0x100u, 0);
    v26 = 0;
    v25 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( v28 > 0 )
      _isoc99_sscanf(v27, "%x%d%s%s", &v26, &v25, &v17, &v9);
    if ( a4 )
      *a4 = v25;
    pthread_mutex_unlock(mutex);
    return 0;
  }
  else
  {
    pthread_mutex_unlock(mutex);
    return -4;
  }
}
