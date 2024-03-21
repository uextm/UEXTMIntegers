# [UEXTM Integers](https://github.com/uextm/UEXTMIntegers)
[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

Wrappers for integer types to enable Blueprint/UPROPERTY/UFUNCTION support in Unreal Engine.

![UEXTM Integers](./UEXTMIntegers.png)

## Description

This plugin adds wrappers to expose additional integer types to the reflection system in Unreal Engine 5.3+.

It was created as a workaround while waiting for approval for https://github.com/EpicGames/UnrealEngine/pull/11660

## Usage

```cpp
UPROPERTY(BlueprintReadWrite, EditAnywhere)
FUEXTMIntegers_Int8 SmallNumber = 42;

UFUNCTION(BlueprintCallable)
FUEXTMIntegers_Int16 DoSomething(FUEXTMIntegers_UInt64 BigNumber);
```

```cpp
FUEXTMIntegers_UInt16 A = 8;
uint16 B = 3;

uint16 C = A + B;
FUEXTMIntegers_UInt16 D = A % B;
int32 E = A;

D += B;
D ^= 4;
```

### Contributing

Any contribution is welcome and highly valuable:
- Bug Reports: Please report any bugs you might encounter with this plugin. Don't hesitate to report them in the issue section.
