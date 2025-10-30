// Decompiled: configfs.ko_2a0ff3b83c73242d_debug


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int configfs_setattr(long param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  _mcount();
  lVar6 = *(long *)(param_1 + 0x90);
  uVar1 = *param_2;
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    iVar4 = -0x16;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x50);
    if (lVar7 == 0) {
      lVar7 = kmem_cache_alloc_trace(_DAT_001082b8,0x24080c0,0x50);
      if (lVar7 == 0) {
        return -0xc;
      }
      *(undefined2 *)(lVar7 + 4) = *(undefined2 *)(lVar6 + 0x44);
      *(undefined4 *)(lVar7 + 8) = 0;
      *(undefined4 *)(lVar7 + 0xc) = 0;
      auVar9 = current_time(lVar8);
      *(undefined1 (*) [16])(lVar7 + 0x38) = auVar9;
      *(undefined1 (*) [16])(lVar7 + 0x28) = auVar9;
      *(undefined1 (*) [16])(lVar7 + 0x18) = auVar9;
      *(long *)(lVar6 + 0x50) = lVar7;
    }
    iVar4 = simple_setattr(param_1,param_2);
    if (iVar4 == 0) {
      if ((uVar1 >> 1 & 1) != 0) {
        *(uint *)(lVar7 + 8) = param_2[2];
      }
      if ((uVar1 >> 2 & 1) != 0) {
        *(uint *)(lVar7 + 0xc) = param_2[3];
      }
      if ((uVar1 >> 4 & 1) != 0) {
        auVar9 = timespec_trunc(*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8),
                                *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x568));
        *(undefined1 (*) [16])(lVar7 + 0x18) = auVar9;
      }
      if ((uVar1 >> 5 & 1) != 0) {
        auVar9 = timespec_trunc(*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc),
                                *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x568));
        *(undefined1 (*) [16])(lVar7 + 0x28) = auVar9;
      }
      if ((uVar1 >> 6 & 1) != 0) {
        auVar9 = timespec_trunc(*(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10),
                                *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x568));
        *(undefined1 (*) [16])(lVar7 + 0x38) = auVar9;
      }
      if ((uVar1 & 1) != 0) {
        uVar2 = (ushort)param_2[1];
        iVar4 = in_group_p(*(undefined4 *)(lVar8 + 8));
        uVar5 = uVar2;
        if (iVar4 == 0) {
          cVar3 = capable(4);
          uVar5 = uVar2 & 0xfbff;
          if (cVar3 != '\0') {
            uVar5 = uVar2;
          }
        }
        *(ushort *)(lVar6 + 0x44) = uVar5;
        *(ushort *)(lVar7 + 4) = uVar5;
        return 0;
      }
    }
  }
  return iVar4;
}




undefined2 * configfs_new_inode(undefined2 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  _mcount();
  puVar2 = (undefined2 *)new_inode(param_3);
  if (puVar2 != (undefined2 *)0x0) {
    uVar3 = get_next_ino();
    *(ulong *)(puVar2 + 0x1c) = uVar3 & 0xffffffff;
    *(undefined1 **)(*(long *)(puVar2 + 0x18) + 0x98) = &DAT_00104880;
    *(undefined **)(puVar2 + 0x10) = &DAT_00104980;
    lVar4 = *(long *)(param_2 + 0x50);
    if (lVar4 == 0) {
      *puVar2 = param_1;
      auVar5 = current_time(puVar2);
      *(undefined1 (*) [16])(puVar2 + 0x38) = auVar5;
      *(undefined1 (*) [16])(puVar2 + 0x30) = auVar5;
      *(undefined1 (*) [16])(puVar2 + 0x28) = auVar5;
    }
    else {
      *puVar2 = *(undefined2 *)(lVar4 + 4);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(lVar4 + 8);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar4 + 0xc);
      uVar1 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(puVar2 + 0x2c) = uVar1;
      uVar1 = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(puVar2 + 0x34) = uVar1;
      uVar1 = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
      *(undefined8 *)(puVar2 + 0x3c) = uVar1;
    }
  }
  return puVar2;
}




undefined8 configfs_create(long param_1,ushort param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  _mcount();
  if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = 0xffffffef;
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar2 = configfs_new_inode(param_2,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x80));
      if (lVar2 == 0) {
        uVar1 = 0xfffffff4;
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x30);
        auVar4 = current_time(lVar3);
        *(undefined1 (*) [16])(lVar3 + 0x70) = auVar4;
        *(undefined1 (*) [16])(lVar3 + 0x60) = auVar4;
        (*param_3)(lVar2);
        if ((param_2 & 0xf000) == 0x4000 || (param_2 & 0xf000) == 0xa000) {
          d_instantiate(param_1,lVar2);
          lockref_get(param_1 + 0x58);
          return 0;
        }
        d_add();
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}




undefined8 configfs_get_name(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  _mcount();
  if ((param_1 != 0) && (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
    if ((*(uint *)(param_1 + 0x40) & 0x22) == 0) {
      if ((*(uint *)(param_1 + 0x40) & 0xc) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = **(undefined8 **)(param_1 + 0x38);
      }
      return uVar2;
    }
    return *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1003f4);
  (*pcVar1)();
}




void configfs_drop_dentry(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _mcount();
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x58;
    _raw_spin_lock(lVar1);
    if ((*(long *)(lVar2 + 0x30) == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
      _raw_spin_unlock(lVar1);
      return;
    }
    *(int *)(lVar2 + 0x70) = *(int *)(lVar2 + 0x70) + 1;
    __d_drop(lVar2);
    _raw_spin_unlock(lVar1);
    simple_unlink(*(undefined8 *)(param_2 + 0x30),lVar2);
  }
  return;
}




void configfs_hash_and_remove(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  char *__s1;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  _mcount();
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar7 = *(long *)(param_1 + 0x90);
    down_write(*(long *)(param_1 + 0x30) + 0xb0);
    plVar8 = (long *)(lVar7 + 0x18);
    plVar5 = (long *)*plVar8;
    if (plVar5 != plVar8) {
LAB_001004e4:
      plVar6 = plVar5 + -1;
      if (plVar5[6] == 0) goto LAB_00100500;
      __s1 = (char *)configfs_get_name(plVar6);
      iVar4 = strcmp(__s1,param_2);
      if (iVar4 != 0) goto LAB_00100500;
      _raw_spin_lock(&configfs_dirent_lock);
      __list_del_entry(plVar5);
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      _raw_spin_unlock(&configfs_dirent_lock);
      configfs_drop_dentry(plVar6,param_1);
      if ((int)*plVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x800,0x1005ac);
        (*pcVar3)();
      }
      Hint_Prefetch(plVar6,2,0,1);
      do {
        iVar4 = (int)*plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if ((iVar4 == 0) && ((*(uint *)(plVar5 + 7) & 1) == 0)) {
        kfree(plVar5[9]);
        kmem_cache_free(configfs_dir_cachep,plVar6);
      }
    }
LAB_00100510:
    up_write(*(long *)(param_1 + 0x30) + 0xb0);
  }
  return;
LAB_00100500:
  plVar5 = (long *)*plVar5;
  if (plVar5 == plVar8) goto LAB_00100510;
  goto LAB_001004e4;
}




undefined8 FUN_001005c0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _mcount();
  lVar1 = *(long *)(param_2 + 0x100);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x90) + 0x38) + 8);
  if (*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x18) + 0x90) + 0x38) != 0) {
    config_item_put();
  }
  module_put(uVar2);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      free_pages(*(long *)(lVar1 + 0x10),0);
    }
    mutex_destroy(lVar1 + 0x20);
    kfree(lVar1);
  }
  return 0;
}




ulong FUN_0010063c(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _mcount();
  lVar6 = *(long *)(param_2 + 0x100);
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x90) + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x18) + 0x90) + 0x38);
  *(undefined1 *)(lVar6 + 100) = 0;
  if (*(char *)(lVar6 + 0x65) == '\0') {
    uVar4 = FUN_001005c0(param_1,param_2);
    return uVar4;
  }
  *(undefined1 *)(lVar6 + 0x65) = 0;
  lVar5 = (**(code **)(lVar5 + 0x40))(uVar3,*(undefined8 *)(lVar6 + 0x68),(long)*(int *)(lVar6 + 0x70));
  vfree(*(undefined8 *)(lVar6 + 0x68));
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  *(undefined4 *)(lVar6 + 0x60) = 1;
  uVar2 = FUN_001005c0(param_1,param_2);
  uVar1 = (uint)lVar5;
  if (-1 < lVar5) {
    uVar1 = uVar2;
  }
  return (ulong)uVar1;
}




ulong FUN_00100640(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _mcount();
  lVar6 = *(long *)(param_2 + 0x100);
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x90) + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x18) + 0x90) + 0x38);
  *(undefined1 *)(lVar6 + 100) = 0;
  if (*(char *)(lVar6 + 0x65) == '\0') {
    uVar4 = FUN_001005c0(param_1,param_2);
    return uVar4;
  }
  *(undefined1 *)(lVar6 + 0x65) = 0;
  lVar5 = (**(code **)(lVar5 + 0x40))(uVar3,*(undefined8 *)(lVar6 + 0x68),(long)*(int *)(lVar6 + 0x70));
  vfree(*(undefined8 *)(lVar6 + 0x68));
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  *(undefined4 *)(lVar6 + 0x60) = 1;
  uVar2 = FUN_001005c0(param_1,param_2);
  uVar1 = (uint)lVar5;
  if (-1 < lVar5) {
    uVar1 = uVar2;
  }
  return (ulong)uVar1;
}




ulong FUN_001006fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _mcount();
  lVar3 = *(long *)(param_1 + 0x100);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x90) + 0x38);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x90) + 0x38);
  mutex_lock(lVar3 + 0x20);
  if (*(char *)(lVar3 + 0x65) != '\0') {
    uVar1 = 0xffffffffffffffe6;
    goto LAB_001007f0;
  }
  *(undefined1 *)(lVar3 + 100) = 1;
  if (*(int *)(lVar3 + 0x60) != 0) {
    uVar1 = (**(code **)(lVar4 + 0x38))(uVar5,0,0);
    if ((long)uVar1 < 1) goto LAB_001007f0;
    if ((*(ulong *)(lVar4 + 0x30) != 0) && (*(ulong *)(lVar4 + 0x30) < uVar1)) {
      uVar1 = 0xffffffffffffffe5;
      goto LAB_001007f0;
    }
    lVar2 = vmalloc(uVar1);
    *(long *)(lVar3 + 0x68) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffffffffffff4;
      goto LAB_001007f0;
    }
    *(int *)(lVar3 + 0x70) = (int)uVar1;
    uVar1 = (**(code **)(lVar4 + 0x38))(uVar5,lVar2,uVar1);
    if ((long)uVar1 < 0) {
      vfree(*(undefined8 *)(lVar3 + 0x68));
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined4 *)(lVar3 + 0x70) = 0;
      goto LAB_001007f0;
    }
    *(undefined4 *)(lVar3 + 0x60) = 0;
  }
  uVar1 = simple_read_from_buffer(param_2,param_3,param_4,*(undefined8 *)(lVar3 + 0x68),(long)*(int *)(lVar3 + 0x70));
LAB_001007f0:
  mutex_unlock(lVar3 + 0x20);
  return uVar1;
}




ulong FUN_00100700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _mcount();
  lVar3 = *(long *)(param_1 + 0x100);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x90) + 0x38);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x90) + 0x38);
  mutex_lock(lVar3 + 0x20);
  if (*(char *)(lVar3 + 0x65) != '\0') {
    uVar1 = 0xffffffffffffffe6;
    goto LAB_001007f0;
  }
  *(undefined1 *)(lVar3 + 100) = 1;
  if (*(int *)(lVar3 + 0x60) != 0) {
    uVar1 = (**(code **)(lVar4 + 0x38))(uVar5,0,0);
    if ((long)uVar1 < 1) goto LAB_001007f0;
    if ((*(ulong *)(lVar4 + 0x30) != 0) && (*(ulong *)(lVar4 + 0x30) < uVar1)) {
      uVar1 = 0xffffffffffffffe5;
      goto LAB_001007f0;
    }
    lVar2 = vmalloc(uVar1);
    *(long *)(lVar3 + 0x68) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffffffffffff4;
      goto LAB_001007f0;
    }
    *(int *)(lVar3 + 0x70) = (int)uVar1;
    uVar1 = (**(code **)(lVar4 + 0x38))(uVar5,lVar2,uVar1);
    if ((long)uVar1 < 0) {
      vfree(*(undefined8 *)(lVar3 + 0x68));
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined4 *)(lVar3 + 0x70) = 0;
      goto LAB_001007f0;
    }
    *(undefined4 *)(lVar3 + 0x60) = 0;
  }
  uVar1 = simple_read_from_buffer(param_2,param_3,param_4,*(undefined8 *)(lVar3 + 0x68),(long)*(int *)(lVar3 + 0x70));
LAB_001007f0:
  mutex_unlock(lVar3 + 0x20);
  return uVar1;
}




undefined8 FUN_00100848(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _mcount();
  lVar5 = *(long *)(param_1 + 0x100);
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x90) + 0x38);
  mutex_lock(lVar5 + 0x20);
  if (*(char *)(lVar5 + 100) != '\0') {
    uVar3 = 0xffffffffffffffe6;
    goto LAB_00100930;
  }
  *(undefined1 *)(lVar5 + 0x65) = 1;
  uVar4 = (ulong)*(int *)(lVar5 + 0x70);
  uVar2 = param_3 + *param_4;
  if (uVar4 < uVar2) {
    uVar4 = *(ulong *)(lVar6 + 0x30);
    if ((uVar4 != 0 && uVar4 <= uVar2) && (uVar4 == 0 || uVar2 != uVar4)) {
      uVar3 = 0xffffffffffffffe5;
      goto LAB_00100930;
    }
    lVar6 = vmalloc();
    if (lVar6 == 0) {
      uVar3 = 0xfffffffffffffff4;
      goto LAB_00100930;
    }
    if (*(long *)(lVar5 + 0x68) != 0) {
      memcpy(lVar6,*(long *)(lVar5 + 0x68),(long)*(int *)(lVar5 + 0x70));
      vfree(*(undefined8 *)(lVar5 + 0x68));
    }
    memset((void *)(lVar6 + *(int *)(lVar5 + 0x70)),0,(param_3 + *param_4) - (long)*(int *)(lVar5 + 0x70));
    *(long *)(lVar5 + 0x68) = lVar6;
    iVar1 = (int)*param_4 + (int)param_3;
    *(int *)(lVar5 + 0x70) = iVar1;
    uVar4 = (ulong)iVar1;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x68);
  }
  uVar3 = simple_write_to_buffer(lVar6,uVar4,param_4,param_2,param_3);
LAB_00100930:
  mutex_unlock(lVar5 + 0x20);
  return uVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00100970(ushort *param_1,long param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _mcount();
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + 0x18);
  lVar4 = lVar3 + 0x58;
  _raw_spin_lock(lVar4);
  if (*(long *)(lVar3 + 0x10) == 0) {
    _raw_spin_unlock(lVar4);
    return 0xffffffea;
  }
  if ((*(uint *)(*(long *)(lVar3 + 0x90) + 0x40) >> 5 & 1) == 0) {
    lVar3 = config_item_get();
  }
  else {
    lVar3 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x90) + 0x38) + 0x10));
  }
  _raw_spin_unlock(lVar4);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x90) + 0x38);
  if (lVar3 == 0 || lVar4 == 0) {
    uVar5 = 0xffffffea;
  }
  else {
    lVar2 = lVar4;
    if ((param_3 & 8) == 0) {
      lVar2 = 0;
    }
    cVar1 = try_module_get(*(undefined8 *)(lVar4 + 8));
    if (cVar1 == '\0') {
      uVar5 = 0xffffffed;
    }
    else {
      if (((*(long *)(lVar3 + 0x40) == 0) ||
          (((*(uint *)(param_2 + 0x54) >> 1 & 1) != 0 &&
           ((((*param_1 & 0x92) == 0 || (((param_3 >> 2 & 1) != 0 && (*(long *)(lVar4 + 0x20) == 0)))) ||
            (((param_3 & 8) != 0 && (*(long *)(lVar2 + 0x40) == 0)))))))) ||
         (((*(uint *)(param_2 + 0x54) & 1) != 0 &&
          ((((*param_1 & 0x124) == 0 || (((param_3 >> 2 & 1) != 0 && (*(long *)(lVar4 + 0x18) == 0)))) ||
           (((param_3 & 8) != 0 && (*(long *)(lVar2 + 0x38) == 0)))))))) {
        uVar5 = 0xfffffff3;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x40) + 8);
        lVar2 = kmem_cache_alloc_trace(_DAT_001082b8,0x24080c0,0x78);
        if (lVar2 != 0) {
          __mutex_init(lVar2 + 0x20,"&buffer->mutex",&DAT_00107280);
          *(undefined1 *)(lVar2 + 100) = 0;
          *(undefined1 *)(lVar2 + 0x65) = 0;
          *(long *)(param_2 + 0x100) = lVar2;
          *(undefined8 *)(lVar2 + 0x18) = uVar5;
          *(undefined4 *)(lVar2 + 0x60) = 1;
          return 0;
        }
        uVar5 = 0xfffffff4;
      }
      module_put(*(undefined8 *)(lVar4 + 8));
    }
  }
  if (lVar3 == 0) {
    return uVar5;
  }
  config_item_put(lVar3);
  return uVar5;
}




void FUN_00100b80(undefined8 param_1,undefined8 param_2)

{
  _mcount();
  FUN_00100970(param_1,param_2,4);
  return;
}




void FUN_00100bb8(undefined8 param_1,undefined8 param_2)

{
  _mcount();
  FUN_00100970(param_1,param_2,8);
  return;
}




long FUN_00100bf0(long param_1,ulong param_2,size_t param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *__s;
  
  _mcount();
  lVar2 = *(long *)(param_1 + 0x100);
  mutex_lock(lVar2 + 0x20);
  __s = *(void **)(lVar2 + 0x10);
  if (__s == (void *)0x0) {
    __s = (void *)__get_free_pages(0x24000c0,0);
    *(void **)(lVar2 + 0x10) = __s;
    if (__s == (void *)0x0) {
      lVar3 = -0xc;
      goto LAB_00100cd0;
    }
  }
  lVar3 = sp_el0;
  if (param_3 < 0x1000) {
    uVar4 = param_3;
    if (!CARRY8(param_2,param_3) && param_2 + param_3 <= *(ulong *)(lVar3 + 8)) goto LAB_00100c60;
  }
  else {
    uVar4 = 0xfff;
    if (0xfffffffffffff000 < param_2 || *(ulong *)(lVar3 + 8) < param_2 + 0xfff) {
      memset(__s,0,0xfff);
      *(undefined4 *)(lVar2 + 0x60) = 1;
      lVar3 = -0xe;
      *(undefined1 *)(*(long *)(lVar2 + 0x10) + 0xfff) = 0;
      goto LAB_00100cd0;
    }
LAB_00100c60:
    param_3 = __arch_copy_from_user(__s,param_2,uVar4);
  }
  if (param_3 == 0) {
    *(undefined4 *)(lVar2 + 0x60) = 1;
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + uVar4) = 0;
  }
  else {
    memset((void *)((long)__s + (uVar4 - param_3)),0,param_3);
    *(undefined4 *)(lVar2 + 0x60) = 1;
    *(undefined1 *)(*(long *)(lVar2 + 0x10) + uVar4) = 0;
    if ((int)param_3 != 0) {
      lVar3 = -0xe;
      goto LAB_00100cd0;
    }
  }
  lVar3 = 0;
  if ((int)uVar4 != 0) {
    iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x90) + 0x38) + 0x20))
                      (*(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x90) + 0x38),
                       *(undefined8 *)(lVar2 + 0x10),(long)(int)uVar4);
    lVar3 = (long)iVar1;
    if (0 < lVar3) {
      *param_4 = *param_4 + lVar3;
    }
  }
LAB_00100cd0:
  mutex_unlock(lVar2 + 0x20);
  return lVar3;
}




long FUN_00100d8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  _mcount();
  plVar3 = *(long **)(param_1 + 0x100);
  mutex_lock(plVar3 + 4);
  if ((int)plVar3[0xc] != 0) {
    lVar2 = plVar3[2];
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x90) + 0x38);
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x90) + 0x38);
    if (lVar2 == 0) {
      lVar2 = get_zeroed_page(0x24000c0);
      plVar3[2] = lVar2;
      if (lVar2 == 0) {
        lVar2 = -0xc;
        goto LAB_00100e00;
      }
    }
    lVar2 = (**(code **)(lVar5 + 0x18))(uVar4,lVar2);
    if (0x1000 < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x800,0x100ea4);
      (*pcVar1)();
    }
    if (lVar2 < 0) {
      lVar2 = (long)(int)lVar2;
      if (lVar2 != 0) goto LAB_00100e00;
    }
    else {
      *plVar3 = lVar2;
      *(undefined4 *)(plVar3 + 0xc) = 0;
    }
  }
  if ((DAT_00106e32 >> 2 & 1) != 0) {
    __dynamic_pr_debug(&PTR_s_configfs_00106e10,"configfs: %s: count = %zd, ppos = %lld, buf = %s\n",
                       "configfs_read_file",param_3,*param_4,plVar3[2]);
  }
  lVar2 = simple_read_from_buffer(param_2,param_3,param_4,plVar3[2],*plVar3);
LAB_00100e00:
  mutex_unlock(plVar3 + 4);
  return lVar2;
}




undefined4 configfs_create_file(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _mcount();
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 0x90);
  down_write(*(long *)(lVar3 + 0x30) + 0xb0);
  uVar2 = configfs_make_dirent(uVar4,0,param_2,uVar1 & 0xfff | 0x8000,4);
  up_write(*(long *)(lVar3 + 0x30) + 0xb0);
  return uVar2;
}




undefined4 FUN_00100f5c(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _mcount();
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 0x90);
  down_write(*(long *)(lVar3 + 0x30) + 0xb0);
  uVar2 = configfs_make_dirent(uVar4,0,param_2,uVar1 & 0xfff | 0x8000,8);
  up_write(*(long *)(lVar3 + 0x30) + 0xb0);
  return uVar2;
}




undefined4 configfs_create_bin_file(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _mcount();
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 0x90);
  down_write(*(long *)(lVar3 + 0x30) + 0xb0);
  uVar2 = configfs_make_dirent(uVar4,0,param_2,uVar1 & 0xfff | 0x8000,8);
  up_write(*(long *)(lVar3 + 0x30) + 0xb0);
  return uVar2;
}




void FUN_00100fe0(long param_1)

{
  _mcount();
  *(undefined1 **)(param_1 + 0x178) = configfs_file_operations;
  *(undefined8 *)(param_1 + 0x48) = 0x1000;
  return;
}




void FUN_00101020(long param_1)

{
  _mcount();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 **)(param_1 + 0x178) = configfs_bin_file_operations;
  return;
}




void FUN_00101058(long param_1)

{
  _mcount();
  *(undefined1 **)(param_1 + 0x20) = configfs_symlink_inode_operations;
  return;
}




void FUN_00101090(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  _mcount();
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffbff;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined8 *)*puVar2;
  do {
    if (puVar2 == puVar1) {
      return;
    }
    while (puVar1 = puVar1 + -1, (*(uint *)(puVar1 + 8) >> 10 & 1) == 0) {
      puVar1 = (undefined8 *)puVar1[1];
      if (puVar2 == puVar1) {
        return;
      }
    }
    FUN_00101090(puVar1);
    puVar1 = (undefined8 *)puVar1[1];
  } while( true );
}




void FUN_0010110c(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  
  _mcount();
  piVar5 = *(int **)(param_1 + 0x90);
  if (piVar5 != (int *)0x0) {
    _raw_spin_lock(&configfs_dirent_lock);
    if (*piVar5 < 3) {
      piVar5[0x12] = 0;
      piVar5[0x13] = 0;
    }
    _raw_spin_unlock(&configfs_dirent_lock);
    if (*piVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x800,0x1011dc);
      (*pcVar4)();
    }
    Hint_Prefetch(piVar5,2,0,1);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar1 + -1 == 0) && ((piVar5[0x10] & 1U) == 0)) {
      kfree(*(undefined8 *)(piVar5 + 0x14));
      kmem_cache_free(configfs_dir_cachep,piVar5);
      iput(param_2);
      return;
    }
  }
  iput(param_2);
  return;
}




void FUN_00101110(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  
  _mcount();
  piVar5 = *(int **)(param_1 + 0x90);
  if (piVar5 != (int *)0x0) {
    _raw_spin_lock(&configfs_dirent_lock);
    if (*piVar5 < 3) {
      piVar5[0x12] = 0;
      piVar5[0x13] = 0;
    }
    _raw_spin_unlock(&configfs_dirent_lock);
    if (*piVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x800,0x1011dc);
      (*pcVar4)();
    }
    Hint_Prefetch(piVar5,2,0,1);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar1 + -1 == 0) && ((piVar5[0x10] & 1U) == 0)) {
      kfree(*(undefined8 *)(piVar5 + 0x14));
      kmem_cache_free(configfs_dir_cachep,piVar5);
      iput(param_2);
      return;
    }
  }
  iput(param_2);
  return;
}




undefined4 * FUN_001011f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _mcount();
  puVar1 = (undefined4 *)kmem_cache_alloc(configfs_dir_cachep,0x24080c0);
  puVar2 = (undefined4 *)0xfffffffffffffff4;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined4 **)(puVar1 + 8) = puVar1 + 6;
    *(undefined4 **)(puVar1 + 10) = puVar1 + 10;
    *(undefined4 **)(puVar1 + 0xc) = puVar1 + 10;
    *(undefined8 *)(puVar1 + 0xe) = param_2;
    puVar1[0x10] = param_3;
    *(undefined4 **)(puVar1 + 6) = puVar1 + 6;
    _raw_spin_lock(&configfs_dirent_lock);
    if ((*(uint *)(param_1 + 0x40) >> 8 & 1) != 0) {
      _raw_spin_unlock(&configfs_dirent_lock);
      kmem_cache_free(configfs_dir_cachep,puVar1);
      return (undefined4 *)0xfffffffffffffffe;
    }
    __list_add(puVar1 + 2,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18));
    _raw_spin_unlock(&configfs_dirent_lock);
    puVar2 = puVar1;
  }
  return puVar2;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001012e0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  _mcount();
  if (param_3 != 0) {
    if (param_3 != 1) {
      return -0x16;
    }
    param_2 = param_2 + *(long *)(param_1 + 0x98);
  }
  if (param_2 < 0) {
    return -0x16;
  }
  if (param_2 != *(long *)(param_1 + 0x98)) {
    *(long *)(param_1 + 0x98) = param_2;
    if (1 < param_2) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x90);
      lVar6 = param_2 + -2;
      lVar2 = *(long *)(param_1 + 0x100) + 8;
      _raw_spin_lock(&configfs_dirent_lock);
      list_del(lVar2);
      plVar5 = *(long **)(lVar7 + 0x18);
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar7 + 0x18);
        plVar4 = plVar5;
        do {
          plVar5 = plVar3;
          if (plVar4 == plVar3) break;
          plVar1 = plVar4 + 6;
          plVar5 = (long *)*plVar4;
          plVar4 = plVar5;
        } while ((*plVar1 == 0) || (lVar6 = lVar6 + -1, lVar6 != 0));
      }
      __list_add(lVar2,plVar5[1]);
      _raw_spin_unlock(&configfs_dirent_lock);
    }
  }
  return param_2;
}




void configfs_remove_default_groups(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  _mcount();
  plVar3 = *(long **)(param_1 + 0x68);
  plVar2 = (long *)*plVar3;
  while (plVar1 = plVar2, plVar3 != (long *)(param_1 + 0x68)) {
    list_del(plVar3);
    config_item_put(plVar3 + -0xf);
    plVar2 = (long *)*plVar1;
    plVar3 = plVar1;
  }
  return;
}




void FUN_00101458(long param_1)

{
  long lVar1;
  long lVar2;
  
  _mcount();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x20;
    __list_del_entry(lVar1);
    *(long *)(param_1 + 0x20) = lVar1;
    *(long *)(param_1 + 0x28) = lVar1;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    config_item_put(param_1);
    config_item_put(lVar2);
  }
  return;
}




void FUN_001014b4(long param_1)

{
  long *plVar1;
  
  _mcount();
  for (plVar1 = *(long **)(param_1 + 0x68); (long *)(param_1 + 0x68) != plVar1; plVar1 = (long *)*plVar1) {
    FUN_001014b8(plVar1 + -0xf);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_00101458(param_1);
  return;
}




void FUN_001014b8(long param_1)

{
  long *plVar1;
  
  _mcount();
  for (plVar1 = *(long **)(param_1 + 0x68); (long *)(param_1 + 0x68) != plVar1; plVar1 = (long *)*plVar1) {
    FUN_001014b8(plVar1 + -0xf);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_00101458(param_1);
  return;
}




undefined8 FUN_0010151c(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  _mcount();
  if ((param_1 != 0) && (lVar4 = *(long *)(param_1 + 0x90), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x38) != param_2) {
      plVar3 = *(long **)(lVar4 + 0x18);
      while( true ) {
        if ((long *)(lVar4 + 0x18) == plVar3) {
          return 0xfffffffe;
        }
        if (((*(uint *)(plVar3 + 7) & 0x502) == 2) && (iVar2 = FUN_00101520(plVar3[8],param_2), iVar2 == 0)) break;
        plVar3 = (long *)*plVar3;
      }
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1015d4);
  (*pcVar1)();
}




undefined8 FUN_00101520(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  _mcount();
  if ((param_1 != 0) && (lVar4 = *(long *)(param_1 + 0x90), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x38) != param_2) {
      plVar3 = *(long **)(lVar4 + 0x18);
      while( true ) {
        if ((long *)(lVar4 + 0x18) == plVar3) {
          return 0xfffffffe;
        }
        if (((*(uint *)(plVar3 + 7) & 0x502) == 2) && (iVar2 = FUN_00101520(plVar3[8],param_2), iVar2 == 0)) break;
        plVar3 = (long *)*plVar3;
      }
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1015d4);
  (*pcVar1)();
}




int FUN_001015d4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _mcount();
  _raw_spin_lock(&configfs_dirent_lock);
  iVar1 = FUN_00101520(param_1,param_2);
  if (iVar1 == 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x48) + 0x90);
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  }
  _raw_spin_unlock(&configfs_dirent_lock);
  return iVar1;
}




int FUN_001015d8(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _mcount();
  _raw_spin_lock(&configfs_dirent_lock);
  iVar1 = FUN_00101520(param_1,param_2);
  if (iVar1 == 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x48) + 0x90);
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  }
  _raw_spin_unlock(&configfs_dirent_lock);
  return iVar1;
}




undefined8 FUN_00101650(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _mcount();
  lVar3 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x100);
  lVar1 = lVar2 + 8;
  down_write(*(long *)(lVar3 + 0x30) + 0xb0);
  _raw_spin_lock(&configfs_dirent_lock);
  __list_del_entry(lVar1);
  *(long *)(lVar2 + 8) = lVar1;
  *(long *)(lVar2 + 0x10) = lVar1;
  _raw_spin_unlock(&configfs_dirent_lock);
  up_write(*(long *)(lVar3 + 0x30) + 0xb0);
  if ((*(uint *)(lVar2 + 0x40) & 1) == 0) {
    kfree(*(undefined8 *)(lVar2 + 0x50));
    kmem_cache_free(configfs_dir_cachep,lVar2);
  }
  return 0;
}




ulong configfs_depend_item(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  _mcount();
  uVar1 = configfs_pin_fs();
  if (0xfffffffffffff000 < uVar1) {
    return uVar1 & 0xffffffff;
  }
  down_write(*(long *)(uVar1 + 0x30) + 0xb0);
  plVar3 = (long *)(*(long *)(uVar1 + 0x90) + 0x18);
  plVar2 = (long *)*plVar3;
  do {
    if (plVar3 == plVar2) {
LAB_0010176c:
      uVar4 = 0xfffffffe;
LAB_00101770:
      up_write(*(long *)(uVar1 + 0x30) + 0xb0);
      configfs_release_fs();
      return uVar4;
    }
    if (((*(uint *)(plVar2 + 7) >> 1 & 1) != 0) && (param_1 == plVar2[6])) {
      if (plVar2 != (long *)0x8) {
        uVar4 = FUN_001015d8(plVar2[8],param_2);
        uVar4 = uVar4 & 0xffffffff;
        goto LAB_00101770;
      }
      goto LAB_0010176c;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}




undefined4 FUN_001017c8(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _mcount();
  lVar4 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x90);
  down_write(*(long *)(lVar4 + 0x30) + 0xb0);
  _raw_spin_lock(&configfs_dirent_lock);
  uVar1 = *(uint *)(lVar5 + 0x40);
  _raw_spin_unlock(&configfs_dirent_lock);
  if ((uVar1 & 0x400) == 0) {
    uVar3 = FUN_001011f0(lVar5,0,0);
    *(ulong *)(param_2 + 0x100) = uVar3;
    uVar2 = 0;
    if (0xfffffffffffff000 < uVar3) {
      uVar2 = (undefined4)uVar3;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  up_write(*(long *)(lVar4 + 0x30) + 0xb0);
  return uVar2;
}




undefined4 configfs_depend_item_unlocked(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _mcount();
  iVar1 = configfs_is_root(param_2);
  if (iVar1 == 0) {
    lVar6 = *(long *)(param_2 + 0x38);
    iVar1 = configfs_is_root(lVar6);
    if (iVar1 == 0) {
      lVar7 = *(long *)(lVar6 + 0x60);
      while (iVar1 = configfs_is_root(lVar6), iVar1 == 0) {
        lVar6 = *(long *)(lVar6 + 0x38);
      }
      if (lVar7 == param_1) goto LAB_00101948;
    }
    else {
      lVar7 = param_2;
      if (param_2 == param_1) {
LAB_00101948:
        uVar2 = FUN_001015d8(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x48) + 0x90) + 0x48),param_2);
        return uVar2;
      }
    }
    down_write(*(long *)(*(long *)(lVar6 + 0x48) + 0x30) + 0xb0);
    lVar5 = *(long *)(lVar6 + 0x48);
    plVar4 = (long *)(*(long *)(lVar5 + 0x90) + 0x18);
    for (plVar3 = (long *)*plVar4; plVar4 != plVar3; plVar3 = (long *)*plVar3) {
      if (((*(uint *)(plVar3 + 7) >> 1 & 1) != 0) && (lVar7 == plVar3[6])) {
        if (plVar3 != (long *)0x8) {
          uVar2 = FUN_001015d8(plVar3[8],param_2);
          lVar5 = *(long *)(lVar6 + 0x48);
          goto LAB_00101908;
        }
        break;
      }
    }
    uVar2 = 0xfffffffe;
LAB_00101908:
    up_write(*(long *)(lVar5 + 0x30) + 0xb0);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}




void FUN_001019a0(long param_1,long param_2)

{
  long lVar1;
  
  _mcount();
  *(long *)(param_2 + 0x30) = param_1;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = config_item_get(param_1);
  }
  *(long *)(param_2 + 0x38) = lVar1;
  __list_add(param_2 + 0x20,*(undefined8 *)(lVar1 + 0x58),lVar1 + 0x50);
  config_item_get(param_2);
  return;
}




void FUN_00101a00(long param_1)

{
  _mcount();
  *(undefined ***)(param_1 + 0x20) = &configfs_dir_inode_operations;
  *(undefined1 **)(param_1 + 0x178) = configfs_dir_operations;
  inc_nlink(param_1);
  return;
}




long FUN_00101a48(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  char *__s1;
  code *pcVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  
  _mcount();
  lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0x90);
  _raw_spin_lock(&configfs_dirent_lock);
  uVar1 = *(uint *)(lVar10 + 0x40);
  _raw_spin_unlock(&configfs_dirent_lock);
  lVar6 = -2;
  if ((uVar1 & 0x400) == 0) {
    plVar11 = (long *)(lVar10 + 0x18);
    for (plVar7 = (long *)*plVar11; plVar11 != plVar7; plVar7 = (long *)*plVar7) {
      piVar9 = (int *)(plVar7 + -1);
      if ((*(uint *)(plVar7 + 7) & 0xc) != 0) {
        __s1 = (char *)configfs_get_name(piVar9);
        iVar5 = strcmp(__s1,*(char **)(param_2 + 0x28));
        if (iVar5 == 0) {
          lVar6 = plVar7[6];
          _raw_spin_lock(&configfs_dirent_lock);
          if (piVar9 != (int *)0x0) {
            if (*piVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0x800,0x101be0);
              (*pcVar8)();
            }
            Hint_Prefetch(piVar9,2,0,1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar4) {
                *piVar9 = *piVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *(int **)(param_2 + 0x90) = piVar9;
          plVar7[8] = param_2;
          _raw_spin_unlock(&configfs_dirent_lock);
          if ((*(uint *)(plVar7 + 7) >> 3 & 1) == 0) {
            pcVar8 = FUN_00100fe0;
          }
          else {
            pcVar8 = FUN_00101020;
          }
          iVar5 = configfs_create(param_2,*(ushort *)(lVar6 + 0x10) & 0xfff | 0x8000,pcVar8);
          if (iVar5 == 0) {
            return 0;
          }
          if (*piVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0x800,0x101be8);
            (*pcVar8)();
          }
          Hint_Prefetch(piVar9,2,0,1);
          do {
            iVar2 = *piVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          DataMemoryBarrier(2,3);
          if ((iVar2 + -1 == 0) && ((*(uint *)(plVar7 + 7) & 1) == 0)) {
            kfree(plVar7[9]);
            kmem_cache_free(configfs_dir_cachep,piVar9);
          }
          return (long)iVar5;
        }
      }
    }
    lVar6 = -0x24;
    if (*(uint *)(param_2 + 0x24) < 0x100) {
      d_add(param_2,0);
      lVar6 = 0;
    }
  }
  return lVar6;
}




undefined8 FUN_00101c10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  _mcount();
  lVar5 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 0x100);
  plVar1 = (long *)(lVar10 + 8);
  uVar9 = *(undefined8 *)(lVar5 + 0x80);
  lVar8 = *(long *)(lVar5 + 0x90);
  if (param_2[1] == 0) {
    iVar2 = (*(code *)*param_2)(param_2,&DAT_00106490,1,0,*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x38),4);
    if (iVar2 != 0) {
      return 0;
    }
    param_2[1] = 1;
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else if (param_2[1] != 1) goto LAB_00101c60;
  pcVar7 = (code *)*param_2;
  _raw_spin_lock(lVar5 + 0x58);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x30) + 0x38);
  _raw_spin_unlock(lVar5 + 0x58);
  iVar2 = (*pcVar7)(param_2,&DAT_00106498,2,1,uVar4,4);
  if (iVar2 != 0) {
    return 0;
  }
  param_2[1] = 2;
LAB_00101c60:
  _raw_spin_lock(&configfs_dirent_lock);
  if (param_2[1] == 2) {
    __list_del_entry(plVar1);
    __list_add(plVar1,lVar8 + 0x18,*(undefined8 *)(lVar8 + 0x18));
  }
  plVar6 = *(long **)(lVar10 + 8);
  do {
    if (plVar6 == (long *)(lVar8 + 0x18)) {
      _raw_spin_unlock(&configfs_dirent_lock);
      return 0;
    }
    if (plVar6[6] != 0) {
      if ((plVar6[8] == 0) || (lVar5 = *(long *)(plVar6[8] + 0x30), lVar5 == 0)) {
        _raw_spin_unlock(&configfs_dirent_lock);
        uVar4 = iunique(uVar9,2);
      }
      else {
        uVar4 = *(undefined8 *)(lVar5 + 0x38);
        _raw_spin_unlock(&configfs_dirent_lock);
      }
      __s = (char *)configfs_get_name(plVar6 + -1);
      sVar3 = strlen(__s);
      iVar2 = (*(code *)*param_2)(param_2,__s,sVar3 & 0xffffffff,param_2[1],uVar4,
                                  *(ushort *)((long)plVar6 + 0x3c) >> 0xc);
      if (iVar2 != 0) {
        return 0;
      }
      _raw_spin_lock(&configfs_dirent_lock);
      __list_del_entry(plVar1);
      __list_add(plVar1,plVar6,*plVar6);
      param_2[1] = param_2[1] + 1;
      plVar6 = plVar1;
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}




undefined8 FUN_00101e28(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  _mcount();
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x100;
  if ((long *)(param_1 + 0x28) != *(long **)(param_1 + 0x28)) {
    return 0xfffffff0;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  do {
    if ((long *)(param_1 + 0x18) == plVar2) {
      return 0;
    }
    if ((plVar2[6] != 0) && (uVar1 = *(uint *)(plVar2 + 7), (uVar1 & 0xc) == 0)) {
      if ((uVar1 >> 7 & 1) == 0) {
        return 0xffffffd9;
      }
      if ((uVar1 >> 9 & 1) != 0) {
        if (param_2 != (long *)0x0) {
          lVar4 = plVar2[8];
          if (lVar4 != 0) {
            lockref_get(lVar4 + 0x58,param_2);
          }
          *param_2 = lVar4;
          return 0xfffffff5;
        }
        return 0xfffffff5;
      }
      uVar3 = FUN_00101e28(*(undefined8 *)(plVar2[8] + 0x90));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}




void FUN_00101f18(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  _mcount();
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffeff;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined8 *)*puVar2;
  do {
    if (puVar2 == puVar1) {
      return;
    }
    while (puVar1 = puVar1 + -1, (*(uint *)(puVar1 + 8) >> 7 & 1) == 0) {
      puVar1 = (undefined8 *)puVar1[1];
      if (puVar2 == puVar1) {
        return;
      }
    }
    FUN_00101f18(*(undefined8 *)(puVar1[9] + 0x90));
    puVar1 = (undefined8 *)puVar1[1];
  } while( true );
}




void configfs_undepend_item(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  _mcount();
  _raw_spin_lock(&configfs_dirent_lock);
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x90);
  iVar1 = *(int *)(lVar3 + 4);
  if (0 < iVar1) {
    *(int *)(lVar3 + 4) = iVar1 + -1;
    _raw_spin_unlock(&configfs_dirent_lock);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x800,0x101ff4);
  (*pcVar2)();
}




void FUN_00102000(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  _mcount();
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
    if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x18), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x800,0x102054);
  (*pcVar2)();
}




void FUN_00102054(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  _mcount();
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x800,0x1020c4);
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x20), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,param_2);
    return;
  }
  config_item_put(param_2);
  return;
}




void FUN_00102058(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  _mcount();
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x800,0x1020c4);
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x20), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,param_2);
    return;
  }
  config_item_put(param_2);
  return;
}




void FUN_001020c4(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  _mcount();
  FUN_001019a0(param_1,param_2);
  lVar4 = *(long *)(param_1 + 0x60);
  if ((*(long *)(param_1 + 0x60) == 0) && (iVar2 = configfs_is_root(param_1), lVar4 = param_2, iVar2 == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x800,0x102154);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x60) = lVar4;
  for (plVar3 = *(long **)(param_2 + 0x68); (long *)(param_2 + 0x68) != plVar3; plVar3 = (long *)*plVar3) {
    FUN_001020c8(param_2,plVar3 + -0xf);
  }
  return;
}




void FUN_001020c8(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  _mcount();
  FUN_001019a0(param_1,param_2);
  lVar4 = *(long *)(param_1 + 0x60);
  if ((*(long *)(param_1 + 0x60) == 0) && (iVar2 = configfs_is_root(param_1), lVar4 = param_2, iVar2 == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x800,0x102154);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x60) = lVar4;
  for (plVar3 = *(long **)(param_2 + 0x68); (long *)(param_2 + 0x68) != plVar3; plVar3 = (long *)*plVar3) {
    FUN_001020c8(param_2,plVar3 + -0xf);
  }
  return;
}




void FUN_00102154(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  _mcount();
  if (param_1 == 0) {
    return;
  }
  lockref_get(param_1 + 0x58);
  if ((DAT_00106e5a >> 2 & 1) != 0) {
    __dynamic_pr_debug(&PTR_s_configfs_00106e38,"configfs: configfs %s: dropping attrs for  dir\n",
                       *(undefined8 *)(param_1 + 0x28));
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x90) + 0x18);
  plVar6 = (long *)*plVar9;
  lVar7 = *plVar6;
  plVar4 = plVar6 + -1;
  do {
    while( true ) {
      if (plVar6 == plVar9) {
        dput(param_1);
        return;
      }
      plVar8 = (long *)(lVar7 + -8);
      if ((plVar4[7] != 0) && ((*(uint *)(plVar4 + 8) & 0xc) != 0)) break;
LAB_001021c0:
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      plVar4 = plVar8;
    }
    _raw_spin_lock(&configfs_dirent_lock);
    __list_del_entry(plVar6);
    plVar4[1] = (long)plVar6;
    plVar4[2] = (long)plVar6;
    _raw_spin_unlock(&configfs_dirent_lock);
    configfs_drop_dentry(plVar4,param_1);
    if ((int)*plVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0x800,0x102294);
      (*pcVar5)();
    }
    Hint_Prefetch(plVar4,2,0,1);
    do {
      iVar3 = (int)*plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar3 != 0) || ((*(uint *)(plVar4 + 8) & 1) != 0)) goto LAB_001021c0;
    kfree(plVar4[10]);
    kmem_cache_free(configfs_dir_cachep,plVar4);
    plVar6 = plVar8 + 1;
    lVar7 = *plVar6;
    plVar4 = plVar8;
  } while( true );
}




void FUN_00102158(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  _mcount();
  if (param_1 == 0) {
    return;
  }
  lockref_get(param_1 + 0x58);
  if ((DAT_00106e5a >> 2 & 1) != 0) {
    __dynamic_pr_debug(&PTR_s_configfs_00106e38,"configfs: configfs %s: dropping attrs for  dir\n",
                       *(undefined8 *)(param_1 + 0x28));
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x90) + 0x18);
  plVar6 = (long *)*plVar9;
  lVar7 = *plVar6;
  plVar4 = plVar6 + -1;
  do {
    while( true ) {
      if (plVar6 == plVar9) {
        dput(param_1);
        return;
      }
      plVar8 = (long *)(lVar7 + -8);
      if ((plVar4[7] != 0) && ((*(uint *)(plVar4 + 8) & 0xc) != 0)) break;
LAB_001021c0:
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      plVar4 = plVar8;
    }
    _raw_spin_lock(&configfs_dirent_lock);
    __list_del_entry(plVar6);
    plVar4[1] = (long)plVar6;
    plVar4[2] = (long)plVar6;
    _raw_spin_unlock(&configfs_dirent_lock);
    configfs_drop_dentry(plVar4,param_1);
    if ((int)*plVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0x800,0x102294);
      (*pcVar5)();
    }
    Hint_Prefetch(plVar4,2,0,1);
    do {
      iVar3 = (int)*plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar3 != 0) || ((*(uint *)(plVar4 + 8) & 1) != 0)) goto LAB_001021c0;
    kfree(plVar4[10]);
    kmem_cache_free(configfs_dir_cachep,plVar4);
    plVar6 = plVar8 + 1;
    lVar7 = *plVar6;
    plVar4 = plVar8;
  } while( true );
}




void FUN_001022c8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  
  _mcount();
  if (param_1 != 0) {
    lockref_get(param_1 + 0x58);
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      lockref_get(lVar7 + 0x58);
    }
    piVar6 = *(int **)(param_1 + 0x90);
    piVar1 = piVar6 + 2;
    _raw_spin_lock(&configfs_dirent_lock);
    __list_del_entry(piVar1);
    *(int **)(piVar6 + 2) = piVar1;
    *(int **)(piVar6 + 4) = piVar1;
    _raw_spin_unlock(&configfs_dirent_lock);
    if (*piVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0x800,0x1023e4);
      (*pcVar5)();
    }
    Hint_Prefetch(piVar6,2,0,1);
    do {
      iVar2 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar2 + -1 == 0) && ((piVar6[0x10] & 1U) == 0)) {
      kfree(*(undefined8 *)(piVar6 + 0x14));
      kmem_cache_free(configfs_dir_cachep,piVar6);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      simple_rmdir(*(undefined8 *)(lVar7 + 0x30),param_1);
    }
    if ((DAT_00106e82 >> 2 & 1) != 0) {
      __dynamic_pr_debug(&PTR_s_configfs_00106e60,"configfs:  o %pd removing done (%d)\n",param_1,
                         *(undefined4 *)(param_1 + 0x70));
    }
    dput(lVar7);
    dput(param_1);
  }
  return;
}




void FUN_00102408(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  
  _mcount();
  if (param_1 != 0) {
    lockref_get(param_1 + 0x58);
    plVar6 = (long *)(*(long *)(param_1 + 0x90) + 0x18);
    plVar3 = (long *)*plVar6;
    plVar2 = plVar3 + -1;
    lVar1 = *plVar3;
    while (plVar4 = plVar2, plVar6 != plVar3) {
      while ((plVar2 = (long *)(lVar1 + -8), plVar4[7] == 0 || ((*(uint *)(plVar4 + 8) >> 7 & 1) == 0))) {
        lVar1 = plVar2[1];
        plVar4 = plVar2;
        if (plVar2 + 1 == plVar6) goto LAB_001024f4;
      }
      puVar5 = (uint *)plVar4[9];
      down_write(*(long *)(puVar5 + 0xc) + 0xb0);
      FUN_00102510(plVar4[7]);
      *(uint *)(*(long *)(puVar5 + 0xc) + 0xc) = *(uint *)(*(long *)(puVar5 + 0xc) + 0xc) | 0x10;
      _raw_spin_lock(puVar5 + 0x16);
      *puVar5 = *puVar5 | 0x100;
      _raw_spin_unlock(puVar5 + 0x16);
      up_write(*(long *)(puVar5 + 0xc) + 0xb0);
      d_delete(puVar5);
      dput(puVar5);
      plVar3 = plVar2 + 1;
      lVar1 = *plVar3;
    }
LAB_001024f4:
    dput(param_1);
  }
  return;
}




void FUN_00102510(long param_1)

{
  _mcount();
  FUN_00102408(*(undefined8 *)(param_1 + 0x48));
  FUN_00102158(*(undefined8 *)(param_1 + 0x48));
  FUN_001022c8(*(undefined8 *)(param_1 + 0x48));
  return;
}




int FUN_0010254c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_8;
  
  _mcount();
  lVar6 = *(long *)(param_2 + 0x90);
  if ((*(uint *)(lVar6 + 0x40) >> 7 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    lVar7 = lVar3 + 0x58;
    _raw_spin_lock(lVar7);
    if (*(long *)(lVar3 + 0x10) == 0) {
      lVar3 = 0;
      _raw_spin_unlock(lVar7);
    }
    else {
      if ((*(uint *)(*(long *)(lVar3 + 0x90) + 0x40) >> 5 & 1) == 0) {
        lVar3 = config_item_get();
      }
      else {
        lVar3 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x90) + 0x38) + 0x10));
      }
      _raw_spin_unlock(lVar7);
    }
    lVar7 = *(long *)(lVar3 + 0x60);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1027dc);
      (*pcVar1)();
    }
    if (*(long *)(lVar3 + 0x40) != 0) {
      if (*(undefined8 **)(lVar7 + 0x40) == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1027e0);
        (*pcVar1)();
      }
      uVar8 = **(undefined8 **)(lVar7 + 0x40);
      while( true ) {
        mutex_lock(&configfs_symlink_mutex);
        _raw_spin_lock(&configfs_dirent_lock);
        if (*(int *)(lVar6 + 4) != 0) break;
        iVar2 = FUN_00101e28(*(undefined8 *)(param_2 + 0x90),&lStack_8);
        if (iVar2 == 0) {
          _raw_spin_unlock(&configfs_dirent_lock);
          mutex_unlock(&configfs_symlink_mutex);
          lVar4 = 0;
          _raw_spin_lock(param_2 + 0x58);
          if (*(long *)(param_2 + 0x10) != 0) {
            if ((*(uint *)(*(long *)(param_2 + 0x90) + 0x40) >> 5 & 1) == 0) {
              lVar4 = config_item_get();
            }
            else {
              lVar4 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 0x38) + 0x10));
            }
          }
          _raw_spin_unlock(param_2 + 0x58);
          config_item_put(lVar3);
          if (*(undefined8 **)(lVar4 + 0x40) == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = **(undefined8 **)(lVar4 + 0x40);
          }
          if ((*(uint *)(lVar6 + 0x40) >> 6 & 1) == 0) {
            FUN_00102158(*(undefined8 *)(lVar4 + 0x48));
            FUN_001022c8(*(undefined8 *)(lVar4 + 0x48));
            mutex_lock(lVar7 + 0x88);
            FUN_00102000(lVar3,lVar4);
            FUN_00101458(lVar4);
          }
          else {
            FUN_00102510(lVar4);
            mutex_lock(lVar7 + 0x88);
            FUN_00102000(lVar3,lVar4);
            FUN_001014b8(lVar4);
          }
          FUN_00102058(lVar3,lVar4);
          mutex_unlock(lVar7 + 0x88);
          config_item_put(lVar4);
          module_put(uVar5);
          module_put(uVar8);
          return 0;
        }
        FUN_00101f18(*(undefined8 *)(param_2 + 0x90));
        _raw_spin_unlock(&configfs_dirent_lock);
        mutex_unlock(&configfs_symlink_mutex);
        if (iVar2 != -0xb) goto LAB_00102704;
        down_write(*(long *)(lStack_8 + 0x30) + 0xb0);
        up_write(*(long *)(lStack_8 + 0x30) + 0xb0);
        dput(lStack_8);
      }
      _raw_spin_unlock(&configfs_dirent_lock);
      iVar2 = -0x10;
      mutex_unlock(&configfs_symlink_mutex);
LAB_00102704:
      config_item_put(lVar3);
      return iVar2;
    }
    iVar2 = -0x16;
    config_item_put(lVar3);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}




int FUN_00102550(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_8;
  
  _mcount();
  lVar6 = *(long *)(param_2 + 0x90);
  if ((*(uint *)(lVar6 + 0x40) >> 7 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    lVar7 = lVar3 + 0x58;
    _raw_spin_lock(lVar7);
    if (*(long *)(lVar3 + 0x10) == 0) {
      lVar3 = 0;
      _raw_spin_unlock(lVar7);
    }
    else {
      if ((*(uint *)(*(long *)(lVar3 + 0x90) + 0x40) >> 5 & 1) == 0) {
        lVar3 = config_item_get();
      }
      else {
        lVar3 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x90) + 0x38) + 0x10));
      }
      _raw_spin_unlock(lVar7);
    }
    lVar7 = *(long *)(lVar3 + 0x60);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1027dc);
      (*pcVar1)();
    }
    if (*(long *)(lVar3 + 0x40) != 0) {
      if (*(undefined8 **)(lVar7 + 0x40) == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x800,0x1027e0);
        (*pcVar1)();
      }
      uVar8 = **(undefined8 **)(lVar7 + 0x40);
      while( true ) {
        mutex_lock(&configfs_symlink_mutex);
        _raw_spin_lock(&configfs_dirent_lock);
        if (*(int *)(lVar6 + 4) != 0) break;
        iVar2 = FUN_00101e28(*(undefined8 *)(param_2 + 0x90),&local_8);
        if (iVar2 == 0) {
          _raw_spin_unlock(&configfs_dirent_lock);
          mutex_unlock(&configfs_symlink_mutex);
          lVar4 = 0;
          _raw_spin_lock(param_2 + 0x58);
          if (*(long *)(param_2 + 0x10) != 0) {
            if ((*(uint *)(*(long *)(param_2 + 0x90) + 0x40) >> 5 & 1) == 0) {
              lVar4 = config_item_get();
            }
            else {
              lVar4 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 0x38) + 0x10));
            }
          }
          _raw_spin_unlock(param_2 + 0x58);
          config_item_put(lVar3);
          if (*(undefined8 **)(lVar4 + 0x40) == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = **(undefined8 **)(lVar4 + 0x40);
          }
          if ((*(uint *)(lVar6 + 0x40) >> 6 & 1) == 0) {
            FUN_00102158(*(undefined8 *)(lVar4 + 0x48));
            FUN_001022c8(*(undefined8 *)(lVar4 + 0x48));
            mutex_lock(lVar7 + 0x88);
            FUN_00102000(lVar3,lVar4);
            FUN_00101458(lVar4);
          }
          else {
            FUN_00102510(lVar4);
            mutex_lock(lVar7 + 0x88);
            FUN_00102000(lVar3,lVar4);
            FUN_001014b8(lVar4);
          }
          FUN_00102058(lVar3,lVar4);
          mutex_unlock(lVar7 + 0x88);
          config_item_put(lVar4);
          module_put(uVar5);
          module_put(uVar8);
          return 0;
        }
        FUN_00101f18(*(undefined8 *)(param_2 + 0x90));
        _raw_spin_unlock(&configfs_dirent_lock);
        mutex_unlock(&configfs_symlink_mutex);
        if (iVar2 != -0xb) goto LAB_00102704;
        down_write(*(long *)(local_8 + 0x30) + 0xb0);
        up_write(*(long *)(local_8 + 0x30) + 0xb0);
        dput(local_8);
      }
      _raw_spin_unlock(&configfs_dirent_lock);
      iVar2 = -0x10;
      mutex_unlock(&configfs_symlink_mutex);
LAB_00102704:
      config_item_put(lVar3);
      return iVar2;
    }
    iVar2 = -0x16;
    config_item_put(lVar3);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}




void configfs_unregister_group(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  
  _mcount();
  puVar2 = *(uint **)(param_1 + 0x48);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x48);
  lVar1 = *(long *)(param_1 + 0x60) + 0x88;
  down_write(*(long *)(lVar3 + 0x30) + 0xb0);
  _raw_spin_lock(&configfs_dirent_lock);
  FUN_00101e28(*(undefined8 *)(puVar2 + 0x24),0);
  _raw_spin_unlock(&configfs_dirent_lock);
  FUN_00102510(param_1);
  *(uint *)(*(long *)(puVar2 + 0xc) + 0xc) = *(uint *)(*(long *)(puVar2 + 0xc) + 0xc) | 0x10;
  _raw_spin_lock(puVar2 + 0x16);
  *puVar2 = *puVar2 | 0x100;
  _raw_spin_unlock(puVar2 + 0x16);
  d_delete(puVar2);
  up_write(*(long *)(lVar3 + 0x30) + 0xb0);
  dput(puVar2);
  mutex_lock(lVar1);
  FUN_001014b8(param_1);
  mutex_unlock(lVar1);
  return;
}




void configfs_unregister_default_group(undefined8 param_1)

{
  _mcount();
  configfs_unregister_group(param_1);
  kfree(param_1);
  return;
}




void FUN_00102924(long param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  
  _mcount();
  puVar2 = *(uint **)(param_1 + 0x48);
  lVar3 = *(long *)(*(long *)(puVar2 + 0x20) + 0x68);
  if (lVar3 == *(long *)(puVar2 + 6)) {
    down_write(*(long *)(lVar3 + 0x30) + 0xb0);
    down_write(*(long *)(puVar2 + 0xc) + 0xb0);
    mutex_lock(&configfs_symlink_mutex);
    _raw_spin_lock(&configfs_dirent_lock);
    iVar1 = FUN_00101e28(*(undefined8 *)(puVar2 + 0x24),0);
    if (iVar1 != 0) {
      printk(&DAT_00106528);
    }
    _raw_spin_unlock(&configfs_dirent_lock);
    mutex_unlock(&configfs_symlink_mutex);
    FUN_00102510(param_1);
    *(uint *)(*(long *)(puVar2 + 0xc) + 0xc) = *(uint *)(*(long *)(puVar2 + 0xc) + 0xc) | 0x10;
    _raw_spin_lock(puVar2 + 0x16);
    *puVar2 = *puVar2 | 0x100;
    _raw_spin_unlock(puVar2 + 0x16);
    up_write(*(long *)(puVar2 + 0xc) + 0xb0);
    d_delete(puVar2);
    up_write(*(long *)(lVar3 + 0x30) + 0xb0);
    dput(puVar2);
    FUN_001014b8(param_1);
    configfs_release_fs();
  }
  else {
    printk(&DAT_001064f8);
  }
  return;
}




void configfs_unregister_subsystem(long param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  
  _mcount();
  puVar2 = *(uint **)(param_1 + 0x48);
  lVar3 = *(long *)(*(long *)(puVar2 + 0x20) + 0x68);
  if (lVar3 == *(long *)(puVar2 + 6)) {
    down_write(*(long *)(lVar3 + 0x30) + 0xb0);
    down_write(*(long *)(puVar2 + 0xc) + 0xb0);
    mutex_lock(&configfs_symlink_mutex);
    _raw_spin_lock(&configfs_dirent_lock);
    iVar1 = FUN_00101e28(*(undefined8 *)(puVar2 + 0x24),0);
    if (iVar1 != 0) {
      printk(&DAT_00106528);
    }
    _raw_spin_unlock(&configfs_dirent_lock);
    mutex_unlock(&configfs_symlink_mutex);
    FUN_00102510(param_1);
    *(uint *)(*(long *)(puVar2 + 0xc) + 0xc) = *(uint *)(*(long *)(puVar2 + 0xc) + 0xc) | 0x10;
    _raw_spin_lock(puVar2 + 0x16);
    *puVar2 = *puVar2 | 0x100;
    _raw_spin_unlock(puVar2 + 0x16);
    up_write(*(long *)(puVar2 + 0xc) + 0xb0);
    d_delete(puVar2);
    up_write(*(long *)(lVar3 + 0x30) + 0xb0);
    dput(puVar2);
    FUN_001014b8(param_1);
    configfs_release_fs();
  }
  else {
    printk(&DAT_001064f8);
  }
  return;
}




int FUN_00102a68(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  _mcount();
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    if ((*(long **)(lVar3 + 0x18) != (long *)0x0) && (**(long **)(lVar3 + 0x18) != 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = configfs_create_file(param_1);
        if (iVar1 != 0) {
          if ((*(long **)(lVar3 + 0x20) == (long *)0x0) || (**(long **)(lVar3 + 0x20) == 0)) goto LAB_00102b08;
          goto LAB_00102ae0;
        }
      } while (*(long *)(*(long *)(lVar3 + 0x18) + (long)iVar2 * 8) != 0);
    }
    if ((*(long **)(lVar3 + 0x20) != (long *)0x0) && (**(long **)(lVar3 + 0x20) != 0)) {
LAB_00102ae0:
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = configfs_create_bin_file(param_1);
        if (iVar1 != 0) goto LAB_00102b08;
      } while (*(long *)(*(long *)(lVar3 + 0x20) + (long)iVar2 * 8) != 0);
    }
    return 0;
  }
  iVar1 = -0x16;
LAB_00102b10:
  down_write(*(long *)(param_2 + 0xc) + 0xb0);
  FUN_001022c8(*(undefined8 *)(param_1 + 0x48));
  *(uint *)(*(long *)(param_2 + 0xc) + 0xc) = *(uint *)(*(long *)(param_2 + 0xc) + 0xc) | 0x10;
  _raw_spin_lock(param_2 + 0x16);
  *param_2 = *param_2 | 0x100;
  _raw_spin_unlock(param_2 + 0x16);
  up_write(*(long *)(param_2 + 0xc) + 0xb0);
  d_delete(param_2);
  return iVar1;
LAB_00102b08:
  FUN_00102158(*(undefined8 *)(param_1 + 0x48));
  goto LAB_00102b10;
}




int * FUN_00102bb4(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  
  _mcount();
  piVar4 = (int *)FUN_001011f0(param_1,param_3,param_5);
  if (piVar4 < (int *)0xfffffffffffff001) {
    *(undefined2 *)(piVar4 + 0x11) = param_4;
    *(long *)(piVar4 + 0x12) = param_2;
    if (param_2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      if (piVar4 != (int *)0x0) {
        if (*piVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0x800,0x102c54);
          (*pcVar3)();
        }
        Hint_Prefetch(piVar4,2,0,1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(int **)(param_2 + 0x90) = piVar4;
      piVar4 = (int *)0x0;
    }
  }
  return piVar4;
}




int * configfs_make_dirent(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  
  _mcount();
  piVar4 = (int *)FUN_001011f0(param_1,param_3,param_5);
  if (piVar4 < (int *)0xfffffffffffff001) {
    *(undefined2 *)(piVar4 + 0x11) = param_4;
    *(long *)(piVar4 + 0x12) = param_2;
    if (param_2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      if (piVar4 != (int *)0x0) {
        if (*piVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0x800,0x102c54);
          (*pcVar3)();
        }
        Hint_Prefetch(piVar4,2,0,1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(int **)(param_2 + 0x90) = piVar4;
      piVar4 = (int *)0x0;
    }
  }
  return piVar4;
}




int FUN_00102c58(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  char *__s1;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  char *__s2;
  long lVar11;
  
  _mcount();
  lVar11 = *(long *)(param_2 + 0x18);
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0x800,0x102df0);
    (*pcVar5)();
  }
  lVar7 = *(long *)(lVar11 + 0x90);
  __s2 = *(char **)(param_2 + 0x28);
  plVar10 = (long *)(lVar7 + 0x18);
  plVar8 = (long *)*plVar10;
  if (plVar10 != plVar8) {
    do {
      if (plVar8[6] != 0) {
        __s1 = (char *)configfs_get_name(plVar8 + -1);
        iVar6 = strcmp(__s1,__s2);
        if (iVar6 == 0) {
          return -0x11;
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar10 != plVar8);
    lVar7 = *(long *)(lVar11 + 0x90);
  }
  iVar6 = configfs_make_dirent(lVar7,param_2,param_1,0x41ed,0x402);
  if (iVar6 == 0) {
    iVar6 = configfs_create(param_2,0x41ed,FUN_00101a00);
    if (iVar6 == 0) {
      inc_nlink(*(undefined8 *)(lVar11 + 0x30));
      *(long *)(param_1 + 0x48) = param_2;
      return 0;
    }
    piVar9 = *(int **)(param_2 + 0x90);
    if (piVar9 != (int *)0x0) {
      piVar1 = piVar9 + 2;
      _raw_spin_lock(&configfs_dirent_lock);
      __list_del_entry(piVar1);
      *(int **)(piVar9 + 2) = piVar1;
      *(int **)(piVar9 + 4) = piVar1;
      _raw_spin_unlock(&configfs_dirent_lock);
      if (*piVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x800,0x102df4);
        (*pcVar5)();
      }
      Hint_Prefetch(piVar9,2,0,1);
      do {
        iVar2 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      DataMemoryBarrier(2,3);
      if ((iVar2 + -1 == 0) && ((piVar9[0x10] & 1U) == 0)) {
        kfree(*(undefined8 *)(piVar9 + 0x14));
        kmem_cache_free(configfs_dir_cachep,piVar9);
        return iVar6;
      }
    }
  }
  return iVar6;
}




int FUN_00102e10(long param_1,uint *param_2)

{
  int iVar1;
  long *plVar2;
  
  _mcount();
  iVar1 = FUN_00102c58(param_1,param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_00102a68(param_1,param_2), iVar1 == 0)) {
    *(uint *)(*(long *)(param_2 + 0x24) + 0x40) = *(uint *)(*(long *)(param_2 + 0x24) + 0x40) | 0x40;
    down_write(*(long *)(param_2 + 0xc) + 0xb0);
    plVar2 = *(long **)(param_1 + 0x68);
    while( true ) {
      if ((long *)(param_1 + 0x68) == plVar2) {
        up_write(*(long *)(param_2 + 0xc) + 0xb0);
        return 0;
      }
      iVar1 = FUN_00102f68(*(undefined8 *)(param_1 + 0x48),plVar2 + -0xf);
      if (iVar1 != 0) break;
      plVar2 = (long *)*plVar2;
    }
    FUN_00102408(*(undefined8 *)(param_1 + 0x48));
    FUN_00102158(*(undefined8 *)(param_1 + 0x48));
    FUN_001022c8(*(undefined8 *)(param_1 + 0x48));
    *(uint *)(*(long *)(param_2 + 0xc) + 0xc) = *(uint *)(*(long *)(param_2 + 0xc) + 0xc) | 0x10;
    _raw_spin_lock(param_2 + 0x16);
    *param_2 = *param_2 | 0x100;
    _raw_spin_unlock(param_2 + 0x16);
    up_write(*(long *)(param_2 + 0xc) + 0xb0);
    d_delete(param_2);
    return iVar1;
  }
  return iVar1;
}




int FUN_00102f64(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  _mcount();
  if (*param_2 == 0) {
    *param_2 = (long)(param_2 + 1);
  }
  lVar3 = d_alloc_name(param_1);
  if (lVar3 == 0) {
    iVar2 = -0xc;
  }
  else {
    d_add(lVar3,0);
    iVar2 = FUN_00102e10(param_2,lVar3);
    if (iVar2 == 0) {
      *(uint *)(*(long *)(lVar3 + 0x90) + 0x40) = *(uint *)(*(long *)(lVar3 + 0x90) + 0x40) | 0x80;
      return 0;
    }
    if (*(long *)(lVar3 + 0x30) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x800,0x103014);
      (*pcVar1)();
    }
    d_drop(lVar3);
    dput(lVar3);
  }
  return iVar2;
}




int FUN_00102f68(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  _mcount();
  if (*param_2 == 0) {
    *param_2 = (long)(param_2 + 1);
  }
  lVar3 = d_alloc_name(param_1);
  if (lVar3 == 0) {
    iVar2 = -0xc;
  }
  else {
    d_add(lVar3,0);
    iVar2 = FUN_00102e10(param_2,lVar3);
    if (iVar2 == 0) {
      *(uint *)(*(long *)(lVar3 + 0x90) + 0x40) = *(uint *)(*(long *)(lVar3 + 0x90) + 0x40) | 0x80;
      return 0;
    }
    if (*(long *)(lVar3 + 0x30) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x800,0x103014);
      (*pcVar1)();
    }
    d_drop(lVar3);
    dput(lVar3);
  }
  return iVar2;
}




int configfs_register_group(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _mcount();
  lVar2 = *(long *)(param_1 + 0x60) + 0x88;
  mutex_lock(lVar2);
  FUN_001020c8(param_1,param_2);
  mutex_unlock(lVar2);
  lVar2 = *(long *)(param_1 + 0x48);
  down_write(*(long *)(lVar2 + 0x30) + 0xb0);
  iVar1 = FUN_00102f68(*(undefined8 *)(param_1 + 0x48),param_2);
  if (iVar1 == 0) {
    _raw_spin_lock(&configfs_dirent_lock);
    FUN_00101090(*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x90));
    _raw_spin_unlock(&configfs_dirent_lock);
  }
  up_write(*(long *)(lVar2 + 0x30) + 0xb0);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long configfs_register_default_group(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  _mcount();
  lVar2 = kmem_cache_alloc_trace(_DAT_001082c0,0x24080c0,0x88);
  if (lVar2 == 0) {
    return -0xc;
  }
  config_group_init_type_name(lVar2,param_2,param_3);
  iVar1 = configfs_register_group(param_1,lVar2);
  if (iVar1 == 0) {
    return lVar2;
  }
  kfree(lVar2);
  return (long)iVar1;
}




ulong configfs_register_subsystem(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  _mcount();
  uVar2 = configfs_pin_fs();
  uVar5 = uVar2 & 0xffffffff;
  if (uVar2 < 0xfffffffffffff001) {
    if (*param_1 == 0) {
      *param_1 = (long)(param_1 + 1);
    }
    FUN_001020c8(*(undefined8 *)(*(long *)(uVar2 + 0x90) + 0x38),param_1);
    down_write(*(long *)(uVar2 + 0x30) + 0xb0);
    lVar3 = d_alloc_name(uVar2,*param_1);
    if (lVar3 == 0) {
      uVar5 = 0xfffffff4;
    }
    else {
      d_add(lVar3,0);
      uVar4 = FUN_00102e10(param_1,lVar3);
      uVar5 = uVar4 & 0xffffffff;
      if ((int)uVar4 == 0) {
        _raw_spin_lock(&configfs_dirent_lock);
        FUN_00101090(*(undefined8 *)(lVar3 + 0x90));
        _raw_spin_unlock(&configfs_dirent_lock);
        up_write(*(long *)(uVar2 + 0x30) + 0xb0);
        return uVar5;
      }
      if (*(long *)(lVar3 + 0x30) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0x800,0x10328c);
        (*pcVar1)();
      }
      d_drop(lVar3);
      dput(lVar3);
    }
    up_write(*(long *)(uVar2 + 0x30) + 0xb0);
    FUN_001014b8(param_1);
    configfs_release_fs();
  }
  return uVar5;
}




ulong FUN_001032b0(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  char *__s;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_8;
  
  _mcount();
  lVar9 = *(long *)(*(long *)(param_2 + 0x18) + 0x90);
  _raw_spin_lock(&configfs_dirent_lock);
  uVar3 = *(uint *)(lVar9 + 0x40);
  _raw_spin_unlock(&configfs_dirent_lock);
  if ((uVar3 & 0x400) != 0) {
    return 0xfffffffe;
  }
  if ((*(uint *)(lVar9 + 0x40) >> 6 & 1) == 0) {
    return 0xffffffff;
  }
  lVar8 = *(long *)(param_2 + 0x18);
  lVar11 = lVar8 + 0x58;
  _raw_spin_lock(lVar11);
  if (*(long *)(lVar8 + 0x10) == 0) {
    lVar8 = 0;
    _raw_spin_unlock(lVar11);
    lVar11 = lRam0000000000000040;
  }
  else {
    if ((*(uint *)(*(long *)(lVar8 + 0x90) + 0x40) >> 5 & 1) == 0) {
      lVar8 = config_item_get();
    }
    else {
      lVar8 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x90) + 0x38) + 0x10));
    }
    _raw_spin_unlock(lVar11);
    lVar11 = *(long *)(lVar8 + 0x40);
  }
  lVar10 = *(long *)(lVar8 + 0x60);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0x800,0x1034dc);
    (*pcVar7)();
  }
  if (((lVar11 == 0) || (plVar4 = *(long **)(lVar11 + 0x10), plVar4 == (long *)0x0)) ||
     ((plVar4[1] == 0 && (*plVar4 == 0)))) {
    uVar12 = 0xffffffff;
    goto LAB_0010347c;
  }
  if (*(undefined8 **)(lVar10 + 0x40) != (undefined8 *)0x0) {
    uVar13 = **(undefined8 **)(lVar10 + 0x40);
    cVar2 = try_module_get(uVar13);
    if (cVar2 != '\0') {
      __s = (char *)__kmalloc(*(int *)(param_2 + 0x24) + 1,0x24000c0);
      if (__s == (char *)0x0) {
        uVar12 = 0xfffffff4;
      }
      else {
        lVar10 = lVar10 + 0x88;
        snprintf(__s,(ulong)(*(int *)(param_2 + 0x24) + 1),"%s",*(undefined8 *)(param_2 + 0x28));
        mutex_lock(lVar10);
        pcVar7 = (code *)(*(undefined8 **)(lVar11 + 0x10))[1];
        if (pcVar7 == (code *)0x0) {
          local_8 = (*(code *)**(undefined8 **)(lVar11 + 0x10))(lVar8,__s);
          if (local_8 == 0) goto LAB_00103540;
          if (0xfffffffffffff000 < local_8) {
            uVar5 = 0;
            uVar6 = local_8;
            goto LAB_00103610;
          }
          uVar5 = 0;
          FUN_001019a0(lVar8,local_8);
LAB_001033f0:
          mutex_unlock(lVar10);
          kfree(__s);
        }
        else {
          uVar5 = (*pcVar7)(lVar8,__s);
          if (uVar5 == 0) {
LAB_00103540:
            mutex_unlock(lVar10);
            uVar12 = 0xfffffff4;
            kfree(__s);
            goto LAB_001034e4;
          }
          if (uVar5 < 0xfffffffffffff001) {
            FUN_001020c8(lVar8,uVar5);
            local_8 = uVar5;
            goto LAB_001033f0;
          }
          local_8 = 0;
          uVar6 = uVar5;
LAB_00103610:
          uVar12 = uVar6 & 0xffffffff;
          mutex_unlock(lVar10);
          kfree(__s);
          if ((int)uVar6 != 0) goto LAB_001034e4;
        }
        bVar1 = false;
        if (*(undefined8 **)(local_8 + 0x40) == (undefined8 *)0x0) {
          uVar14 = 0;
          uVar12 = 0xffffffea;
        }
        else {
          uVar14 = **(undefined8 **)(local_8 + 0x40);
          uVar12 = 0xffffffea;
          cVar2 = try_module_get(uVar14);
          if (cVar2 != '\0') {
            _raw_spin_lock(&configfs_dirent_lock);
            *(uint *)(lVar9 + 0x40) = *(uint *)(lVar9 + 0x40) | 0x200;
            _raw_spin_unlock(&configfs_dirent_lock);
            if (uVar5 == 0) {
              uVar3 = FUN_00102c58(local_8,param_2);
              uVar12 = (ulong)uVar3;
              if (uVar3 == 0) {
                uVar3 = FUN_00102a68(local_8,param_2);
                goto LAB_00103588;
              }
              _raw_spin_lock(&configfs_dirent_lock);
              *(uint *)(lVar9 + 0x40) = *(uint *)(lVar9 + 0x40) & 0xfffffdff;
            }
            else {
              uVar3 = FUN_00102e10();
LAB_00103588:
              uVar12 = (ulong)uVar3;
              _raw_spin_lock(&configfs_dirent_lock);
              *(uint *)(lVar9 + 0x40) = *(uint *)(lVar9 + 0x40) & 0xfffffdff;
              if (uVar3 == 0) {
                FUN_00101090(*(undefined8 *)(param_2 + 0x90));
                _raw_spin_unlock(&configfs_dirent_lock);
                goto LAB_0010347c;
              }
            }
            bVar1 = true;
            _raw_spin_unlock(&configfs_dirent_lock);
          }
        }
        mutex_lock(lVar10);
        FUN_00102000(lVar8,local_8);
        if (uVar5 == 0) {
          FUN_00101458(local_8);
        }
        else {
          FUN_001014b8(uVar5);
        }
        FUN_00102058(lVar8,local_8);
        mutex_unlock(lVar10);
        if (bVar1) {
          module_put(uVar14);
        }
      }
LAB_001034e4:
      module_put(uVar13);
      goto LAB_0010347c;
    }
  }
  uVar12 = 0xffffffea;
LAB_0010347c:
  config_item_put(lVar8);
  return uVar12;
}




bool configfs_dirent_is_ready(long param_1)

{
  uint uVar1;
  
  _mcount();
  _raw_spin_lock(&configfs_dirent_lock);
  uVar1 = *(uint *)(param_1 + 0x40);
  _raw_spin_unlock(&configfs_dirent_lock);
  return (uVar1 & 0x400) == 0;
}




int configfs_create_link(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  
  _mcount();
  iVar6 = configfs_make_dirent(*(undefined8 *)(param_2 + 0x90),param_3,param_1,0xffffa1ff,0x20);
  if (iVar6 == 0) {
    iVar6 = configfs_create(param_3,0xffffa1ff,FUN_00101058);
    if ((iVar6 != 0) && (piVar7 = *(int **)(param_3 + 0x90), piVar7 != (int *)0x0)) {
      piVar1 = piVar7 + 2;
      _raw_spin_lock(&configfs_dirent_lock);
      __list_del_entry(piVar1);
      *(int **)(piVar7 + 2) = piVar1;
      *(int **)(piVar7 + 4) = piVar1;
      _raw_spin_unlock(&configfs_dirent_lock);
      if (*piVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x800,0x103784);
        (*pcVar5)();
      }
      Hint_Prefetch(piVar7,2,0,1);
      do {
        iVar2 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      DataMemoryBarrier(2,3);
      if ((iVar2 + -1 == 0) && ((piVar7[0x10] & 1U) == 0)) {
        kfree(*(undefined8 *)(piVar7 + 0x14));
        kmem_cache_free(configfs_dir_cachep,piVar7);
      }
    }
  }
  return iVar6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_001037a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  char *__s;
  
  _mcount();
  puVar4 = (undefined4 *)0xfffffffffffffff6;
  if (param_1 != 0) {
    puVar5 = (undefined4 *)kmem_cache_alloc_trace(_DAT_001082e0,0x24080c0,0x1000);
    puVar4 = (undefined4 *)0xfffffffffffffff4;
    if (puVar5 != (undefined4 *)0x0) {
      lVar12 = *(long *)(param_1 + 0x18);
      lVar9 = lVar12 + 0x58;
      _raw_spin_lock(lVar9);
      if (*(long *)(lVar12 + 0x10) == 0) {
        puVar4 = (undefined4 *)0xffffffffffffffea;
        _raw_spin_unlock(lVar9);
      }
      else {
        if ((*(uint *)(*(long *)(lVar12 + 0x90) + 0x40) >> 5 & 1) == 0) {
          lVar12 = config_item_get();
        }
        else {
          lVar12 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x90) + 0x38) + 0x10));
        }
        _raw_spin_unlock(lVar9);
        if (lVar12 == 0) {
          puVar4 = (undefined4 *)0xffffffffffffffea;
        }
        else {
          lVar9 = param_1 + 0x58;
          _raw_spin_lock(lVar9);
          if (*(long *)(param_1 + 0x10) == 0) {
            _raw_spin_unlock(lVar9);
          }
          else {
            if ((*(uint *)(*(long *)(param_1 + 0x90) + 0x40) >> 5 & 1) == 0) {
              puVar6 = (undefined8 *)config_item_get();
            }
            else {
              puVar6 = (undefined8 *)
                       config_item_get(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x38) + 0x10));
            }
            _raw_spin_unlock(lVar9);
            if (puVar6 != (undefined8 *)0x0) {
              down_read(&configfs_rename_sem);
              lVar9 = lVar12;
              iVar3 = 0;
              do {
                iVar11 = iVar3;
                lVar9 = *(long *)(lVar9 + 0x30);
                iVar3 = iVar11 + 1;
                if (lVar9 == 0) break;
                iVar1 = configfs_is_root(lVar9);
              } while (iVar1 == 0);
              iVar1 = 1;
              puVar10 = puVar6;
              do {
                sVar7 = strlen((char *)*puVar10);
                puVar10 = (undefined8 *)puVar10[6];
                iVar1 = iVar1 + (int)sVar7 + 1;
                if (puVar10 == (undefined8 *)0x0) break;
                iVar2 = configfs_is_root(puVar10);
              } while (iVar2 == 0);
              iVar1 = iVar3 * 3 + iVar1;
              if (iVar1 + -1 < 0x1001) {
                if ((DAT_00106eaa >> 2 & 1) != 0) {
                  __dynamic_pr_debug(&PTR_s_configfs_00106e88,"configfs: %s: depth = %d, size = %d\n",
                                     "configfs_get_target_path",iVar3);
                }
                if (iVar3 != 0) {
                  puVar4 = puVar5;
                  do {
                    puVar8 = (undefined4 *)((long)puVar4 + 3);
                    *puVar4 = 0x2f2e2e;
                    puVar4 = puVar8;
                  } while (puVar8 != (undefined4 *)((long)puVar5 + ((long)iVar11 + 1) * 3));
                }
                iVar1 = iVar1 + -2;
                puVar10 = puVar6;
                do {
                  iVar3 = configfs_is_root(puVar10);
                  if (iVar3 != 0) break;
                  __s = (char *)*puVar10;
                  sVar7 = strlen(__s);
                  iVar3 = iVar1 - (int)sVar7;
                  iVar1 = iVar3 + -1;
                  strncpy((char *)((long)puVar5 + (long)iVar3),__s,(long)(int)sVar7);
                  *(undefined1 *)((long)puVar5 + (long)iVar1) = 0x2f;
                  puVar10 = (undefined8 *)puVar10[6];
                } while (puVar10 != (undefined8 *)0x0);
                if ((DAT_00106ed2 >> 2 & 1) != 0) {
                  __dynamic_pr_debug(&PTR_s_configfs_00106eb0,"configfs: %s: path = \'%s\'\n","configfs_get_target_path"
                                     ,puVar5);
                }
                up_read(&configfs_rename_sem);
                config_item_put(lVar12);
                config_item_put(puVar6);
                *param_3 = &kfree_link;
                param_3[1] = puVar5;
                return puVar5;
              }
              up_read(&configfs_rename_sem);
              config_item_put(lVar12);
              puVar4 = (undefined4 *)0xffffffffffffffdc;
              config_item_put(puVar6);
              goto LAB_00103a08;
            }
          }
          puVar4 = (undefined4 *)0xffffffffffffffea;
          config_item_put(lVar12);
        }
      }
LAB_00103a08:
      kfree(puVar5);
      return puVar4;
    }
  }
  return puVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int configfs_symlink(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_10 [8];
  long local_8;
  
  _mcount();
  iVar1 = configfs_dirent_is_ready(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x90));
  if (iVar1 == 0) {
    return -2;
  }
  lVar6 = *(long *)(param_2 + 0x18);
  lVar7 = lVar6 + 0x58;
  _raw_spin_lock(lVar7);
  if (*(long *)(lVar6 + 0x10) == 0) {
    lVar6 = 0;
LAB_00103b20:
    _raw_spin_unlock(lVar7);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    if ((*(uint *)(*(long *)(lVar6 + 0x90) + 0x40) >> 5 & 1) == 0) {
      lVar6 = config_item_get();
      goto LAB_00103b20;
    }
    lVar6 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x90) + 0x38) + 0x10));
    _raw_spin_unlock(lVar7);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  if ((lVar7 == 0) || (*(long *)(lVar7 + 8) == 0)) {
    iVar1 = -1;
    goto LAB_00103bd8;
  }
  iVar1 = -1;
  if (*(long *)(*(long *)(lVar7 + 8) + 8) == 0) goto LAB_00103bd8;
  lVar8 = *(long *)(param_2 + 0x80);
  iVar1 = kern_path(param_3,3,auStack_10);
  if (iVar1 != 0) goto LAB_00103bd8;
  if (lVar8 != *(long *)(local_8 + 0x80)) {
    iVar1 = -1;
    path_put(auStack_10);
    goto LAB_00103bd8;
  }
  lVar8 = local_8 + 0x58;
  _raw_spin_lock(lVar8);
  if (*(long *)(local_8 + 0x10) == 0) {
    _raw_spin_unlock(lVar8);
  }
  else {
    if ((*(uint *)(*(long *)(local_8 + 0x90) + 0x40) >> 5 & 1) == 0) {
      lVar2 = config_item_get();
    }
    else {
      lVar2 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(local_8 + 0x90) + 0x38) + 0x10));
    }
    _raw_spin_unlock(lVar8);
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*(long *)(lVar7 + 8) + 8))(lVar6,lVar2);
      if (iVar1 == 0) {
        mutex_lock(&configfs_symlink_mutex);
        lVar8 = *(long *)(*(long *)(lVar2 + 0x48) + 0x90);
        iVar1 = configfs_dirent_is_ready(lVar8);
        if (iVar1 == 0) {
          iVar1 = -2;
        }
        else {
          lVar3 = kmem_cache_alloc_trace(_DAT_001082b8,0x24000c0,0x18);
          if (lVar3 == 0) {
            iVar1 = -0xc;
          }
          else {
            _raw_spin_lock(&configfs_dirent_lock);
            if ((*(uint *)(lVar8 + 0x40) >> 8 & 1) == 0) {
              uVar4 = config_item_get(lVar2);
              *(undefined8 *)(lVar3 + 0x10) = uVar4;
              __list_add(lVar3,(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x28));
              _raw_spin_unlock(&configfs_dirent_lock);
              iVar1 = configfs_create_link(lVar3,*(undefined8 *)(lVar6 + 0x48),param_2);
              if (iVar1 == 0) {
                mutex_unlock(&configfs_symlink_mutex);
                goto LAB_00103bc8;
              }
              _raw_spin_lock(&configfs_dirent_lock);
              __list_del_entry(lVar3);
              *(long *)lVar3 = lVar3;
              *(long *)(lVar3 + 8) = lVar3;
              _raw_spin_unlock(&configfs_dirent_lock);
              config_item_put(lVar2);
              kfree(lVar3);
            }
            else {
              _raw_spin_unlock(&configfs_dirent_lock);
              iVar1 = -2;
              kfree(lVar3);
            }
          }
        }
        mutex_unlock(&configfs_symlink_mutex);
        pcVar5 = *(code **)(*(long *)(lVar7 + 8) + 0x10);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(lVar6,lVar2);
        }
      }
LAB_00103bc8:
      config_item_put(lVar2);
      path_put(auStack_10);
      goto LAB_00103bd8;
    }
  }
  iVar1 = -2;
  path_put(auStack_10);
LAB_00103bd8:
  config_item_put(lVar6);
  return iVar1;
}




undefined8 configfs_unlink(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  _mcount();
  piVar8 = *(int **)(param_2 + 0x90);
  if (((uint)piVar8[0x10] >> 5 & 1) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    lVar10 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(piVar8 + 0xe);
    _raw_spin_lock(lVar10 + 0x58);
    if (*(long *)(lVar10 + 0x10) == 0) {
      lVar5 = 0;
    }
    else if ((*(uint *)(*(long *)(lVar10 + 0x90) + 0x40) >> 5 & 1) == 0) {
      lVar5 = config_item_get();
    }
    else {
      lVar5 = config_item_get(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x90) + 0x38) + 0x10));
    }
    _raw_spin_unlock(lVar10 + 0x58);
    piVar1 = piVar8 + 2;
    lVar10 = *(long *)(lVar5 + 0x40);
    _raw_spin_lock(&configfs_dirent_lock);
    __list_del_entry(piVar1);
    *(int **)(piVar8 + 2) = piVar1;
    *(int **)(piVar8 + 4) = piVar1;
    _raw_spin_unlock(&configfs_dirent_lock);
    configfs_drop_dentry(piVar8,*(undefined8 *)(param_2 + 0x18));
    dput(param_2);
    if (*piVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0x800,0x103f3c);
      (*pcVar7)();
    }
    Hint_Prefetch(piVar8,2,0,1);
    do {
      iVar2 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar2 + -1 == 0) && ((piVar8[0x10] & 1U) == 0)) {
      kfree(*(undefined8 *)(piVar8 + 0x14));
      kmem_cache_free(configfs_dir_cachep,piVar8);
    }
    if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 8), lVar10 != 0)) &&
       (pcVar7 = *(code **)(lVar10 + 0x10), pcVar7 != (code *)0x0)) {
      (*pcVar7)(lVar5,*(undefined8 *)(lVar9 + 0x10));
    }
    _raw_spin_lock(&configfs_dirent_lock);
    __list_del_entry(lVar9);
    *(long *)lVar9 = lVar9;
    *(long *)(lVar9 + 8) = lVar9;
    _raw_spin_unlock(&configfs_dirent_lock);
    config_item_put(*(undefined8 *)(lVar9 + 0x10));
    kfree(lVar9);
    config_item_put(lVar5);
    uVar6 = 0;
  }
  return uVar6;
}




void FUN_00103f50(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  _mcount();
  mount_single(param_1,param_2,param_4,FUN_00103fa0);
  return;
}




undefined8 FUN_00103fa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _mcount();
  *(undefined1 *)(param_1 + 0x14) = 0xc;
  *(undefined8 *)(param_1 + 0x60) = 0x62656570;
  *(undefined8 *)(param_1 + 0x18) = 0x1000;
  *(undefined4 *)(param_1 + 0x568) = 1;
  *(undefined1 **)(param_1 + 0x30) = &DAT_00105200;
  lVar1 = configfs_new_inode(0x41ed,&DAT_00106cf8,param_1);
  if (lVar1 == 0) {
    if ((DAT_00106efa >> 2 & 1) != 0) {
      __dynamic_pr_debug(&PTR_s_configfs_00106ed8,"configfs: could not get root inode\n");
    }
    return 0xfffffff4;
  }
  *(undefined1 **)(lVar1 + 0x20) = configfs_root_inode_operations;
  *(undefined1 **)(lVar1 + 0x178) = configfs_dir_operations;
  inc_nlink();
  lVar1 = d_make_root(lVar1);
  if (lVar1 == 0) {
    if ((DAT_00106f22 >> 2 & 1) == 0) {
      return 0xfffffff4;
    }
    __dynamic_pr_debug(&PTR_s_configfs_00106f00,"configfs: %s: could not get root dentry!\n","configfs_fill_super");
    uVar2 = 0xfffffff4;
  }
  else {
    config_group_init(&PTR_DAT_00106d50);
    *(undefined1 **)(lVar1 + 0x90) = &DAT_00106cf8;
    *(undefined1 **)(param_1 + 0x5c0) = configfs_dentry_ops;
    uVar2 = 0;
    *(long *)(param_1 + 0x68) = lVar1;
    DAT_00106d98 = lVar1;
  }
  return uVar2;
}




bool configfs_is_root(undefined **param_1)

{
  _mcount();
  return param_1 == &PTR_DAT_00106d50;
}




long configfs_pin_fs(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = simple_pin_fs(&PTR_s_configfs_00106dd8,&DAT_00107288,&DAT_00107280);
  if (iVar1 == 0) {
    return *DAT_00107288;
  }
  return (long)iVar1;
}




void configfs_release_fs(void)

{
  _mcount();
  simple_release_fs(&DAT_00107288);
  return;
}




void config_group_init(long param_1)

{
  _mcount();
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(long *)(param_1 + 0x20) = param_1 + 0x20;
  *(long *)(param_1 + 0x50) = param_1 + 0x50;
  *(long *)(param_1 + 0x28) = param_1 + 0x20;
  *(long *)(param_1 + 0x58) = param_1 + 0x50;
  *(long *)(param_1 + 0x68) = param_1 + 0x68;
  *(long *)(param_1 + 0x70) = param_1 + 0x68;
  return;
}




undefined8
config_item_set_name
          (undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6
          ,undefined8 param_7,undefined8 param_8)

{
  char *__s;
  int iVar1;
  int iVar2;
  char *__s_00;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  _mcount();
  __s = (char *)(param_1 + 1);
  uStack_58 = 0xffffffd0;
  local_70 = (undefined1 *)register0x00000008;
  puStack_68 = (undefined1 *)register0x00000008;
  local_60 = &local_30;
  iVar1 = vsnprintf(__s,0x14,param_2,&local_70);
  __s_00 = __s;
  if (0x13 < iVar1) {
    iVar1 = iVar1 + 1;
    __s_00 = (char *)__kmalloc((long)iVar1,0x24000c0);
    if (__s_00 == (char *)0x0) {
      return 0xfffffff4;
    }
    uStack_58 = 0xffffffd0;
    local_70 = (undefined1 *)register0x00000008;
    puStack_68 = (undefined1 *)register0x00000008;
    local_60 = &local_30;
    iVar2 = vsnprintf(__s_00,(long)iVar1,param_2,&local_70);
    if (iVar1 <= iVar2) {
      kfree(__s_00);
      return 0xfffffff2;
    }
  }
  if ((char *)*param_1 != (char *)0x0 && __s != (char *)*param_1) {
    kfree();
  }
  *param_1 = __s_00;
  return 0;
}




void config_item_init_type_name(long param_1,undefined8 param_2,undefined8 param_3)

{
  _mcount();
  config_item_set_name(param_1,&DAT_001068f0,param_2);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(long *)(param_1 + 0x20) = param_1 + 0x20;
  *(long *)(param_1 + 0x28) = param_1 + 0x20;
  return;
}




void config_group_init_type_name(long param_1,undefined8 param_2,undefined8 param_3)

{
  _mcount();
  config_item_set_name(param_1,&DAT_001068f0,param_2);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(long *)(param_1 + 0x20) = param_1 + 0x20;
  *(long *)(param_1 + 0x50) = param_1 + 0x50;
  *(long *)(param_1 + 0x28) = param_1 + 0x20;
  *(long *)(param_1 + 0x58) = param_1 + 0x50;
  *(long *)(param_1 + 0x68) = param_1 + 0x68;
  *(long *)(param_1 + 0x70) = param_1 + 0x68;
  return;
}




void config_item_put(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  
  _mcount();
  if (param_1 != (undefined8 *)0x0) {
    piVar1 = (int *)((long)param_1 + 0x1c);
    Hint_Prefetch(piVar1,2,0,1);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 + -1 == 0) {
      lVar2 = param_1[6];
      lVar3 = param_1[7];
      lVar9 = param_1[8];
      if ((DAT_00106f4a >> 2 & 1) != 0) {
        __dynamic_pr_debug(&PTR_s_configfs_00106f28,"config_item %s: cleaning up\n",*param_1);
      }
      if ((undefined8 *)*param_1 != param_1 + 1) {
        kfree();
      }
      *param_1 = 0;
      if (((lVar9 != 0) && (puVar7 = *(undefined8 **)(lVar9 + 8), puVar7 != (undefined8 *)0x0)) &&
         (pcVar8 = (code *)*puVar7, pcVar8 != (code *)0x0)) {
        (*pcVar8)(param_1);
      }
      if (lVar3 != 0) {
        config_item_put(lVar3);
      }
      if (lVar2 != 0) {
        config_item_put(lVar2);
        return;
      }
    }
  }
  return;
}




long config_item_get(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  
  _mcount();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x1c);
    Hint_Prefetch(piVar1,2,0,1);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar2 + 1 < 2) && (DAT_00106f50 == '\0')) {
      DAT_00106f50 = 1;
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0x800,0x104580);
      (*pcVar5)();
    }
  }
  return param_1;
}




undefined8 config_group_find_item(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  _mcount();
  plVar3 = *(long **)(param_1 + 0x50);
  while( true ) {
    if (plVar3 == (long *)(param_1 + 0x50)) {
      return 0;
    }
    if (((char *)plVar3[-4] != (char *)0x0) && (iVar1 = strcmp((char *)plVar3[-4],param_2), iVar1 == 0)) break;
    plVar3 = (long *)*plVar3;
  }
  uVar2 = config_item_get(plVar3 + -4);
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int init_module(void)

{
  int iVar1;
  
  configfs_dir_cachep = kmem_cache_create("configfs_dir_cache",0x58,0,0,0);
  if (configfs_dir_cachep == 0) {
    iVar1 = -0xc;
  }
  else {
    iVar1 = sysfs_create_mount_point(_kernel_kobj,"config");
    if (iVar1 == 0) {
      iVar1 = register_filesystem(&PTR_s_configfs_00106dd8);
      if (iVar1 == 0) {
        return 0;
      }
      printk(&DAT_001067e8);
      sysfs_remove_mount_point(_kernel_kobj,"config");
    }
    kmem_cache_destroy(configfs_dir_cachep);
  }
  configfs_dir_cachep = 0;
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cleanup_module(void)

{
  unregister_filesystem(&PTR_s_configfs_00106dd8);
  sysfs_remove_mount_point(_kernel_kobj,"config");
  kmem_cache_destroy(configfs_dir_cachep);
  configfs_dir_cachep = 0;
  return;
}



